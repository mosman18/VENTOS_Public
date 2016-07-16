/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735.asn"
 */

#ifndef	_SpeedConfidence_H_
#define	_SpeedConfidence_H_


#include <SAE_J2735/asn_application.h>

/* Including external dependencies */
#include <SAE_J2735/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SpeedConfidence {
	SpeedConfidence_unavailable	= 0,
	SpeedConfidence_prec100ms	= 1,
	SpeedConfidence_prec10ms	= 2,
	SpeedConfidence_prec5ms	= 3,
	SpeedConfidence_prec1ms	= 4,
	SpeedConfidence_prec0_1ms	= 5,
	SpeedConfidence_prec0_05ms	= 6,
	SpeedConfidence_prec0_01ms	= 7
} e_SpeedConfidence;

/* SpeedConfidence */
typedef long	 SpeedConfidence_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SpeedConfidence;
asn_struct_free_f SpeedConfidence_free;
asn_struct_print_f SpeedConfidence_print;
asn_constr_check_f SpeedConfidence_constraint;
ber_type_decoder_f SpeedConfidence_decode_ber;
der_type_encoder_f SpeedConfidence_encode_der;
xer_type_decoder_f SpeedConfidence_decode_xer;
xer_type_encoder_f SpeedConfidence_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _SpeedConfidence_H_ */
#include <SAE_J2735/asn_internal.h>