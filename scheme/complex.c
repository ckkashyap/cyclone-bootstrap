/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2017 Justin Ethier
 ** Version 0.3.4.1 (beta)
 **
 **/

#define closcall1(td, clo,a1) \
if (type_is_pair_prim(clo)) { \
   Cyc_apply(td, 0, (closure)(a1), clo); \
} else { \
   ((clo)->fn)(td, 1, clo,a1);\
}
#define return_closcall1(td, clo,a1) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1;\
     GC(td, clo, buf, 1); \
     return; \
 } else {\
     closcall1(td, (closure) (clo),a1); \
     return;\
 } \
}

#define return_direct1(td, _fn,a1) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1; \
     mclosure0(c1, (function_type) _fn); \
     GC(td, &c1, buf, 1); \
     return; \
 } else { \
     (_fn)(td, 1, (closure)_fn,a1); \
 }}

#define closcall2(td, clo,a1,a2) \
if (type_is_pair_prim(clo)) { \
   Cyc_apply(td, 1, (closure)(a1), clo,a2); \
} else { \
   ((clo)->fn)(td, 2, clo,a1,a2);\
}
#define return_closcall2(td, clo,a1,a2) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2;\
     GC(td, clo, buf, 2); \
     return; \
 } else {\
     closcall2(td, (closure) (clo),a1,a2); \
     return;\
 } \
}

#define return_direct2(td, _fn,a1,a2) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2; \
     mclosure0(c1, (function_type) _fn); \
     GC(td, &c1, buf, 2); \
     return; \
 } else { \
     (_fn)(td, 2, (closure)_fn,a1,a2); \
 }}

#include "cyclone/types.h"
object __glo_lib_91init_117schemecomplex_scheme_complex = NULL;
object __glo_make_91polar_scheme_complex = NULL;
object __glo_make_91rectangular_scheme_complex = NULL;
object __glo_magnitude_scheme_complex = NULL;
object __glo_angle_scheme_complex = NULL;
object __glo_imag_91part_scheme_complex = NULL;
object __glo_real_91part_scheme_complex = NULL;
extern object __glo_member_scheme_base;
extern object __glo_assoc_scheme_base;
extern object __glo_cons_91source_scheme_base;
extern object __glo_syntax_91rules_scheme_base;
extern object __glo_letrec_85_scheme_base;
extern object __glo_guard_scheme_base;
extern object __glo_guard_91aux_scheme_base;
extern object __glo_define_91record_91type_scheme_base;
extern object __glo_record_127_scheme_base;
extern object __glo_register_91simple_91type_scheme_base;
extern object __glo_make_91type_91predicate_scheme_base;
extern object __glo_make_91constructor_scheme_base;
extern object __glo_make_91getter_scheme_base;
extern object __glo_make_91setter_scheme_base;
extern object __glo_slot_91set_67_scheme_base;
extern object __glo_type_91slot_91offset_scheme_base;
extern object __glo_receive_scheme_base;
extern object __glo_abs_scheme_base;
extern object __glo_max_scheme_base;
extern object __glo_min_scheme_base;
extern object __glo_modulo_scheme_base;
extern object __glo_floor_91remainder_scheme_base;
extern object __glo_even_127_scheme_base;
extern object __glo_exact_91integer_127_scheme_base;
extern object __glo_exact_91integer_91sqrt_scheme_base;
extern object __glo_exact_127_scheme_base;
extern object __glo_inexact_127_scheme_base;
extern object __glo_odd_127_scheme_base;
extern object __glo_complex_127_scheme_base;
extern object __glo_rational_127_scheme_base;
extern object __glo_bignum_127_scheme_base;
extern object __glo_gcd_scheme_base;
extern object __glo_lcm_scheme_base;
extern object __glo_quotient_scheme_base;
extern object __glo_remainder_scheme_base;
extern object __glo_truncate_91quotient_scheme_base;
extern object __glo_truncate_91remainder_scheme_base;
extern object __glo_truncate_95_scheme_base;
extern object __glo_floor_91quotient_scheme_base;
extern object __glo_floor_91remainder_scheme_base;
extern object __glo_floor_95_scheme_base;
extern object __glo_square_scheme_base;
extern object __glo_expt_scheme_base;
extern object __glo_call_91with_91current_91continuation_scheme_base;
extern object __glo_call_95cc_scheme_base;
extern object __glo_call_91with_91values_scheme_base;
extern object __glo_dynamic_91wind_scheme_base;
extern object __glo_values_scheme_base;
extern object __glo_char_123_127_scheme_base;
extern object __glo_char_121_127_scheme_base;
extern object __glo_char_125_127_scheme_base;
extern object __glo_char_121_123_127_scheme_base;
extern object __glo_char_125_123_127_scheme_base;
extern object __glo_string_123_127_scheme_base;
extern object __glo_string_121_127_scheme_base;
extern object __glo_string_121_123_127_scheme_base;
extern object __glo_string_125_127_scheme_base;
extern object __glo_string_125_123_127_scheme_base;
extern object __glo_foldl_scheme_base;
extern object __glo_foldr_scheme_base;
extern object __glo_not_scheme_base;
extern object __glo_list_127_scheme_base;
extern object __glo_zero_127_scheme_base;
extern object __glo_positive_127_scheme_base;
extern object __glo_negative_127_scheme_base;
extern object __glo_append_scheme_base;
extern object __glo__list_scheme_base;
extern object __glo_make_91list_scheme_base;
extern object __glo_list_91copy_scheme_base;
extern object __glo_map_scheme_base;
extern object __glo_for_91each_scheme_base;
extern object __glo_list_91tail_scheme_base;
extern object __glo_list_91ref_scheme_base;
extern object __glo_list_91set_67_scheme_base;
extern object __glo_reverse_scheme_base;
extern object __glo_boolean_123_127_scheme_base;
extern object __glo_symbol_123_127_scheme_base;
extern object __glo_Cyc_91obj_123_127_scheme_base;
extern object __glo_vector_scheme_base;
extern object __glo_vector_91append_scheme_base;
extern object __glo_vector_91copy_scheme_base;
extern object __glo_vector_91copy_67_scheme_base;
extern object __glo_vector_91fill_67_scheme_base;
extern object __glo_vector_91_125list_scheme_base;
extern object __glo_vector_91_125string_scheme_base;
extern object __glo_vector_91map_scheme_base;
extern object __glo_vector_91for_91each_scheme_base;
extern object __glo_make_91string_scheme_base;
extern object __glo_string_scheme_base;
extern object __glo_string_91copy_scheme_base;
extern object __glo_string_91copy_67_scheme_base;
extern object __glo_string_91fill_67_scheme_base;
extern object __glo_string_91_125list_scheme_base;
extern object __glo_string_91_125vector_scheme_base;
extern object __glo_string_91map_scheme_base;
extern object __glo_string_91for_91each_scheme_base;
extern object __glo_make_91parameter_scheme_base;
extern object __glo_current_91output_91port_scheme_base;
extern object __glo_current_91input_91port_scheme_base;
extern object __glo_current_91error_91port_scheme_base;
extern object __glo_call_91with_91port_scheme_base;
extern object __glo_error_scheme_base;
extern object __glo_raise_scheme_base;
extern object __glo_raise_91continuable_scheme_base;
extern object __glo_with_91handler_scheme_base;
extern object __glo_with_91exception_91handler_scheme_base;
extern object __glo_Cyc_91add_91exception_91handler_scheme_base;
extern object __glo_Cyc_91remove_91exception_91handler_scheme_base;
extern object __glo_newline_scheme_base;
extern object __glo_write_91char_scheme_base;
extern object __glo_write_91string_scheme_base;
extern object __glo_flush_91output_91port_scheme_base;
extern object __glo_read_91line_scheme_base;
extern object __glo_read_91string_scheme_base;
extern object __glo_input_91port_127_scheme_base;
extern object __glo_output_91port_127_scheme_base;
extern object __glo_input_91port_91open_127_scheme_base;
extern object __glo_output_91port_91open_127_scheme_base;
extern object __glo_get_91output_91string_scheme_base;
extern object __glo_open_91output_91string_scheme_base;
extern object __glo_open_91input_91string_scheme_base;
extern object __glo_get_91output_91bytevector_scheme_base;
extern object __glo_open_91input_91bytevector_scheme_base;
extern object __glo_open_91output_91bytevector_scheme_base;
extern object __glo_features_scheme_base;
extern object __glo_Cyc_91version_scheme_base;
extern object __glo_any_scheme_base;
extern object __glo_every_scheme_base;
extern object __glo_and_scheme_base;
extern object __glo_or_scheme_base;
extern object __glo_let_scheme_base;
extern object __glo_let_85_scheme_base;
extern object __glo_letrec_scheme_base;
extern object __glo_let_85_91values_scheme_base;
extern object __glo_let_91values_scheme_base;
extern object __glo_begin_scheme_base;
extern object __glo__case_scheme_base;
extern object __glo_cond_scheme_base;
extern object __glo_cond_91expand_scheme_base;
extern object __glo__do_scheme_base;
extern object __glo_when_scheme_base;
extern object __glo_unless_scheme_base;
extern object __glo_quasiquote_scheme_base;
extern object __glo_floor_scheme_base;
extern object __glo_ceiling_scheme_base;
extern object __glo_truncate_scheme_base;
extern object __glo_round_scheme_base;
extern object __glo_exact_scheme_base;
extern object __glo_inexact_scheme_base;
extern object __glo_eof_91object_scheme_base;
extern object __glo_syntax_91error_scheme_base;
extern object __glo_bytevector_91copy_scheme_base;
extern object __glo_bytevector_91copy_67_scheme_base;
extern object __glo_utf8_91_125string_scheme_base;
extern object __glo_string_91_125utf8_scheme_base;
extern object __glo_denominator_scheme_base;
extern object __glo_numerator_scheme_base;
extern object __glo_parameterize_scheme_base;
#include "cyclone/runtime.h"
static void __lambda_6(void *data, int argc, closure _,object k_7311) ;
static void __lambda_5(void *data, int argc, closure _,object k_7314, object x_732, object y_731) ;
static void __lambda_4(void *data, int argc, closure _,object k_7317, object x_734, object y_733) ;
static void __lambda_3(void *data, int argc, closure _,object k_7320, object z_735) ;
static void __lambda_2(void *data, int argc, closure _,object k_7323, object z_736) ;
static void __lambda_1(void *data, int argc, closure _,object k_7326, object x_737) ;
static void __lambda_0(void *data, int argc, closure _,object k_7329, object x_738) ;

static void __lambda_6(void *data, int argc, closure _,object k_7311) {
  Cyc_st_add(data, "scheme/complex.sld:lib-init:schemecomplex");
return_closcall1(data,  k_7311,  obj_int2obj(0));; 
}

static void __lambda_5(void *data, int argc, closure _,object k_7314, object x_732, object y_731) {
  Cyc_st_add(data, "scheme/complex.sld:make-polar");

make_string(c_7345, "Complex numbers are not supported at this time");
return_closcall2(data,  __glo_error_scheme_base,  k_7314, &c_7345);; 
}

static void __lambda_4(void *data, int argc, closure _,object k_7317, object x_734, object y_733) {
  Cyc_st_add(data, "scheme/complex.sld:make-rectangular");

make_string(c_7342, "Complex numbers are not supported at this time");
return_closcall2(data,  __glo_error_scheme_base,  k_7317, &c_7342);; 
}

static void __lambda_3(void *data, int argc, closure _,object k_7320, object z_735) {
  Cyc_st_add(data, "scheme/complex.sld:magnitude");

make_string(c_7339, "Complex numbers are not supported at this time");
return_closcall2(data,  __glo_error_scheme_base,  k_7320, &c_7339);; 
}

static void __lambda_2(void *data, int argc, closure _,object k_7323, object z_736) {
  Cyc_st_add(data, "scheme/complex.sld:angle");

make_string(c_7336, "Complex numbers are not supported at this time");
return_closcall2(data,  __glo_error_scheme_base,  k_7323, &c_7336);; 
}

static void __lambda_1(void *data, int argc, closure _,object k_7326, object x_737) {
  Cyc_st_add(data, "scheme/complex.sld:imag-part");
return_closcall1(data,  k_7326,  obj_int2obj(0));; 
}

static void __lambda_0(void *data, int argc, closure _,object k_7329, object x_738) {
  Cyc_st_add(data, "scheme/complex.sld:real-part");
return_closcall1(data,  k_7329,  x_738);; 
}

void c_schemecomplex_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 

  add_global((object *) &__glo_lib_91init_117schemecomplex_scheme_complex);
  add_global((object *) &__glo_make_91polar_scheme_complex);
  add_global((object *) &__glo_make_91rectangular_scheme_complex);
  add_global((object *) &__glo_magnitude_scheme_complex);
  add_global((object *) &__glo_angle_scheme_complex);
  add_global((object *) &__glo_imag_91part_scheme_complex);
  add_global((object *) &__glo_real_91part_scheme_complex);
  mclosure0(c_7346, (function_type)__lambda_6);c_7346.num_args = 0; 
  __glo_lib_91init_117schemecomplex_scheme_complex = &c_7346; 
  mclosure0(c_7343, (function_type)__lambda_5);c_7343.num_args = 2; 
  __glo_make_91polar_scheme_complex = &c_7343; 
  mclosure0(c_7340, (function_type)__lambda_4);c_7340.num_args = 2; 
  __glo_make_91rectangular_scheme_complex = &c_7340; 
  mclosure0(c_7337, (function_type)__lambda_3);c_7337.num_args = 1; 
  __glo_magnitude_scheme_complex = &c_7337; 
  mclosure0(c_7334, (function_type)__lambda_2);c_7334.num_args = 1; 
  __glo_angle_scheme_complex = &c_7334; 
  mclosure0(c_7332, (function_type)__lambda_1);c_7332.num_args = 1; 
  __glo_imag_91part_scheme_complex = &c_7332; 
  mclosure0(c_7330, (function_type)__lambda_0);c_7330.num_args = 1; 
  __glo_real_91part_scheme_complex = &c_7330; 

  make_cvar(cvar_7348, (object *)&__glo_lib_91init_117schemecomplex_scheme_complex);make_pair(pair_7349, find_or_add_symbol("lib-init:schemecomplex"), &cvar_7348);
  make_cvar(cvar_7350, (object *)&__glo_make_91polar_scheme_complex);make_pair(pair_7351, find_or_add_symbol("make-polar"), &cvar_7350);
  make_cvar(cvar_7352, (object *)&__glo_make_91rectangular_scheme_complex);make_pair(pair_7353, find_or_add_symbol("make-rectangular"), &cvar_7352);
  make_cvar(cvar_7354, (object *)&__glo_magnitude_scheme_complex);make_pair(pair_7355, find_or_add_symbol("magnitude"), &cvar_7354);
  make_cvar(cvar_7356, (object *)&__glo_angle_scheme_complex);make_pair(pair_7357, find_or_add_symbol("angle"), &cvar_7356);
  make_cvar(cvar_7358, (object *)&__glo_imag_91part_scheme_complex);make_pair(pair_7359, find_or_add_symbol("imag-part"), &cvar_7358);
  make_cvar(cvar_7360, (object *)&__glo_real_91part_scheme_complex);make_pair(pair_7361, find_or_add_symbol("real-part"), &cvar_7360);
make_pair(c_7362, &pair_7349,Cyc_global_variables);
make_pair(c_7363, &pair_7351, &c_7362);
make_pair(c_7364, &pair_7353, &c_7363);
make_pair(c_7365, &pair_7355, &c_7364);
make_pair(c_7366, &pair_7357, &c_7365);
make_pair(c_7367, &pair_7359, &c_7366);
make_pair(c_7368, &pair_7361, &c_7367);
Cyc_global_variables = &c_7368;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117schemecomplex_scheme_complex)->fn)(data, 1, cont, cont);
}
