/*
# ==================================================================================
# Copyright (c) 2020 HCL Technologies Limited.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
# ==================================================================================
*/


#pragma once

#ifndef XAPP_MSG_XAPP_MSG_HPP_
#define XAPP_MSG_XAPP_MSG_HPP_

#include <iostream>
#include <chrono>
#include <unordered_map>
#include <string>
#include <rmr/rmr.h>
#include <rmr/RIC_message_types.h>
#include <mdclog/mdclog.h>

#include "a1_helper.hpp"
#include "e2ap_control.hpp"
#include "E2SM-RC-ControlMessage-Format1-Item.h"
#include "E2SM-RC-IndicationMessage-Format5-Item.h"
#include "e2ap_control_response.hpp"
#include "e2ap_indication.hpp"
#include "subscription_delete_request.hpp"
#include "subscription_delete_response.hpp"
#include "subscription_helper.hpp"
#include "subscription_request.hpp"
#include "subscription_response.hpp"
#include "e2sm_subscription.hpp"
#include "subs_mgmt.hpp"
#include "e2sm_control.hpp"

#include "InfluxDBFactory.h"

#define MAX_RMR_RECV_SIZE 2<<15

class XappMsgHandler{

private:
	std::string xapp_id;
	SubscriptionHandler *_ref_sub_handler;
	std::shared_ptr<influxdb::InfluxDB> influxdb;
	typedef struct control_stats{	
		int control_req_counter;
		int control_ack_counter;
		int control_failure_counter;
		std::chrono::time_point<std::chrono::steady_clock> e2ap_start_time;
		std::chrono::time_point<std::chrono::steady_clock> e2ap_stop_time;
	}control_stats_t;
	std::unordered_map<std::string,control_stats_t> meid_map;
public:
	//constructor for xapp_id.
	 XappMsgHandler(std::string xid){xapp_id=xid; _ref_sub_handler=NULL;};
	 XappMsgHandler(std::string xid, SubscriptionHandler &subhandler){xapp_id=xid; _ref_sub_handler=&subhandler;};

	 void operator() (rmr_mbuf_t *, bool*);

	 void register_handler();
	 bool encode_subscription_delete_request(unsigned char*, ssize_t* );

	 bool decode_subscription_response(unsigned char*, size_t );

	 //bool a1_policy_handler(char *, int* , a1_policy_helper &);

	 void testfunction() {std::cout << "<<<<<<<<<<<<<<<<<<IN TEST FUNCTION<<<<<<<<<<<<<<<" << std::endl;}
	 bool calculate_e2_latency(std::string&, control_stats_t);
};


#endif /* XAPP_MSG_XAPP_MSG_HPP_ */
