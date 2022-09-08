/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm-rc-v01.02.03.asn1"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-example`
 */

#ifndef	_MessageType_Choice_RRC_H_
#define	_MessageType_Choice_RRC_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RRC-MessageID.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MessageType-Choice-RRC */
typedef struct MessageType_Choice_RRC {
	RRC_MessageID_t	 rRC_Message;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MessageType_Choice_RRC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MessageType_Choice_RRC;
extern asn_SEQUENCE_specifics_t asn_SPC_MessageType_Choice_RRC_specs_1;
extern asn_TYPE_member_t asn_MBR_MessageType_Choice_RRC_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _MessageType_Choice_RRC_H_ */
#include "asn_internal.h"
