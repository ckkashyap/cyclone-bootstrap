/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2016 Justin Ethier
 ** Version 0.1.2 (alpha)
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
     mclosure0(c1, _fn); \
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
     mclosure0(c1, _fn); \
     GC(td, &c1, buf, 2); \
     return; \
 } else { \
     (_fn)(td, 2, (closure)_fn,a1,a2); \
 }}

#define closcall3(td, clo,a1,a2,a3) \
if (type_is_pair_prim(clo)) { \
   Cyc_apply(td, 2, (closure)(a1), clo,a2,a3); \
} else { \
   ((clo)->fn)(td, 3, clo,a1,a2,a3);\
}
#define return_closcall3(td, clo,a1,a2,a3) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[3]; buf[0] = a1;buf[1] = a2;buf[2] = a3;\
     GC(td, clo, buf, 3); \
     return; \
 } else {\
     closcall3(td, (closure) (clo),a1,a2,a3); \
     return;\
 } \
}

#define return_direct3(td, _fn,a1,a2,a3) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[3]; buf[0] = a1;buf[1] = a2;buf[2] = a3; \
     mclosure0(c1, _fn); \
     GC(td, &c1, buf, 3); \
     return; \
 } else { \
     (_fn)(td, 3, (closure)_fn,a1,a2,a3); \
 }}

#define closcall4(td, clo,a1,a2,a3,a4) \
if (type_is_pair_prim(clo)) { \
   Cyc_apply(td, 3, (closure)(a1), clo,a2,a3,a4); \
} else { \
   ((clo)->fn)(td, 4, clo,a1,a2,a3,a4);\
}
#define return_closcall4(td, clo,a1,a2,a3,a4) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[4]; buf[0] = a1;buf[1] = a2;buf[2] = a3;buf[3] = a4;\
     GC(td, clo, buf, 4); \
     return; \
 } else {\
     closcall4(td, (closure) (clo),a1,a2,a3,a4); \
     return;\
 } \
}

#define return_direct4(td, _fn,a1,a2,a3,a4) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[4]; buf[0] = a1;buf[1] = a2;buf[2] = a3;buf[3] = a4; \
     mclosure0(c1, _fn); \
     GC(td, &c1, buf, 4); \
     return; \
 } else { \
     (_fn)(td, 4, (closure)_fn,a1,a2,a3,a4); \
 }}

#define closcall6(td, clo,a1,a2,a3,a4,a5,a6) \
if (type_is_pair_prim(clo)) { \
   Cyc_apply(td, 5, (closure)(a1), clo,a2,a3,a4,a5,a6); \
} else { \
   ((clo)->fn)(td, 6, clo,a1,a2,a3,a4,a5,a6);\
}
#define return_closcall6(td, clo,a1,a2,a3,a4,a5,a6) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[6]; buf[0] = a1;buf[1] = a2;buf[2] = a3;buf[3] = a4;buf[4] = a5;buf[5] = a6;\
     GC(td, clo, buf, 6); \
     return; \
 } else {\
     closcall6(td, (closure) (clo),a1,a2,a3,a4,a5,a6); \
     return;\
 } \
}

#define return_direct6(td, _fn,a1,a2,a3,a4,a5,a6) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[6]; buf[0] = a1;buf[1] = a2;buf[2] = a3;buf[3] = a4;buf[4] = a5;buf[5] = a6; \
     mclosure0(c1, _fn); \
     GC(td, &c1, buf, 6); \
     return; \
 } else { \
     (_fn)(td, 6, (closure)_fn,a1,a2,a3,a4,a5,a6); \
 }}

#include "cyclone/types.h"
object __glo_lib_91init_117srfi18_srfi_18 = NULL;
object __glo_condition_91variable_91broadcast_67_srfi_18 = NULL;
object __glo_condition_91variable_91signal_67_srfi_18 = NULL;
object __glo_condition_91variable_91wait_67_srfi_18 = NULL;
object __glo_make_91condition_91variable_srfi_18 = NULL;
object __glo_condition_91variable_127_srfi_18 = NULL;
object __glo_Cyc_91mutex_91unlock_67_srfi_18 = NULL;
object __glo_mutex_91unlock_67_srfi_18 = NULL;
object __glo_mutex_91lock_67_srfi_18 = NULL;
object __glo_make_91mutex_srfi_18 = NULL;
object __glo_mutex_127_srfi_18 = NULL;
object __glo_Cyc_91minor_91gc_srfi_18 = NULL;
object __glo__91_125heap_srfi_18 = NULL;
object __glo_thread_91sleep_67_srfi_18 = NULL;
object __glo_thread_91terminate_67_srfi_18 = NULL;
object __glo_thread_91yield_67_srfi_18 = NULL;
object __glo_thread_91start_67_srfi_18 = NULL;
object __glo_thread_91specific_91set_67_srfi_18 = NULL;
object __glo_thread_91specific_srfi_18 = NULL;
object __glo_thread_91name_srfi_18 = NULL;
object __glo_make_91thread_srfi_18 = NULL;
object __glo_thread_127_srfi_18 = NULL;
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
extern object __glo_features_scheme_base;
extern object __glo_any_scheme_base;
extern object __glo_every_scheme_base;
extern object __glo_and_scheme_base;
extern object __glo_or_scheme_base;
extern object __glo_let_scheme_base;
extern object __glo_let_85_scheme_base;
extern object __glo_letrec_scheme_base;
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
#include "cyclone/runtime.h"
defsymbol(cyc_91thread_91obj);
static void __lambda_32(void *data, int argc, closure _,object k_7326) ;
static void __lambda_31(void *data, int argc, closure _, object k, object cond) ;
static void __lambda_30(void *data, int argc, closure _, object k, object cond) ;
static void __lambda_29(void *data, int argc, closure _, object k, object cond, object lock) ;
static void __lambda_28(void *data, int argc, closure _, object k) ;
static void __lambda_27(void *data, int argc, closure _, object k, object obj) ;
static void __lambda_26(void *data, int argc, closure _, object k, object obj) ;
static void __lambda_25(void *data, int argc, closure _,object k_7329, object mutex_7311, object opts_7310_raw, ...) ;
static void __lambda_24(void *data, int argc, object self_7368, object r_7330) ;
static void __lambda_23(void *data, int argc, object self_7369, object r_7334) ;
static void __lambda_22(void *data, int argc, object self_7370, object r_7331) ;
static void __lambda_21(void *data, int argc, object self_7371, object r_7333) ;
static void __lambda_20(void *data, int argc, closure _, object k, object obj) ;
static void __lambda_19(void *data, int argc, closure _, object k) ;
static void __lambda_18(void *data, int argc, closure _, object k, object obj) ;
static void __lambda_17(void *data, int argc, closure _, object k) ;
static void __lambda_16(void *data, int argc, closure _, object k, object obj) ;
static void __lambda_15(void *data, int argc, closure _, object k, object timeout) ;
static void __lambda_14(void *data, int argc, closure _, object k) ;
static void __lambda_13(void *data, int argc, closure _,object k_7337) ;
static void __lambda_12(void *data, int argc, closure _,object k_7340, object t_7313) ;
static void __lambda_11(void *data, int argc, object self_7372, object r_7341) ;
static void __lambda_10(void *data, int argc, object self_7373, object thunk_7314) ;
static void __lambda_9(void *data, int argc, closure _,object k_7346, object t_7317, object obj_7316) ;
static void __lambda_8(void *data, int argc, closure _,object k_7349, object t_7318) ;
static void __lambda_7(void *data, int argc, closure _,object k_7352, object t_7319) ;
static void __lambda_6(void *data, int argc, closure _,object k_7355, object thunk_7321, object name_7320_raw, ...) ;
static void __lambda_5(void *data, int argc, object self_7374, object name_91str_7322) ;
static void __lambda_4(void *data, int argc, object self_7375, object r_7357) ;
static void __lambda_3(void *data, int argc, object self_7376, object k_7358) ;
static void __lambda_2(void *data, int argc, closure _,object k_7362, object obj_7323) ;
static void __lambda_1(void *data, int argc, object self_7377, object r_7364) ;
static void __lambda_0(void *data, int argc, object self_7378, object r_7365) ;

static void __lambda_32(void *data, int argc, closure _,object k_7326) {
  Cyc_st_add(data, "srfi/18.sld:lib-init:srfi18");
return_closcall1(data,  k_7326,  obj_int2obj(0));; 
}

static void __lambda_31(void *data, int argc, closure _, object k, object cond) { Cyc_check_cond_var(data, cond);
        if (pthread_cond_broadcast(&(((cond_var)cond)->cond)) != 0) {
          fprintf(stderr, "Unable to broadcast condition variable\n");
          exit(1);
        }
        return_closcall1(data, k, boolean_t);  }
static void __lambda_30(void *data, int argc, closure _, object k, object cond) { Cyc_check_cond_var(data, cond);
        if (pthread_cond_signal(&(((cond_var)cond)->cond)) != 0) {
          fprintf(stderr, "Unable to signal condition variable\n");
          exit(1);
        }
        return_closcall1(data, k, boolean_t);  }
static void __lambda_29(void *data, int argc, closure _, object k, object cond, object lock) { Cyc_check_cond_var(data, cond);
        Cyc_check_mutex(data, lock);
        set_thread_blocked(data, k);
        if (pthread_cond_wait(
            &(((cond_var)cond)->cond),
            &(((mutex)lock)->lock)) != 0) {
          fprintf(stderr, "Unable to wait for condition variable\n");
          exit(1);
        }
        return_thread_runnable(data, boolean_t);  }
static void __lambda_28(void *data, int argc, closure _, object k) { int heap_grown;
        cond_var cond;
        cond_var_type tmp;
        tmp.hdr.mark = gc_color_red;
        tmp.hdr.grayed = 0;
        tmp.tag = cond_var_tag;
        cond = gc_alloc(gc_get_heap(), sizeof(cond_var_type), (char *)(&tmp), (gc_thread_data *)data, &heap_grown);
        if (pthread_cond_init(&(cond->cond), NULL) != 0) {
          fprintf(stderr, "Unable to make condition variable\n");
          exit(1);
        }
        return_closcall1(data, k, cond);  }
static void __lambda_27(void *data, int argc, closure _, object k, object obj) { object result = Cyc_is_cond_var(obj);
        return_closcall1(data, k, result);  }
static void __lambda_26(void *data, int argc, closure _, object k, object obj) { mutex m = (mutex) obj;
        Cyc_check_mutex(data, obj);
        if (pthread_mutex_unlock(&(m->lock)) != 0) {
          fprintf(stderr, "Error unlocking mutex\n");
          exit(1);
        }
        return_closcall1(data, k, boolean_t);  }
static void __lambda_25(void *data, int argc, closure _,object k_7329, object mutex_7311, object opts_7310_raw, ...) {
load_varargs(opts_7310, opts_7310_raw, argc - 2);
  Cyc_st_add(data, "srfi/18.sld:mutex-unlock!");

closureN_type c_73158;
c_73158.hdr.mark = gc_color_red;
 c_73158.hdr.grayed = 0;
c_73158.tag = closureN_tag;
 c_73158.fn = (function_type)__lambda_24;
c_73158.num_args = 1;
c_73158.num_elements = 3;
c_73158.elements = (object *)alloca(sizeof(object) * 3);
c_73158.elements[0] = k_7329;
c_73158.elements[1] = mutex_7311;
c_73158.elements[2] = opts_7310;

return_closcall1(data,(closure)&c_73158,  Cyc_is_null(opts_7310));; 
}

static void __lambda_24(void *data, int argc, object self_7368, object r_7330) {
  if( (boolean_f != r_7330) ){ 
  return_closcall2(data,  __glo_Cyc_91mutex_91unlock_67_srfi_18,  ((closureN)self_7368)->elements[0], ((closureN)self_7368)->elements[1]);
} else { 
  
closureN_type c_73163;
c_73163.hdr.mark = gc_color_red;
 c_73163.hdr.grayed = 0;
c_73163.tag = closureN_tag;
 c_73163.fn = (function_type)__lambda_23;
c_73163.num_args = 1;
c_73163.num_elements = 3;
c_73163.elements = (object *)alloca(sizeof(object) * 3);
c_73163.elements[0] = ((closureN)self_7368)->elements[0];
c_73163.elements[1] = ((closureN)self_7368)->elements[1];
c_73163.elements[2] = ((closureN)self_7368)->elements[2];

return_closcall1(data,(closure)&c_73163,  car(((closureN)self_7368)->elements[2]));}
; 
}

static void __lambda_23(void *data, int argc, object self_7369, object r_7334) {
  
closureN_type c_73165;
c_73165.hdr.mark = gc_color_red;
 c_73165.hdr.grayed = 0;
c_73165.tag = closureN_tag;
 c_73165.fn = (function_type)__lambda_22;
c_73165.num_args = 1;
c_73165.num_elements = 3;
c_73165.elements = (object *)alloca(sizeof(object) * 3);
c_73165.elements[0] = ((closureN)self_7369)->elements[0];
c_73165.elements[1] = ((closureN)self_7369)->elements[1];
c_73165.elements[2] = ((closureN)self_7369)->elements[2];

return_closcall2(data,  __glo_condition_91variable_127_srfi_18,  &c_73165, r_7334);; 
}

static void __lambda_22(void *data, int argc, object self_7370, object r_7331) {
  if( (boolean_f != r_7331) ){ 
  
closureN_type c_73167;
c_73167.hdr.mark = gc_color_red;
 c_73167.hdr.grayed = 0;
c_73167.tag = closureN_tag;
 c_73167.fn = (function_type)__lambda_21;
c_73167.num_args = 1;
c_73167.num_elements = 2;
c_73167.elements = (object *)alloca(sizeof(object) * 2);
c_73167.elements[0] = ((closureN)self_7370)->elements[0];
c_73167.elements[1] = ((closureN)self_7370)->elements[1];

return_closcall3(data,  __glo_condition_91variable_91wait_67_srfi_18,  &c_73167, car(((closureN)self_7370)->elements[2]), ((closureN)self_7370)->elements[1]);
} else { 
  
make_string(c_73177, "mutex-unlock! - unhandled args");
return_closcall4(data,  __glo_error_scheme_base,  ((closureN)self_7370)->elements[0], &c_73177, ((closureN)self_7370)->elements[1], ((closureN)self_7370)->elements[2]);}
; 
}

static void __lambda_21(void *data, int argc, object self_7371, object r_7333) {
  return_closcall2(data,  __glo_Cyc_91mutex_91unlock_67_srfi_18,  ((closureN)self_7371)->elements[0], ((closureN)self_7371)->elements[1]);; 
}

static void __lambda_20(void *data, int argc, closure _, object k, object obj) { mutex m = (mutex) obj;
        Cyc_check_mutex(data, obj);
        set_thread_blocked(data, k);
        if (pthread_mutex_lock(&(m->lock)) != 0) {
          fprintf(stderr, "Error locking mutex\n");
          exit(1);
        }
        return_thread_runnable(data, boolean_t);  }
static void __lambda_19(void *data, int argc, closure _, object k) { int heap_grown;
        mutex lock;
        mutex_type tmp;
        tmp.hdr.mark = gc_color_red;
        tmp.hdr.grayed = 0;
        tmp.tag = mutex_tag;
        lock = gc_alloc(gc_get_heap(), sizeof(mutex_type), (char *)(&tmp), (gc_thread_data *)data, &heap_grown);
        if (pthread_mutex_init(&(lock->lock), NULL) != 0) {
          fprintf(stderr, "Unable to make mutex\n");
          exit(1);
        }
        return_closcall1(data, k, lock);  }
static void __lambda_18(void *data, int argc, closure _, object k, object obj) { object result = Cyc_is_mutex(obj);
        return_closcall1(data, k, result);  }
static void __lambda_17(void *data, int argc, closure _, object k) { Cyc_trigger_minor_gc(data, k);  }
static void __lambda_16(void *data, int argc, closure _, object k, object obj) { object heap_obj = copy2heap(data, obj);
        return_closcall1(data, k, heap_obj);  }
static void __lambda_15(void *data, int argc, closure _, object k, object timeout) { set_thread_blocked(data, k);
        Cyc_thread_sleep(data, timeout);
        return_thread_runnable(data, boolean_t);  }
static void __lambda_14(void *data, int argc, closure _, object k) { Cyc_end_thread(data);  }
static void __lambda_13(void *data, int argc, closure _,object k_7337) {
  Cyc_st_add(data, "srfi/18.sld:thread-yield!");
return_closcall2(data,  __glo_thread_91sleep_67_srfi_18,  k_7337, obj_int2obj(1));; 
}

static void __lambda_12(void *data, int argc, closure _,object k_7340, object t_7313) {
  Cyc_st_add(data, "srfi/18.sld:thread-start!");

closureN_type c_73134;
c_73134.hdr.mark = gc_color_red;
 c_73134.hdr.grayed = 0;
c_73134.tag = closureN_tag;
 c_73134.fn = (function_type)__lambda_11;
c_73134.num_args = 1;
c_73134.num_elements = 2;
c_73134.elements = (object *)alloca(sizeof(object) * 2);
c_73134.elements[0] = k_7340;
c_73134.elements[1] = t_7313;

return_closcall1(data,  __glo_Cyc_91minor_91gc_srfi_18,  &c_73134);; 
}

static void __lambda_11(void *data, int argc, object self_7372, object r_7341) {
  
closureN_type c_73136;
c_73136.hdr.mark = gc_color_red;
 c_73136.hdr.grayed = 0;
c_73136.tag = closureN_tag;
 c_73136.fn = (function_type)__lambda_10;
c_73136.num_args = 1;
c_73136.num_elements = 2;
c_73136.elements = (object *)alloca(sizeof(object) * 2);
c_73136.elements[0] = ((closureN)self_7372)->elements[0];
c_73136.elements[1] = ((closureN)self_7372)->elements[1];

return_closcall1(data,(closure)&c_73136,  Cyc_vector_ref(data, ((closureN)self_7372)->elements[1], obj_int2obj(1)));; 
}

static void __lambda_10(void *data, int argc, object self_7373, object thunk_7314) {
  return_closcall1(data,  ((closureN)self_7373)->elements[0],  Cyc_vector_set(data, ((closureN)self_7373)->elements[1], obj_int2obj(2), Cyc_spawn_thread(thunk_7314)));; 
}

static void __lambda_9(void *data, int argc, closure _,object k_7346, object t_7317, object obj_7316) {
  Cyc_st_add(data, "srfi/18.sld:thread-specific-set!");
return_closcall1(data,  k_7346,  Cyc_vector_set(data, t_7317, obj_int2obj(4), obj_7316));; 
}

static void __lambda_8(void *data, int argc, closure _,object k_7349, object t_7318) {
  Cyc_st_add(data, "srfi/18.sld:thread-specific");
return_closcall1(data,  k_7349,  Cyc_vector_ref(data, t_7318, obj_int2obj(4)));; 
}

static void __lambda_7(void *data, int argc, closure _,object k_7352, object t_7319) {
  Cyc_st_add(data, "srfi/18.sld:thread-name");
return_closcall1(data,  k_7352,  Cyc_vector_ref(data, t_7319, obj_int2obj(3)));; 
}

static void __lambda_6(void *data, int argc, closure _,object k_7355, object thunk_7321, object name_7320_raw, ...) {
load_varargs(name_7320, name_7320_raw, argc - 2);
  Cyc_st_add(data, "srfi/18.sld:make-thread");

closureN_type c_73103;
c_73103.hdr.mark = gc_color_red;
 c_73103.hdr.grayed = 0;
c_73103.tag = closureN_tag;
 c_73103.fn = (function_type)__lambda_3;
c_73103.num_args = 0;
c_73103.num_elements = 1;
c_73103.elements = (object *)alloca(sizeof(object) * 1);
c_73103.elements[0] = name_7320;


closureN_type c_73113;
c_73113.hdr.mark = gc_color_red;
 c_73113.hdr.grayed = 0;
c_73113.tag = closureN_tag;
 c_73113.fn = (function_type)__lambda_5;
c_73113.num_args = 1;
c_73113.num_elements = 2;
c_73113.elements = (object *)alloca(sizeof(object) * 2);
c_73113.elements[0] = k_7355;
c_73113.elements[1] = thunk_7321;

return_closcall1(data,(closure)&c_73103,  &c_73113);; 
}

static void __lambda_5(void *data, int argc, object self_7374, object name_91str_7322) {
  
closureN_type c_73115;
c_73115.hdr.mark = gc_color_red;
 c_73115.hdr.grayed = 0;
c_73115.tag = closureN_tag;
 c_73115.fn = (function_type)__lambda_4;
c_73115.num_args = 1;
c_73115.num_elements = 3;
c_73115.elements = (object *)alloca(sizeof(object) * 3);
c_73115.elements[0] = ((closureN)self_7374)->elements[0];
c_73115.elements[1] = name_91str_7322;
c_73115.elements[2] = ((closureN)self_7374)->elements[1];

return_closcall1(data,(closure)&c_73115,  quote_cyc_91thread_91obj);; 
}

static void __lambda_4(void *data, int argc, object self_7375, object r_7357) {
  return_closcall6(data,  __glo_vector_scheme_base,  ((closureN)self_7375)->elements[0], r_7357, ((closureN)self_7375)->elements[2], boolean_f, ((closureN)self_7375)->elements[1], boolean_f);; 
}

static void __lambda_3(void *data, int argc, object self_7376, object k_7358) {
  if( (boolean_f != Cyc_is_pair(((closureN)self_7376)->elements[0])) ){ 
  return_closcall1(data,  k_7358,  car(((closureN)self_7376)->elements[0]));
} else { 
  
make_string(c_73112, "");
return_closcall1(data,  k_7358,  &c_73112);}
; 
}

static void __lambda_2(void *data, int argc, closure _,object k_7362, object obj_7323) {
  Cyc_st_add(data, "srfi/18.sld:thread?");
if( (boolean_f != Cyc_is_vector(obj_7323)) ){ 
  
closureN_type c_7383;
c_7383.hdr.mark = gc_color_red;
 c_7383.hdr.grayed = 0;
c_7383.tag = closureN_tag;
 c_7383.fn = (function_type)__lambda_1;
c_7383.num_args = 1;
c_7383.num_elements = 2;
c_7383.elements = (object *)alloca(sizeof(object) * 2);
c_7383.elements[0] = k_7362;
c_7383.elements[1] = obj_7323;


object c_7397 = Cyc_num_gt(data,(closure)&c_7383,2,Cyc_vector_length(data, obj_7323), obj_int2obj(0));
return_closcall1(data,(closure)&c_7383,  c_7397);
} else { 
  return_closcall1(data,  k_7362,  boolean_f);}
; 
}

static void __lambda_1(void *data, int argc, object self_7377, object r_7364) {
  if( (boolean_f != r_7364) ){ 
  
closureN_type c_7385;
c_7385.hdr.mark = gc_color_red;
 c_7385.hdr.grayed = 0;
c_7385.tag = closureN_tag;
 c_7385.fn = (function_type)__lambda_0;
c_7385.num_args = 1;
c_7385.num_elements = 2;
c_7385.elements = (object *)alloca(sizeof(object) * 2);
c_7385.elements[0] = ((closureN)self_7377)->elements[0];
c_7385.elements[1] = ((closureN)self_7377)->elements[1];

return_closcall1(data,(closure)&c_7385,  quote_cyc_91thread_91obj);
} else { 
  return_closcall1(data,  ((closureN)self_7377)->elements[0],  boolean_f);}
; 
}

static void __lambda_0(void *data, int argc, object self_7378, object r_7365) {
  return_closcall1(data,  ((closureN)self_7378)->elements[0],  equalp(r_7365, Cyc_vector_ref(data, ((closureN)self_7378)->elements[1], obj_int2obj(0))));; 
}

void c_srfi18_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  quote_cyc_91thread_91obj = find_or_add_symbol("cyc-thread-obj");

  add_global((object *) &__glo_lib_91init_117srfi18_srfi_18);
  add_global((object *) &__glo_condition_91variable_91broadcast_67_srfi_18);
  add_global((object *) &__glo_condition_91variable_91signal_67_srfi_18);
  add_global((object *) &__glo_condition_91variable_91wait_67_srfi_18);
  add_global((object *) &__glo_make_91condition_91variable_srfi_18);
  add_global((object *) &__glo_condition_91variable_127_srfi_18);
  add_global((object *) &__glo_Cyc_91mutex_91unlock_67_srfi_18);
  add_global((object *) &__glo_mutex_91unlock_67_srfi_18);
  add_global((object *) &__glo_mutex_91lock_67_srfi_18);
  add_global((object *) &__glo_make_91mutex_srfi_18);
  add_global((object *) &__glo_mutex_127_srfi_18);
  add_global((object *) &__glo_Cyc_91minor_91gc_srfi_18);
  add_global((object *) &__glo__91_125heap_srfi_18);
  add_global((object *) &__glo_thread_91sleep_67_srfi_18);
  add_global((object *) &__glo_thread_91terminate_67_srfi_18);
  add_global((object *) &__glo_thread_91yield_67_srfi_18);
  add_global((object *) &__glo_thread_91start_67_srfi_18);
  add_global((object *) &__glo_thread_91specific_91set_67_srfi_18);
  add_global((object *) &__glo_thread_91specific_srfi_18);
  add_global((object *) &__glo_thread_91name_srfi_18);
  add_global((object *) &__glo_make_91thread_srfi_18);
  add_global((object *) &__glo_thread_127_srfi_18);
  add_symbol(quote_cyc_91thread_91obj);
  mclosure0(c_73191, (function_type)__lambda_32);c_73191.num_args = 0; 
  __glo_lib_91init_117srfi18_srfi_18 = &c_73191; 
  mclosure0(c_73190, (function_type)__lambda_31);c_73190.num_args = 1; 
  __glo_condition_91variable_91broadcast_67_srfi_18 = &c_73190; 
  mclosure0(c_73189, (function_type)__lambda_30);c_73189.num_args = 1; 
  __glo_condition_91variable_91signal_67_srfi_18 = &c_73189; 
  mclosure0(c_73188, (function_type)__lambda_29);c_73188.num_args = 2; 
  __glo_condition_91variable_91wait_67_srfi_18 = &c_73188; 
  mclosure0(c_73187, (function_type)__lambda_28);c_73187.num_args = 0; 
  __glo_make_91condition_91variable_srfi_18 = &c_73187; 
  mclosure0(c_73186, (function_type)__lambda_27);c_73186.num_args = 1; 
  __glo_condition_91variable_127_srfi_18 = &c_73186; 
  mclosure0(c_73185, (function_type)__lambda_26);c_73185.num_args = 1; 
  __glo_Cyc_91mutex_91unlock_67_srfi_18 = &c_73185; 
  mclosure0(c_73156, (function_type)__lambda_25);c_73156.num_args = 1; 
  __glo_mutex_91unlock_67_srfi_18 = &c_73156; 
  mclosure0(c_73155, (function_type)__lambda_20);c_73155.num_args = 1; 
  __glo_mutex_91lock_67_srfi_18 = &c_73155; 
  mclosure0(c_73154, (function_type)__lambda_19);c_73154.num_args = 0; 
  __glo_make_91mutex_srfi_18 = &c_73154; 
  mclosure0(c_73153, (function_type)__lambda_18);c_73153.num_args = 1; 
  __glo_mutex_127_srfi_18 = &c_73153; 
  mclosure0(c_73152, (function_type)__lambda_17);c_73152.num_args = 0; 
  __glo_Cyc_91minor_91gc_srfi_18 = &c_73152; 
  mclosure0(c_73151, (function_type)__lambda_16);c_73151.num_args = 1; 
  __glo__91_125heap_srfi_18 = &c_73151; 
  mclosure0(c_73150, (function_type)__lambda_15);c_73150.num_args = 1; 
  __glo_thread_91sleep_67_srfi_18 = &c_73150; 
  mclosure0(c_73149, (function_type)__lambda_14);c_73149.num_args = 0; 
  __glo_thread_91terminate_67_srfi_18 = &c_73149; 
  mclosure0(c_73147, (function_type)__lambda_13);c_73147.num_args = 0; 
  __glo_thread_91yield_67_srfi_18 = &c_73147; 
  mclosure0(c_73132, (function_type)__lambda_12);c_73132.num_args = 1; 
  __glo_thread_91start_67_srfi_18 = &c_73132; 
  mclosure0(c_73128, (function_type)__lambda_9);c_73128.num_args = 2; 
  __glo_thread_91specific_91set_67_srfi_18 = &c_73128; 
  mclosure0(c_73124, (function_type)__lambda_8);c_73124.num_args = 1; 
  __glo_thread_91specific_srfi_18 = &c_73124; 
  mclosure0(c_73120, (function_type)__lambda_7);c_73120.num_args = 1; 
  __glo_thread_91name_srfi_18 = &c_73120; 
  mclosure0(c_73101, (function_type)__lambda_6);c_73101.num_args = 1; 
  __glo_make_91thread_srfi_18 = &c_73101; 
  mclosure0(c_7379, (function_type)__lambda_2);c_7379.num_args = 1; 
  __glo_thread_127_srfi_18 = &c_7379; 

  make_cvar(cvar_73193, (object *)&__glo_lib_91init_117srfi18_srfi_18);make_pair(pair_73194, find_or_add_symbol("lib-init:srfi18"), &cvar_73193);
  make_cvar(cvar_73195, (object *)&__glo_condition_91variable_91broadcast_67_srfi_18);make_pair(pair_73196, find_or_add_symbol("condition-variable-broadcast!"), &cvar_73195);
  make_cvar(cvar_73197, (object *)&__glo_condition_91variable_91signal_67_srfi_18);make_pair(pair_73198, find_or_add_symbol("condition-variable-signal!"), &cvar_73197);
  make_cvar(cvar_73199, (object *)&__glo_condition_91variable_91wait_67_srfi_18);make_pair(pair_73200, find_or_add_symbol("condition-variable-wait!"), &cvar_73199);
  make_cvar(cvar_73201, (object *)&__glo_make_91condition_91variable_srfi_18);make_pair(pair_73202, find_or_add_symbol("make-condition-variable"), &cvar_73201);
  make_cvar(cvar_73203, (object *)&__glo_condition_91variable_127_srfi_18);make_pair(pair_73204, find_or_add_symbol("condition-variable?"), &cvar_73203);
  make_cvar(cvar_73205, (object *)&__glo_Cyc_91mutex_91unlock_67_srfi_18);make_pair(pair_73206, find_or_add_symbol("Cyc-mutex-unlock!"), &cvar_73205);
  make_cvar(cvar_73207, (object *)&__glo_mutex_91unlock_67_srfi_18);make_pair(pair_73208, find_or_add_symbol("mutex-unlock!"), &cvar_73207);
  make_cvar(cvar_73209, (object *)&__glo_mutex_91lock_67_srfi_18);make_pair(pair_73210, find_or_add_symbol("mutex-lock!"), &cvar_73209);
  make_cvar(cvar_73211, (object *)&__glo_make_91mutex_srfi_18);make_pair(pair_73212, find_or_add_symbol("make-mutex"), &cvar_73211);
  make_cvar(cvar_73213, (object *)&__glo_mutex_127_srfi_18);make_pair(pair_73214, find_or_add_symbol("mutex?"), &cvar_73213);
  make_cvar(cvar_73215, (object *)&__glo_Cyc_91minor_91gc_srfi_18);make_pair(pair_73216, find_or_add_symbol("Cyc-minor-gc"), &cvar_73215);
  make_cvar(cvar_73217, (object *)&__glo__91_125heap_srfi_18);make_pair(pair_73218, find_or_add_symbol("->heap"), &cvar_73217);
  make_cvar(cvar_73219, (object *)&__glo_thread_91sleep_67_srfi_18);make_pair(pair_73220, find_or_add_symbol("thread-sleep!"), &cvar_73219);
  make_cvar(cvar_73221, (object *)&__glo_thread_91terminate_67_srfi_18);make_pair(pair_73222, find_or_add_symbol("thread-terminate!"), &cvar_73221);
  make_cvar(cvar_73223, (object *)&__glo_thread_91yield_67_srfi_18);make_pair(pair_73224, find_or_add_symbol("thread-yield!"), &cvar_73223);
  make_cvar(cvar_73225, (object *)&__glo_thread_91start_67_srfi_18);make_pair(pair_73226, find_or_add_symbol("thread-start!"), &cvar_73225);
  make_cvar(cvar_73227, (object *)&__glo_thread_91specific_91set_67_srfi_18);make_pair(pair_73228, find_or_add_symbol("thread-specific-set!"), &cvar_73227);
  make_cvar(cvar_73229, (object *)&__glo_thread_91specific_srfi_18);make_pair(pair_73230, find_or_add_symbol("thread-specific"), &cvar_73229);
  make_cvar(cvar_73231, (object *)&__glo_thread_91name_srfi_18);make_pair(pair_73232, find_or_add_symbol("thread-name"), &cvar_73231);
  make_cvar(cvar_73233, (object *)&__glo_make_91thread_srfi_18);make_pair(pair_73234, find_or_add_symbol("make-thread"), &cvar_73233);
  make_cvar(cvar_73235, (object *)&__glo_thread_127_srfi_18);make_pair(pair_73236, find_or_add_symbol("thread?"), &cvar_73235);
make_pair(c_73237, &pair_73194,Cyc_global_variables);
make_pair(c_73238, &pair_73196, &c_73237);
make_pair(c_73239, &pair_73198, &c_73238);
make_pair(c_73240, &pair_73200, &c_73239);
make_pair(c_73241, &pair_73202, &c_73240);
make_pair(c_73242, &pair_73204, &c_73241);
make_pair(c_73243, &pair_73206, &c_73242);
make_pair(c_73244, &pair_73208, &c_73243);
make_pair(c_73245, &pair_73210, &c_73244);
make_pair(c_73246, &pair_73212, &c_73245);
make_pair(c_73247, &pair_73214, &c_73246);
make_pair(c_73248, &pair_73216, &c_73247);
make_pair(c_73249, &pair_73218, &c_73248);
make_pair(c_73250, &pair_73220, &c_73249);
make_pair(c_73251, &pair_73222, &c_73250);
make_pair(c_73252, &pair_73224, &c_73251);
make_pair(c_73253, &pair_73226, &c_73252);
make_pair(c_73254, &pair_73228, &c_73253);
make_pair(c_73255, &pair_73230, &c_73254);
make_pair(c_73256, &pair_73232, &c_73255);
make_pair(c_73257, &pair_73234, &c_73256);
make_pair(c_73258, &pair_73236, &c_73257);
Cyc_global_variables = &c_73258;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117srfi18_srfi_18)->fn)(data, 1, cont, cont);
}
