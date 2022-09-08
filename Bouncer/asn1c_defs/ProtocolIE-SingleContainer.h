/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-Containers"
 * 	found in "e2ap-v02.02.03.asn1"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-example`
 */

#ifndef	_ProtocolIE_SingleContainer_H_
#define	_ProtocolIE_SingleContainer_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ProtocolIE-Field.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ProtocolIE-SingleContainer */
typedef RICaction_ToBeSetup_ItemIEs_t	 ProtocolIE_SingleContainer_2010P0_t;
typedef RICaction_Admitted_ItemIEs_t	 ProtocolIE_SingleContainer_2010P1_t;
typedef RICaction_NotAdmitted_ItemIEs_t	 ProtocolIE_SingleContainer_2010P2_t;
typedef RICsubscription_withCause_ItemIEs_t	 ProtocolIE_SingleContainer_2010P3_t;
typedef E2connectionUpdate_ItemIEs_t	 ProtocolIE_SingleContainer_2010P4_t;
typedef E2connectionUpdateRemove_ItemIEs_t	 ProtocolIE_SingleContainer_2010P5_t;
typedef E2connectionSetupFailed_ItemIEs_t	 ProtocolIE_SingleContainer_2010P6_t;
typedef E2nodeComponentConfigAddition_ItemIEs_t	 ProtocolIE_SingleContainer_2010P7_t;
typedef E2nodeComponentConfigUpdate_ItemIEs_t	 ProtocolIE_SingleContainer_2010P8_t;
typedef E2nodeComponentConfigRemoval_ItemIEs_t	 ProtocolIE_SingleContainer_2010P9_t;
typedef E2nodeTNLassociationRemoval_ItemIEs_t	 ProtocolIE_SingleContainer_2010P10_t;
typedef E2nodeComponentConfigAdditionAck_ItemIEs_t	 ProtocolIE_SingleContainer_2010P11_t;
typedef E2nodeComponentConfigUpdateAck_ItemIEs_t	 ProtocolIE_SingleContainer_2010P12_t;
typedef E2nodeComponentConfigRemovalAck_ItemIEs_t	 ProtocolIE_SingleContainer_2010P13_t;
typedef RANfunction_ItemIEs_t	 ProtocolIE_SingleContainer_2010P14_t;
typedef RANfunctionID_ItemIEs_t	 ProtocolIE_SingleContainer_2010P15_t;
typedef RANfunctionIDcause_ItemIEs_t	 ProtocolIE_SingleContainer_2010P16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2010P0;
asn_struct_free_f ProtocolIE_SingleContainer_2010P0_free;
asn_struct_print_f ProtocolIE_SingleContainer_2010P0_print;
asn_constr_check_f ProtocolIE_SingleContainer_2010P0_constraint;
ber_type_decoder_f ProtocolIE_SingleContainer_2010P0_decode_ber;
der_type_encoder_f ProtocolIE_SingleContainer_2010P0_encode_der;
xer_type_decoder_f ProtocolIE_SingleContainer_2010P0_decode_xer;
xer_type_encoder_f ProtocolIE_SingleContainer_2010P0_encode_xer;
oer_type_decoder_f ProtocolIE_SingleContainer_2010P0_decode_oer;
oer_type_encoder_f ProtocolIE_SingleContainer_2010P0_encode_oer;
per_type_decoder_f ProtocolIE_SingleContainer_2010P0_decode_uper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P0_encode_uper;
per_type_decoder_f ProtocolIE_SingleContainer_2010P0_decode_aper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P0_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2010P1;
asn_struct_free_f ProtocolIE_SingleContainer_2010P1_free;
asn_struct_print_f ProtocolIE_SingleContainer_2010P1_print;
asn_constr_check_f ProtocolIE_SingleContainer_2010P1_constraint;
ber_type_decoder_f ProtocolIE_SingleContainer_2010P1_decode_ber;
der_type_encoder_f ProtocolIE_SingleContainer_2010P1_encode_der;
xer_type_decoder_f ProtocolIE_SingleContainer_2010P1_decode_xer;
xer_type_encoder_f ProtocolIE_SingleContainer_2010P1_encode_xer;
oer_type_decoder_f ProtocolIE_SingleContainer_2010P1_decode_oer;
oer_type_encoder_f ProtocolIE_SingleContainer_2010P1_encode_oer;
per_type_decoder_f ProtocolIE_SingleContainer_2010P1_decode_uper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P1_encode_uper;
per_type_decoder_f ProtocolIE_SingleContainer_2010P1_decode_aper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P1_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2010P2;
asn_struct_free_f ProtocolIE_SingleContainer_2010P2_free;
asn_struct_print_f ProtocolIE_SingleContainer_2010P2_print;
asn_constr_check_f ProtocolIE_SingleContainer_2010P2_constraint;
ber_type_decoder_f ProtocolIE_SingleContainer_2010P2_decode_ber;
der_type_encoder_f ProtocolIE_SingleContainer_2010P2_encode_der;
xer_type_decoder_f ProtocolIE_SingleContainer_2010P2_decode_xer;
xer_type_encoder_f ProtocolIE_SingleContainer_2010P2_encode_xer;
oer_type_decoder_f ProtocolIE_SingleContainer_2010P2_decode_oer;
oer_type_encoder_f ProtocolIE_SingleContainer_2010P2_encode_oer;
per_type_decoder_f ProtocolIE_SingleContainer_2010P2_decode_uper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P2_encode_uper;
per_type_decoder_f ProtocolIE_SingleContainer_2010P2_decode_aper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P2_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2010P3;
asn_struct_free_f ProtocolIE_SingleContainer_2010P3_free;
asn_struct_print_f ProtocolIE_SingleContainer_2010P3_print;
asn_constr_check_f ProtocolIE_SingleContainer_2010P3_constraint;
ber_type_decoder_f ProtocolIE_SingleContainer_2010P3_decode_ber;
der_type_encoder_f ProtocolIE_SingleContainer_2010P3_encode_der;
xer_type_decoder_f ProtocolIE_SingleContainer_2010P3_decode_xer;
xer_type_encoder_f ProtocolIE_SingleContainer_2010P3_encode_xer;
oer_type_decoder_f ProtocolIE_SingleContainer_2010P3_decode_oer;
oer_type_encoder_f ProtocolIE_SingleContainer_2010P3_encode_oer;
per_type_decoder_f ProtocolIE_SingleContainer_2010P3_decode_uper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P3_encode_uper;
per_type_decoder_f ProtocolIE_SingleContainer_2010P3_decode_aper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P3_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2010P4;
asn_struct_free_f ProtocolIE_SingleContainer_2010P4_free;
asn_struct_print_f ProtocolIE_SingleContainer_2010P4_print;
asn_constr_check_f ProtocolIE_SingleContainer_2010P4_constraint;
ber_type_decoder_f ProtocolIE_SingleContainer_2010P4_decode_ber;
der_type_encoder_f ProtocolIE_SingleContainer_2010P4_encode_der;
xer_type_decoder_f ProtocolIE_SingleContainer_2010P4_decode_xer;
xer_type_encoder_f ProtocolIE_SingleContainer_2010P4_encode_xer;
oer_type_decoder_f ProtocolIE_SingleContainer_2010P4_decode_oer;
oer_type_encoder_f ProtocolIE_SingleContainer_2010P4_encode_oer;
per_type_decoder_f ProtocolIE_SingleContainer_2010P4_decode_uper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P4_encode_uper;
per_type_decoder_f ProtocolIE_SingleContainer_2010P4_decode_aper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P4_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2010P5;
asn_struct_free_f ProtocolIE_SingleContainer_2010P5_free;
asn_struct_print_f ProtocolIE_SingleContainer_2010P5_print;
asn_constr_check_f ProtocolIE_SingleContainer_2010P5_constraint;
ber_type_decoder_f ProtocolIE_SingleContainer_2010P5_decode_ber;
der_type_encoder_f ProtocolIE_SingleContainer_2010P5_encode_der;
xer_type_decoder_f ProtocolIE_SingleContainer_2010P5_decode_xer;
xer_type_encoder_f ProtocolIE_SingleContainer_2010P5_encode_xer;
oer_type_decoder_f ProtocolIE_SingleContainer_2010P5_decode_oer;
oer_type_encoder_f ProtocolIE_SingleContainer_2010P5_encode_oer;
per_type_decoder_f ProtocolIE_SingleContainer_2010P5_decode_uper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P5_encode_uper;
per_type_decoder_f ProtocolIE_SingleContainer_2010P5_decode_aper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P5_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2010P6;
asn_struct_free_f ProtocolIE_SingleContainer_2010P6_free;
asn_struct_print_f ProtocolIE_SingleContainer_2010P6_print;
asn_constr_check_f ProtocolIE_SingleContainer_2010P6_constraint;
ber_type_decoder_f ProtocolIE_SingleContainer_2010P6_decode_ber;
der_type_encoder_f ProtocolIE_SingleContainer_2010P6_encode_der;
xer_type_decoder_f ProtocolIE_SingleContainer_2010P6_decode_xer;
xer_type_encoder_f ProtocolIE_SingleContainer_2010P6_encode_xer;
oer_type_decoder_f ProtocolIE_SingleContainer_2010P6_decode_oer;
oer_type_encoder_f ProtocolIE_SingleContainer_2010P6_encode_oer;
per_type_decoder_f ProtocolIE_SingleContainer_2010P6_decode_uper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P6_encode_uper;
per_type_decoder_f ProtocolIE_SingleContainer_2010P6_decode_aper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P6_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2010P7;
asn_struct_free_f ProtocolIE_SingleContainer_2010P7_free;
asn_struct_print_f ProtocolIE_SingleContainer_2010P7_print;
asn_constr_check_f ProtocolIE_SingleContainer_2010P7_constraint;
ber_type_decoder_f ProtocolIE_SingleContainer_2010P7_decode_ber;
der_type_encoder_f ProtocolIE_SingleContainer_2010P7_encode_der;
xer_type_decoder_f ProtocolIE_SingleContainer_2010P7_decode_xer;
xer_type_encoder_f ProtocolIE_SingleContainer_2010P7_encode_xer;
oer_type_decoder_f ProtocolIE_SingleContainer_2010P7_decode_oer;
oer_type_encoder_f ProtocolIE_SingleContainer_2010P7_encode_oer;
per_type_decoder_f ProtocolIE_SingleContainer_2010P7_decode_uper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P7_encode_uper;
per_type_decoder_f ProtocolIE_SingleContainer_2010P7_decode_aper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P7_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2010P8;
asn_struct_free_f ProtocolIE_SingleContainer_2010P8_free;
asn_struct_print_f ProtocolIE_SingleContainer_2010P8_print;
asn_constr_check_f ProtocolIE_SingleContainer_2010P8_constraint;
ber_type_decoder_f ProtocolIE_SingleContainer_2010P8_decode_ber;
der_type_encoder_f ProtocolIE_SingleContainer_2010P8_encode_der;
xer_type_decoder_f ProtocolIE_SingleContainer_2010P8_decode_xer;
xer_type_encoder_f ProtocolIE_SingleContainer_2010P8_encode_xer;
oer_type_decoder_f ProtocolIE_SingleContainer_2010P8_decode_oer;
oer_type_encoder_f ProtocolIE_SingleContainer_2010P8_encode_oer;
per_type_decoder_f ProtocolIE_SingleContainer_2010P8_decode_uper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P8_encode_uper;
per_type_decoder_f ProtocolIE_SingleContainer_2010P8_decode_aper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P8_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2010P9;
asn_struct_free_f ProtocolIE_SingleContainer_2010P9_free;
asn_struct_print_f ProtocolIE_SingleContainer_2010P9_print;
asn_constr_check_f ProtocolIE_SingleContainer_2010P9_constraint;
ber_type_decoder_f ProtocolIE_SingleContainer_2010P9_decode_ber;
der_type_encoder_f ProtocolIE_SingleContainer_2010P9_encode_der;
xer_type_decoder_f ProtocolIE_SingleContainer_2010P9_decode_xer;
xer_type_encoder_f ProtocolIE_SingleContainer_2010P9_encode_xer;
oer_type_decoder_f ProtocolIE_SingleContainer_2010P9_decode_oer;
oer_type_encoder_f ProtocolIE_SingleContainer_2010P9_encode_oer;
per_type_decoder_f ProtocolIE_SingleContainer_2010P9_decode_uper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P9_encode_uper;
per_type_decoder_f ProtocolIE_SingleContainer_2010P9_decode_aper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P9_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2010P10;
asn_struct_free_f ProtocolIE_SingleContainer_2010P10_free;
asn_struct_print_f ProtocolIE_SingleContainer_2010P10_print;
asn_constr_check_f ProtocolIE_SingleContainer_2010P10_constraint;
ber_type_decoder_f ProtocolIE_SingleContainer_2010P10_decode_ber;
der_type_encoder_f ProtocolIE_SingleContainer_2010P10_encode_der;
xer_type_decoder_f ProtocolIE_SingleContainer_2010P10_decode_xer;
xer_type_encoder_f ProtocolIE_SingleContainer_2010P10_encode_xer;
oer_type_decoder_f ProtocolIE_SingleContainer_2010P10_decode_oer;
oer_type_encoder_f ProtocolIE_SingleContainer_2010P10_encode_oer;
per_type_decoder_f ProtocolIE_SingleContainer_2010P10_decode_uper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P10_encode_uper;
per_type_decoder_f ProtocolIE_SingleContainer_2010P10_decode_aper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P10_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2010P11;
asn_struct_free_f ProtocolIE_SingleContainer_2010P11_free;
asn_struct_print_f ProtocolIE_SingleContainer_2010P11_print;
asn_constr_check_f ProtocolIE_SingleContainer_2010P11_constraint;
ber_type_decoder_f ProtocolIE_SingleContainer_2010P11_decode_ber;
der_type_encoder_f ProtocolIE_SingleContainer_2010P11_encode_der;
xer_type_decoder_f ProtocolIE_SingleContainer_2010P11_decode_xer;
xer_type_encoder_f ProtocolIE_SingleContainer_2010P11_encode_xer;
oer_type_decoder_f ProtocolIE_SingleContainer_2010P11_decode_oer;
oer_type_encoder_f ProtocolIE_SingleContainer_2010P11_encode_oer;
per_type_decoder_f ProtocolIE_SingleContainer_2010P11_decode_uper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P11_encode_uper;
per_type_decoder_f ProtocolIE_SingleContainer_2010P11_decode_aper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P11_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2010P12;
asn_struct_free_f ProtocolIE_SingleContainer_2010P12_free;
asn_struct_print_f ProtocolIE_SingleContainer_2010P12_print;
asn_constr_check_f ProtocolIE_SingleContainer_2010P12_constraint;
ber_type_decoder_f ProtocolIE_SingleContainer_2010P12_decode_ber;
der_type_encoder_f ProtocolIE_SingleContainer_2010P12_encode_der;
xer_type_decoder_f ProtocolIE_SingleContainer_2010P12_decode_xer;
xer_type_encoder_f ProtocolIE_SingleContainer_2010P12_encode_xer;
oer_type_decoder_f ProtocolIE_SingleContainer_2010P12_decode_oer;
oer_type_encoder_f ProtocolIE_SingleContainer_2010P12_encode_oer;
per_type_decoder_f ProtocolIE_SingleContainer_2010P12_decode_uper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P12_encode_uper;
per_type_decoder_f ProtocolIE_SingleContainer_2010P12_decode_aper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P12_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2010P13;
asn_struct_free_f ProtocolIE_SingleContainer_2010P13_free;
asn_struct_print_f ProtocolIE_SingleContainer_2010P13_print;
asn_constr_check_f ProtocolIE_SingleContainer_2010P13_constraint;
ber_type_decoder_f ProtocolIE_SingleContainer_2010P13_decode_ber;
der_type_encoder_f ProtocolIE_SingleContainer_2010P13_encode_der;
xer_type_decoder_f ProtocolIE_SingleContainer_2010P13_decode_xer;
xer_type_encoder_f ProtocolIE_SingleContainer_2010P13_encode_xer;
oer_type_decoder_f ProtocolIE_SingleContainer_2010P13_decode_oer;
oer_type_encoder_f ProtocolIE_SingleContainer_2010P13_encode_oer;
per_type_decoder_f ProtocolIE_SingleContainer_2010P13_decode_uper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P13_encode_uper;
per_type_decoder_f ProtocolIE_SingleContainer_2010P13_decode_aper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P13_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2010P14;
asn_struct_free_f ProtocolIE_SingleContainer_2010P14_free;
asn_struct_print_f ProtocolIE_SingleContainer_2010P14_print;
asn_constr_check_f ProtocolIE_SingleContainer_2010P14_constraint;
ber_type_decoder_f ProtocolIE_SingleContainer_2010P14_decode_ber;
der_type_encoder_f ProtocolIE_SingleContainer_2010P14_encode_der;
xer_type_decoder_f ProtocolIE_SingleContainer_2010P14_decode_xer;
xer_type_encoder_f ProtocolIE_SingleContainer_2010P14_encode_xer;
oer_type_decoder_f ProtocolIE_SingleContainer_2010P14_decode_oer;
oer_type_encoder_f ProtocolIE_SingleContainer_2010P14_encode_oer;
per_type_decoder_f ProtocolIE_SingleContainer_2010P14_decode_uper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P14_encode_uper;
per_type_decoder_f ProtocolIE_SingleContainer_2010P14_decode_aper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P14_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2010P15;
asn_struct_free_f ProtocolIE_SingleContainer_2010P15_free;
asn_struct_print_f ProtocolIE_SingleContainer_2010P15_print;
asn_constr_check_f ProtocolIE_SingleContainer_2010P15_constraint;
ber_type_decoder_f ProtocolIE_SingleContainer_2010P15_decode_ber;
der_type_encoder_f ProtocolIE_SingleContainer_2010P15_encode_der;
xer_type_decoder_f ProtocolIE_SingleContainer_2010P15_decode_xer;
xer_type_encoder_f ProtocolIE_SingleContainer_2010P15_encode_xer;
oer_type_decoder_f ProtocolIE_SingleContainer_2010P15_decode_oer;
oer_type_encoder_f ProtocolIE_SingleContainer_2010P15_encode_oer;
per_type_decoder_f ProtocolIE_SingleContainer_2010P15_decode_uper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P15_encode_uper;
per_type_decoder_f ProtocolIE_SingleContainer_2010P15_decode_aper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P15_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2010P16;
asn_struct_free_f ProtocolIE_SingleContainer_2010P16_free;
asn_struct_print_f ProtocolIE_SingleContainer_2010P16_print;
asn_constr_check_f ProtocolIE_SingleContainer_2010P16_constraint;
ber_type_decoder_f ProtocolIE_SingleContainer_2010P16_decode_ber;
der_type_encoder_f ProtocolIE_SingleContainer_2010P16_encode_der;
xer_type_decoder_f ProtocolIE_SingleContainer_2010P16_decode_xer;
xer_type_encoder_f ProtocolIE_SingleContainer_2010P16_encode_xer;
oer_type_decoder_f ProtocolIE_SingleContainer_2010P16_decode_oer;
oer_type_encoder_f ProtocolIE_SingleContainer_2010P16_encode_oer;
per_type_decoder_f ProtocolIE_SingleContainer_2010P16_decode_uper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P16_encode_uper;
per_type_decoder_f ProtocolIE_SingleContainer_2010P16_decode_aper;
per_type_encoder_f ProtocolIE_SingleContainer_2010P16_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ProtocolIE_SingleContainer_H_ */
#include "asn_internal.h"
