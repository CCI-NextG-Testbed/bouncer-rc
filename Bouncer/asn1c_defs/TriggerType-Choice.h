/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm-rc-v01.02.03.asn1"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-example`
 */

#ifndef	_TriggerType_Choice_H_
#define	_TriggerType_Choice_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TriggerType_Choice_PR {
	TriggerType_Choice_PR_NOTHING,	/* No components present */
	TriggerType_Choice_PR_triggerType_Choice_RRCstate,
	TriggerType_Choice_PR_triggerType_Choice_UEID,
	TriggerType_Choice_PR_triggerType_Choice_L2state
	/* Extensions may appear below */
	
} TriggerType_Choice_PR;

/* Forward declarations */
struct TriggerType_Choice_RRCstate;
struct TriggerType_Choice_UEID;
struct TriggerType_Choice_L2state;

/* TriggerType-Choice */
typedef struct TriggerType_Choice {
	TriggerType_Choice_PR present;
	union TriggerType_Choice_u {
		struct TriggerType_Choice_RRCstate	*triggerType_Choice_RRCstate;
		struct TriggerType_Choice_UEID	*triggerType_Choice_UEID;
		struct TriggerType_Choice_L2state	*triggerType_Choice_L2state;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TriggerType_Choice_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TriggerType_Choice;
extern asn_CHOICE_specifics_t asn_SPC_TriggerType_Choice_specs_1;
extern asn_TYPE_member_t asn_MBR_TriggerType_Choice_1[3];
extern asn_per_constraints_t asn_PER_type_TriggerType_Choice_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _TriggerType_Choice_H_ */
#include "asn_internal.h"
