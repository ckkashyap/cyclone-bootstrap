/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2016 Justin Ethier
 ** Version 0.3 (beta)
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
object __glo_lib_91init_117schemewrite_scheme_write = NULL;
object __glo_write_91simple_scheme_write = NULL;
object __glo_write_91shared_scheme_write = NULL;
object __glo_write_scheme_write = NULL;
object __glo_display_scheme_write = NULL;
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
extern object __glo_exact_127_scheme_base;
extern object __glo_inexact_127_scheme_base;
extern object __glo_odd_127_scheme_base;
extern object __glo_complex_127_scheme_base;
extern object __glo_rational_127_scheme_base;
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
static void __lambda_5(void *data, int argc, closure _,object k_737) ;
static void __lambda_4(void *data, int argc, object self_7326, object r_739) ;
static void __lambda_3(void *data, int argc, closure _,object k_7316, object obj_732, object port_731_raw, ...) ;
static void __lambda_2(void *data, int argc, object self_7327, object r_7318) ;
static void __lambda_1(void *data, int argc, closure _,object k_7322, object obj_734, object port_733_raw, ...) ;
static void __lambda_0(void *data, int argc, object self_7328, object r_7324) ;

static void __lambda_5(void *data, int argc, closure _,object k_737) {
  Cyc_st_add(data, "scheme/write.sld:lib-init:schemewrite");

closureN_type c_7361;
c_7361.hdr.mark = gc_color_red;
 c_7361.hdr.grayed = 0;
c_7361.tag = closureN_tag;
 c_7361.fn = (function_type)__lambda_4;
c_7361.num_args = 1;
c_7361.num_elements = 1;
c_7361.elements = (object *)alloca(sizeof(object) * 1);
c_7361.elements[0] = k_737;

return_closcall1(data,(closure)&c_7361,  global_set(__glo_write_91shared_scheme_write, __glo_write_scheme_write));; 
}

static void __lambda_4(void *data, int argc, object self_7326, object r_739) {
  return_closcall1(data,  ((closureN)self_7326)->elements[0],  global_set(__glo_write_91simple_scheme_write, __glo_write_scheme_write));; 
}

static void __lambda_3(void *data, int argc, closure _,object k_7316, object obj_732, object port_731_raw, ...) {
load_varargs(port_731, port_731_raw, argc - 2);
  Cyc_st_add(data, "scheme/write.sld:write");
if( (boolean_f != Cyc_is_null(port_731)) ){ 
  
closureN_type c_7348;
c_7348.hdr.mark = gc_color_red;
 c_7348.hdr.grayed = 0;
c_7348.tag = closureN_tag;
 c_7348.fn = (function_type)__lambda_2;
c_7348.num_args = 1;
c_7348.num_elements = 2;
c_7348.elements = (object *)alloca(sizeof(object) * 2);
c_7348.elements[0] = k_7316;
c_7348.elements[1] = obj_732;

return_closcall1(data,  __glo_current_91output_91port_scheme_base,  &c_7348);
} else { 
  return_closcall1(data,  k_7316,  Cyc_write_va(2,obj_732, Cyc_car(data, port_731)));}
; 
}

static void __lambda_2(void *data, int argc, object self_7327, object r_7318) {
  return_closcall1(data,  ((closureN)self_7327)->elements[0],  Cyc_write_va(2,((closureN)self_7327)->elements[1], r_7318));; 
}

static void __lambda_1(void *data, int argc, closure _,object k_7322, object obj_734, object port_733_raw, ...) {
load_varargs(port_733, port_733_raw, argc - 2);
  Cyc_st_add(data, "scheme/write.sld:display");
if( (boolean_f != Cyc_is_null(port_733)) ){ 
  
closureN_type c_7333;
c_7333.hdr.mark = gc_color_red;
 c_7333.hdr.grayed = 0;
c_7333.tag = closureN_tag;
 c_7333.fn = (function_type)__lambda_0;
c_7333.num_args = 1;
c_7333.num_elements = 2;
c_7333.elements = (object *)alloca(sizeof(object) * 2);
c_7333.elements[0] = k_7322;
c_7333.elements[1] = obj_734;

return_closcall1(data,  __glo_current_91output_91port_scheme_base,  &c_7333);
} else { 
  return_closcall1(data,  k_7322,  Cyc_display_va(2,obj_734, Cyc_car(data, port_733)));}
; 
}

static void __lambda_0(void *data, int argc, object self_7328, object r_7324) {
  return_closcall1(data,  ((closureN)self_7328)->elements[0],  Cyc_display_va(2,((closureN)self_7328)->elements[1], r_7324));; 
}

void c_schemewrite_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 

  add_global((object *) &__glo_lib_91init_117schemewrite_scheme_write);
  add_global((object *) &__glo_write_91simple_scheme_write);
  add_global((object *) &__glo_write_91shared_scheme_write);
  add_global((object *) &__glo_write_scheme_write);
  add_global((object *) &__glo_display_scheme_write);
  mclosure0(c_7359, (function_type)__lambda_5);c_7359.num_args = 0; 
  __glo_lib_91init_117schemewrite_scheme_write = &c_7359; 
  mclosure0(c_7344, (function_type)__lambda_3);c_7344.num_args = 1; 
  __glo_write_scheme_write = &c_7344; 
  mclosure0(c_7329, (function_type)__lambda_1);c_7329.num_args = 1; 
  __glo_display_scheme_write = &c_7329; 
  __glo_write_91simple_scheme_write = boolean_f; 
  __glo_write_91shared_scheme_write = boolean_f; 

  make_cvar(cvar_7368, (object *)&__glo_lib_91init_117schemewrite_scheme_write);make_pair(pair_7369, find_or_add_symbol("lib-init:schemewrite"), &cvar_7368);
  make_cvar(cvar_7370, (object *)&__glo_write_91simple_scheme_write);make_pair(pair_7371, find_or_add_symbol("write-simple"), &cvar_7370);
  make_cvar(cvar_7372, (object *)&__glo_write_91shared_scheme_write);make_pair(pair_7373, find_or_add_symbol("write-shared"), &cvar_7372);
  make_cvar(cvar_7374, (object *)&__glo_write_scheme_write);make_pair(pair_7375, find_or_add_symbol("write"), &cvar_7374);
  make_cvar(cvar_7376, (object *)&__glo_display_scheme_write);make_pair(pair_7377, find_or_add_symbol("display"), &cvar_7376);
make_pair(c_7378, &pair_7369,Cyc_global_variables);
make_pair(c_7379, &pair_7371, &c_7378);
make_pair(c_7380, &pair_7373, &c_7379);
make_pair(c_7381, &pair_7375, &c_7380);
make_pair(c_7382, &pair_7377, &c_7381);
Cyc_global_variables = &c_7382;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117schemewrite_scheme_write)->fn)(data, 1, cont, cont);
}
