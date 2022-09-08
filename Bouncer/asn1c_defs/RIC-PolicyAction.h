/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm-rc-v01.02.03.asn1"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-example`
 */

#ifndef	_RIC_PolicyAction_H_
#define	_RIC_PolicyAction_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RIC-ControlAction-ID.h"
#include "NativeEnumerated.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RIC_PolicyAction__ric_PolicyDecision {
	RIC_PolicyAction__ric_PolicyDecision_accept	= 0,
	RIC_PolicyAction__ric_PolicyDecision_reject	= 1
	/*
	 * Enumeration is extensible
	 */
} e_RIC_PolicyAction__ric_PolicyDecision;

/* Forward declarations */
struct RIC_PolicyAction_RANParameter_Item;

/* RIC-PolicyAction */
typedef struct RIC_PolicyAction {
	RIC_ControlAction_ID_t	 ric_PolicyAction_ID;
	struct RIC_PolicyAction__ranParameters_List {
		A_SEQUENCE_OF(struct RIC_PolicyAction_RANParameter_Item) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ranParameters_List;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	long	*ric_PolicyDecision;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RIC_PolicyAction_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ric_PolicyDecision_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RIC_PolicyAction;
extern asn_SEQUENCE_specifics_t asn_SPC_RIC_PolicyAction_specs_1;
extern asn_TYPE_member_t asn_MBR_RIC_PolicyAction_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _RIC_PolicyAction_H_ */
#include "asn_internal.h"
