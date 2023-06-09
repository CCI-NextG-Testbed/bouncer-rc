#/*
#==================================================================================
#
#        Copyright (c) 2019-2020 AT&T Intellectual Property.
#
#   Licensed under the Apache License, Version 2.0 (the "License");
#   you may not use this file except in compliance with the License.
#   You may obtain a copy of the License at
#
#       http://www.apache.org/licenses/LICENSE-2.0
#
#   Unless required by applicable law or agreed to in writing, software
#   distributed under the License is distributed on an "AS IS" BASIS,
#   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#   See the License for the specific language governing permissions and
#   limitations under the License.
#==================================================================================
# */

ARG SCHEMA_PATH=schemas
ARG STAGE_DIR=/tmp/bouncer-xapp

#==================================================================================
FROM nexus3.o-ran-sc.org:10002/o-ran-sc/bldr-ubuntu20-c-go:1.0.0 as ricbuild

ARG SCHEMA_PATH
ARG STAGE_DIR

# Install necessary packages
RUN apt-get update  \
    && apt-get install -y \
    cmake \
    git \
    build-essential \
    automake \
    autoconf-archive \
    autoconf \
    pkg-config \
    gawk \
    libtool \
    wget \
    zlib1g-dev \
    libffi-dev \
    libcpprest-dev \
    cpputest \
    libhiredis-dev \
    libcurl4-openssl-dev \
    && apt-get clean

WORKDIR ${STAGE_DIR}

# Install mdclog using debian package hosted at packagecloud.io
ARG MDC_VER=0.1.4-1
RUN wget -nv --content-disposition https://packagecloud.io/o-ran-sc/release/packages/debian/stretch/mdclog_${MDC_VER}_amd64.deb/download.deb && \
    wget -nv --content-disposition https://packagecloud.io/o-ran-sc/release/packages/debian/stretch/mdclog-dev_${MDC_VER}_amd64.deb/download.deb && \
    dpkg -i mdclog_${MDC_VER}_amd64.deb mdclog-dev_${MDC_VER}_amd64.deb

# Install RMR using debian package hosted at packagecloud.io
ARG RMR_VER=4.8.3
RUN wget -nv --content-disposition https://packagecloud.io/o-ran-sc/release/packages/debian/stretch/rmr_${RMR_VER}_amd64.deb/download.deb && \
    wget -nv --content-disposition https://packagecloud.io/o-ran-sc/release/packages/debian/stretch/rmr-dev_${RMR_VER}_amd64.deb/download.deb && \
    dpkg -i rmr_${RMR_VER}_amd64.deb rmr-dev_${RMR_VER}_amd64.deb

#Install RNIB libraries
RUN wget https://filebox.ece.vt.edu/~vikaskrishnan/rnib_1.2.7_all.deb && \
    dpkg -i rnib_1.2.7_all.deb

RUN git clone https://github.com/azadkuh/nlohmann_json_release.git && \
    mkdir /usr/local/include/nlohmann && \
    cp nlohmann_json_release/json.hpp /usr/local/include/nlohmann

## Install SDL Libraries
RUN git clone https://gerrit.o-ran-sc.org/r/ric-plt/dbaas && \
    cd dbaas/redismodule && \
    ./autogen.sh && \
    ./configure && \
    make -j 4 all && \
    make install

RUN git clone https://gerrit.o-ran-sc.org/r/ric-plt/sdl && \
    cd sdl && \
    ./autogen.sh && \
    ./configure && \
    make -j 4 all && \
    make install

## Install rapidjson
RUN git clone https://github.com/Tencent/rapidjson && \
    cd rapidjson && \
    mkdir build && \
    cd build && \
    cmake -DCMAKE_INSTALL_PREFIX=/usr/local .. && \
    make -j 4 install && \
    cd ${STAGE_DIR} && \
    rm -rf rapidjson

# Install InfluxDB
RUN cd /tmp \
  && git clone https://github.com/offa/influxdb-cxx \
  && cd influxdb-cxx \
  && git checkout 6b76bd02f26166e03888214914e5f9a000feb7d8 \
  && mkdir -p build && cd build \
  && cmake ../ && make install && ldconfig \
  && cd .. && rm -rf /tmp/influxdb-cxx

##-----------------------------------
# Now install the program
#------------------------------------
COPY ./ ${STAGE_DIR}

RUN export CPATH=$CPATH:/usr/local/include && \
    cd src && \
    # sh does not have source, so we use .
    # . ./xapp_env.sh \
    # source ./xapp_env.sh \
    make clean && \
    make -j 4 install

COPY ${SCHEMA_PATH}/* init/routes.txt init/config-map.yaml /etc/xapp/
# COPY init/init_script.py /etc/xapp/init_script.py


#---------------------------------------------
# #Build the final version
FROM ubuntu:20.04

ARG STAGE_DIR

RUN apt-get update && \
    apt-get install -y libcpprest2.10 libhiredis0.14 && \
    apt-get clean

## copy just the needed libraries install them into the final image
COPY --from=ricbuild ${STAGE_DIR}/rmr_*.deb ${STAGE_DIR}/mdclog_*.deb /tmp/
RUN dpkg -i /tmp/*.deb && \
    rm -f /tmp/*.deb

COPY --from=ricbuild /etc/xapp/* /etc/xapp/
COPY --from=ricbuild /usr/local/bin/b_xapp_main /usr/local/bin/b_xapp_main
COPY --from=ricbuild /usr/local/lib/libInfluxDB.so /usr/local/lib/libInfluxDB.so
COPY --from=ricbuild /lib/x86_64-linux-gnu/libcurl.so.4 /lib/x86_64-linux-gnu/libcurl.so.4
COPY --from=ricbuild /lib/x86_64-linux-gnu/libnghttp2.so.14 /lib/x86_64-linux-gnu/libnghttp2.so.14
COPY --from=ricbuild /lib/x86_64-linux-gnu/librtmp.so.1 /lib/x86_64-linux-gnu/librtmp.so.1
COPY --from=ricbuild /lib/x86_64-linux-gnu/libssl.so.1.1 /lib/x86_64-linux-gnu/libssl.so.1.1
COPY --from=ricbuild /lib/x86_64-linux-gnu/libssh.so.4 /lib/x86_64-linux-gnu/libssh.so.4
COPY --from=ricbuild /lib/x86_64-linux-gnu/libasn1.so.8 /lib/x86_64-linux-gnu/libasn1.so.8
COPY --from=ricbuild /lib/x86_64-linux-gnu/libssl.so.1.1 /lib/x86_64-linux-gnu/libssl.so.1.1
COPY --from=ricbuild /lib/x86_64-linux-gnu/libasn1.so.8 /lib/x86_64-linux-gnu/libasn1.so.8
COPY --from=ricbuild /lib/x86_64-linux-gnu/libcom_err.so.2 /lib/x86_64-linux-gnu/libcom_err.so.2
COPY --from=ricbuild /lib/x86_64-linux-gnu/libcrypt.so.1 /lib/x86_64-linux-gnu/libcrypt.so.1
COPY --from=ricbuild /lib/x86_64-linux-gnu/libgssapi.so.3 /lib/x86_64-linux-gnu/libgssapi.so.3
COPY --from=ricbuild /lib/x86_64-linux-gnu/libgssapi_krb5.so.2 /lib/x86_64-linux-gnu/libgssapi_krb5.so.2
COPY --from=ricbuild /lib/x86_64-linux-gnu/libhcrypto.so.4 /lib/x86_64-linux-gnu/libhcrypto.so.4
COPY --from=ricbuild /lib/x86_64-linux-gnu/libheimbase.so.1 /lib/x86_64-linux-gnu/libheimbase.so.1
COPY --from=ricbuild /lib/x86_64-linux-gnu/libheimntlm.so.0 /lib/x86_64-linux-gnu/libheimntlm.so.0
COPY --from=ricbuild /lib/x86_64-linux-gnu/libhx509.so.5 /lib/x86_64-linux-gnu/libhx509.so.5
COPY --from=ricbuild /lib/x86_64-linux-gnu/libk5crypto.so.3 /lib/x86_64-linux-gnu/libk5crypto.so.3
COPY --from=ricbuild /lib/x86_64-linux-gnu/libkeyutils.so.1 /lib/x86_64-linux-gnu/libkeyutils.so.1
COPY --from=ricbuild /lib/x86_64-linux-gnu/libkrb5.so.26 /lib/x86_64-linux-gnu/libkrb5.so.26
COPY --from=ricbuild /lib/x86_64-linux-gnu/libkrb5.so.3 /lib/x86_64-linux-gnu/libkrb5.so.3
COPY --from=ricbuild /lib/x86_64-linux-gnu/libkrb5support.so.0 /lib/x86_64-linux-gnu/libkrb5support.so.0
COPY --from=ricbuild /lib/x86_64-linux-gnu/liblber-2.4.so.2 /lib/x86_64-linux-gnu/liblber-2.4.so.2
COPY --from=ricbuild /lib/x86_64-linux-gnu/libldap_r-2.4.so.2 /lib/x86_64-linux-gnu/libldap_r-2.4.so.2
COPY --from=ricbuild /lib/x86_64-linux-gnu/libpsl.so.5 /lib/x86_64-linux-gnu/libpsl.so.5
COPY --from=ricbuild /lib/x86_64-linux-gnu/libresolv.so.2 /lib/x86_64-linux-gnu/libresolv.so.2
COPY --from=ricbuild /lib/x86_64-linux-gnu/libroken.so.18 /lib/x86_64-linux-gnu/libroken.so.18
COPY --from=ricbuild /lib/x86_64-linux-gnu/libsasl2.so.2 /lib/x86_64-linux-gnu/libsasl2.so.2
COPY --from=ricbuild /lib/x86_64-linux-gnu/libsqlite3.so.0 /lib/x86_64-linux-gnu/libsqlite3.so.0
COPY --from=ricbuild /lib/x86_64-linux-gnu/libtasn1.so.6 /lib/x86_64-linux-gnu/libtasn1.so.6
COPY --from=ricbuild /lib/x86_64-linux-gnu/libwind.so.0 /lib/x86_64-linux-gnu/libwind.so.0


##ENV  PYTHONHOME=/opt/python3 \
##     PYTHONPATH=/opt/python3 \
ENV RMR_RTG_SVC="9999" \
    RMR_SEED_RT="/etc/xapp/routes.txt" \
    LD_LIBRARY_PATH="/usr/local/lib:/usr/local/libexec" \
    VERBOSE=0 \
    CONFIG_MAP_NAME=/etc/xapp/config-map.yaml \
    CONFIG_FILE=/opt/ric/config/config-file.json

# CMD python3 /etc/xapp/init_script.py $CONFIG_FILE
# CMD ["sleep", "360000"]
ENTRYPOINT [ "b_xapp_main"]
