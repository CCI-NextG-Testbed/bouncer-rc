/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm-v02.01.asn1"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-example`
 */

#ifndef	_ServingCell_PCI_H_
#define	_ServingCell_PCI_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NR-PCI.h"
#include "E-UTRA-PCI.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ServingCell_PCI_PR {
	ServingCell_PCI_PR_NOTHING,	/* No components present */
	ServingCell_PCI_PR_nR,
	ServingCell_PCI_PR_eUTRA
	/* Extensions may appear below */
	
} ServingCell_PCI_PR;

/* ServingCell-PCI */
typedef struct ServingCell_PCI {
	ServingCell_PCI_PR present;
	union ServingCell_PCI_u {
		NR_PCI_t	 nR;
		E_UTRA_PCI_t	 eUTRA;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ServingCell_PCI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ServingCell_PCI;
extern asn_CHOICE_specifics_t asn_SPC_ServingCell_PCI_specs_1;
extern asn_TYPE_member_t asn_MBR_ServingCell_PCI_1[2];
extern asn_per_constraints_t asn_PER_type_ServingCell_PCI_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ServingCell_PCI_H_ */
#include "asn_internal.h"
