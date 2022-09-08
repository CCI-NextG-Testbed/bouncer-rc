/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm-rc-v01.02.03.asn1"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-example`
 */

#include "RIC-PolicyAction.h"

#include "RIC-PolicyAction-RANParameter-Item.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_ranParameters_List_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 65535)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_ranParameters_List_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..65535)) */};
static asn_per_constraints_t asn_PER_type_ranParameters_List_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 16,  16,  1,  65535 }	/* (SIZE(1..65535)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ric_PolicyDecision_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ric_PolicyDecision_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ranParameters_List_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..65535)) */};
static asn_per_constraints_t asn_PER_memb_ranParameters_List_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 16,  16,  1,  65535 }	/* (SIZE(1..65535)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ranParameters_List_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RIC_PolicyAction_RANParameter_Item,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ranParameters_List_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ranParameters_List_specs_3 = {
	sizeof(struct RIC_PolicyAction__ranParameters_List),
	offsetof(struct RIC_PolicyAction__ranParameters_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ranParameters_List_3 = {
	"ranParameters-List",
	"ranParameters-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ranParameters_List_tags_3,
	sizeof(asn_DEF_ranParameters_List_tags_3)
		/sizeof(asn_DEF_ranParameters_List_tags_3[0]) - 1, /* 1 */
	asn_DEF_ranParameters_List_tags_3,	/* Same as above */
	sizeof(asn_DEF_ranParameters_List_tags_3)
		/sizeof(asn_DEF_ranParameters_List_tags_3[0]), /* 2 */
	{ &asn_OER_type_ranParameters_List_constr_3, &asn_PER_type_ranParameters_List_constr_3, SEQUENCE_OF_constraint },
	asn_MBR_ranParameters_List_3,
	1,	/* Single element */
	&asn_SPC_ranParameters_List_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ric_PolicyDecision_value2enum_6[] = {
	{ 0,	6,	"accept" },
	{ 1,	6,	"reject" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_ric_PolicyDecision_enum2value_6[] = {
	0,	/* accept(0) */
	1	/* reject(1) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_ric_PolicyDecision_specs_6 = {
	asn_MAP_ric_PolicyDecision_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_ric_PolicyDecision_enum2value_6,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ric_PolicyDecision_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ric_PolicyDecision_6 = {
	"ric-PolicyDecision",
	"ric-PolicyDecision",
	&asn_OP_NativeEnumerated,
	asn_DEF_ric_PolicyDecision_tags_6,
	sizeof(asn_DEF_ric_PolicyDecision_tags_6)
		/sizeof(asn_DEF_ric_PolicyDecision_tags_6[0]) - 1, /* 1 */
	asn_DEF_ric_PolicyDecision_tags_6,	/* Same as above */
	sizeof(asn_DEF_ric_PolicyDecision_tags_6)
		/sizeof(asn_DEF_ric_PolicyDecision_tags_6[0]), /* 2 */
	{ &asn_OER_type_ric_PolicyDecision_constr_6, &asn_PER_type_ric_PolicyDecision_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ric_PolicyDecision_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RIC_PolicyAction_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RIC_PolicyAction, ric_PolicyAction_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RIC_ControlAction_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ric-PolicyAction-ID"
		},
	{ ATF_POINTER, 2, offsetof(struct RIC_PolicyAction, ranParameters_List),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ranParameters_List_3,
		0,
		{ &asn_OER_memb_ranParameters_List_constr_3, &asn_PER_memb_ranParameters_List_constr_3,  memb_ranParameters_List_constraint_1 },
		0, 0, /* No default value */
		"ranParameters-List"
		},
	{ ATF_POINTER, 1, offsetof(struct RIC_PolicyAction, ric_PolicyDecision),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ric_PolicyDecision_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ric-PolicyDecision"
		},
};
static const int asn_MAP_RIC_PolicyAction_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_RIC_PolicyAction_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RIC_PolicyAction_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ric-PolicyAction-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ranParameters-List */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ric-PolicyDecision */
};
asn_SEQUENCE_specifics_t asn_SPC_RIC_PolicyAction_specs_1 = {
	sizeof(struct RIC_PolicyAction),
	offsetof(struct RIC_PolicyAction, _asn_ctx),
	asn_MAP_RIC_PolicyAction_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_RIC_PolicyAction_oms_1,	/* Optional members */
	1, 1,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RIC_PolicyAction = {
	"RIC-PolicyAction",
	"RIC-PolicyAction",
	&asn_OP_SEQUENCE,
	asn_DEF_RIC_PolicyAction_tags_1,
	sizeof(asn_DEF_RIC_PolicyAction_tags_1)
		/sizeof(asn_DEF_RIC_PolicyAction_tags_1[0]), /* 1 */
	asn_DEF_RIC_PolicyAction_tags_1,	/* Same as above */
	sizeof(asn_DEF_RIC_PolicyAction_tags_1)
		/sizeof(asn_DEF_RIC_PolicyAction_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RIC_PolicyAction_1,
	3,	/* Elements count */
	&asn_SPC_RIC_PolicyAction_specs_1	/* Additional specs */
};

