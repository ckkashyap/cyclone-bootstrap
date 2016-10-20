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
object __glo_lib_91init_117schemeinexact_scheme_inexact = NULL;
object __glo_tan_scheme_inexact = NULL;
object __glo_sqrt_scheme_inexact = NULL;
object __glo_sin_scheme_inexact = NULL;
object __glo_c_91log_scheme_inexact = NULL;
object __glo_log_scheme_inexact = NULL;
object __glo_exp_scheme_inexact = NULL;
object __glo_cos_scheme_inexact = NULL;
object __glo_atan_scheme_inexact = NULL;
object __glo_asin_scheme_inexact = NULL;
object __glo_acos_scheme_inexact = NULL;
object __glo_finite_127_scheme_inexact = NULL;
object __glo_infinite_127_scheme_inexact = NULL;
object __glo_nan_127_scheme_inexact = NULL;
#include "cyclone/runtime.h"
static void __lambda_15(void *data, int argc, closure _,object k_736) ;
static void __lambda_14(void *data, int argc, closure _, object k, object z) ;
static void __lambda_13(void *data, int argc, closure _, object k, object z) ;
static void __lambda_12(void *data, int argc, closure _, object k, object z) ;
static void __lambda_11(void *data, int argc, closure _, object k, object z) ;
static void __lambda_10(void *data, int argc, closure _,object k_739, object z1_732, object z2_731_raw, ...) ;
static void __lambda_9(void *data, int argc, object self_7314, object r_7312) ;
static void __lambda_8(void *data, int argc, object self_7315, object r_7313) ;
static void __lambda_7(void *data, int argc, closure _, object k, object z) ;
static void __lambda_6(void *data, int argc, closure _, object k, object z) ;
static void __lambda_5(void *data, int argc, closure _, object k, object z) ;
static void __lambda_4(void *data, int argc, closure _, object k, object z) ;
static void __lambda_3(void *data, int argc, closure _, object k, object z) ;
static void __lambda_2(void *data, int argc, closure _, object k, object z) ;
static void __lambda_1(void *data, int argc, closure _, object k, object z) ;
static void __lambda_0(void *data, int argc, closure _, object k, object z) ;

static void __lambda_15(void *data, int argc, closure _,object k_736) {
  Cyc_st_add(data, "scheme/inexact.sld:lib-init:schemeinexact");
return_closcall1(data,  k_736,  obj_int2obj(0));; 
}

static void __lambda_14(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, tan, z); }
static void __lambda_13(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, sqrt, z); }
static void __lambda_12(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, sin, z); }
static void __lambda_11(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, log, z); }
static void __lambda_10(void *data, int argc, closure _,object k_739, object z1_732, object z2_731_raw, ...) {
load_varargs(z2_731, z2_731_raw, argc - 2);
  Cyc_st_add(data, "scheme/inexact.sld:log");
if( (boolean_f != Cyc_is_null(z2_731)) ){ 
  return_closcall2(data,  __glo_c_91log_scheme_inexact,  k_739, z1_732);
} else { 
  
closureN_type c_7329;
c_7329.hdr.mark = gc_color_red;
 c_7329.hdr.grayed = 0;
c_7329.tag = closureN_tag;
 c_7329.fn = (function_type)__lambda_9;
c_7329.num_args = 1;
c_7329.num_elements = 2;
c_7329.elements = (object *)alloca(sizeof(object) * 2);
c_7329.elements[0] = k_739;
c_7329.elements[1] = z2_731;

return_closcall2(data,  __glo_c_91log_scheme_inexact,  &c_7329, z1_732);}
; 
}

static void __lambda_9(void *data, int argc, object self_7314, object r_7312) {
  
closureN_type c_7331;
c_7331.hdr.mark = gc_color_red;
 c_7331.hdr.grayed = 0;
c_7331.tag = closureN_tag;
 c_7331.fn = (function_type)__lambda_8;
c_7331.num_args = 1;
c_7331.num_elements = 2;
c_7331.elements = (object *)alloca(sizeof(object) * 2);
c_7331.elements[0] = ((closureN)self_7314)->elements[0];
c_7331.elements[1] = r_7312;

return_closcall2(data,  __glo_c_91log_scheme_inexact,  &c_7331, Cyc_car(data, ((closureN)self_7314)->elements[1]));; 
}

static void __lambda_8(void *data, int argc, object self_7315, object r_7313) {
  
common_type local_7336; object c_7337 = Cyc_fast_div(data,&local_7336,((closureN)self_7315)->elements[1], r_7313);
return_closcall1(data,  ((closureN)self_7315)->elements[0],  c_7337);; 
}

static void __lambda_7(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, exp, z); }
static void __lambda_6(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, cos, z); }
static void __lambda_5(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, atan, z); }
static void __lambda_4(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, asin, z); }
static void __lambda_3(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, acos, z); }
static void __lambda_2(void *data, int argc, closure _, object k, object z) { Cyc_check_num(data, z);
        if (obj_is_int(z) || 
            type_of(z) == integer_tag ||
            !isfinite(((double_type *)z)->value)) 
        {
          return_closcall1(data, k, boolean_f);
        }
        return_closcall1(data, k, boolean_t); }
static void __lambda_1(void *data, int argc, closure _, object k, object z) { Cyc_check_num(data, z);
        if (obj_is_int(z) || 
            type_of(z) == integer_tag ||
            !isinf(((double_type *)z)->value)) 
        {
          return_closcall1(data, k, boolean_f);
        }
        return_closcall1(data, k, boolean_t); }
static void __lambda_0(void *data, int argc, closure _, object k, object z) { Cyc_check_num(data, z);
        if (obj_is_int(z) || 
            type_of(z) == integer_tag ||
            !isnan(((double_type *)z)->value)) 
        {
          return_closcall1(data, k, boolean_f);
        }
        return_closcall1(data, k, boolean_t); }
void c_schemeinexact_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 

  add_global((object *) &__glo_lib_91init_117schemeinexact_scheme_inexact);
  add_global((object *) &__glo_tan_scheme_inexact);
  add_global((object *) &__glo_sqrt_scheme_inexact);
  add_global((object *) &__glo_sin_scheme_inexact);
  add_global((object *) &__glo_c_91log_scheme_inexact);
  add_global((object *) &__glo_log_scheme_inexact);
  add_global((object *) &__glo_exp_scheme_inexact);
  add_global((object *) &__glo_cos_scheme_inexact);
  add_global((object *) &__glo_atan_scheme_inexact);
  add_global((object *) &__glo_asin_scheme_inexact);
  add_global((object *) &__glo_acos_scheme_inexact);
  add_global((object *) &__glo_finite_127_scheme_inexact);
  add_global((object *) &__glo_infinite_127_scheme_inexact);
  add_global((object *) &__glo_nan_127_scheme_inexact);
  mclosure0(c_7346, (function_type)__lambda_15);c_7346.num_args = 0; 
  __glo_lib_91init_117schemeinexact_scheme_inexact = &c_7346; 
  mclosure0(c_7345, (function_type)__lambda_14);c_7345.num_args = 1; 
  __glo_tan_scheme_inexact = &c_7345; 
  mclosure0(c_7344, (function_type)__lambda_13);c_7344.num_args = 1; 
  __glo_sqrt_scheme_inexact = &c_7344; 
  mclosure0(c_7343, (function_type)__lambda_12);c_7343.num_args = 1; 
  __glo_sin_scheme_inexact = &c_7343; 
  mclosure0(c_7342, (function_type)__lambda_11);c_7342.num_args = 1; 
  __glo_c_91log_scheme_inexact = &c_7342; 
  mclosure0(c_7324, (function_type)__lambda_10);c_7324.num_args = 1; 
  __glo_log_scheme_inexact = &c_7324; 
  mclosure0(c_7323, (function_type)__lambda_7);c_7323.num_args = 1; 
  __glo_exp_scheme_inexact = &c_7323; 
  mclosure0(c_7322, (function_type)__lambda_6);c_7322.num_args = 1; 
  __glo_cos_scheme_inexact = &c_7322; 
  mclosure0(c_7321, (function_type)__lambda_5);c_7321.num_args = 1; 
  __glo_atan_scheme_inexact = &c_7321; 
  mclosure0(c_7320, (function_type)__lambda_4);c_7320.num_args = 1; 
  __glo_asin_scheme_inexact = &c_7320; 
  mclosure0(c_7319, (function_type)__lambda_3);c_7319.num_args = 1; 
  __glo_acos_scheme_inexact = &c_7319; 
  mclosure0(c_7318, (function_type)__lambda_2);c_7318.num_args = 1; 
  __glo_finite_127_scheme_inexact = &c_7318; 
  mclosure0(c_7317, (function_type)__lambda_1);c_7317.num_args = 1; 
  __glo_infinite_127_scheme_inexact = &c_7317; 
  mclosure0(c_7316, (function_type)__lambda_0);c_7316.num_args = 1; 
  __glo_nan_127_scheme_inexact = &c_7316; 

  make_cvar(cvar_7348, (object *)&__glo_lib_91init_117schemeinexact_scheme_inexact);make_pair(pair_7349, find_or_add_symbol("lib-init:schemeinexact"), &cvar_7348);
  make_cvar(cvar_7350, (object *)&__glo_tan_scheme_inexact);make_pair(pair_7351, find_or_add_symbol("tan"), &cvar_7350);
  make_cvar(cvar_7352, (object *)&__glo_sqrt_scheme_inexact);make_pair(pair_7353, find_or_add_symbol("sqrt"), &cvar_7352);
  make_cvar(cvar_7354, (object *)&__glo_sin_scheme_inexact);make_pair(pair_7355, find_or_add_symbol("sin"), &cvar_7354);
  make_cvar(cvar_7356, (object *)&__glo_c_91log_scheme_inexact);make_pair(pair_7357, find_or_add_symbol("c-log"), &cvar_7356);
  make_cvar(cvar_7358, (object *)&__glo_log_scheme_inexact);make_pair(pair_7359, find_or_add_symbol("log"), &cvar_7358);
  make_cvar(cvar_7360, (object *)&__glo_exp_scheme_inexact);make_pair(pair_7361, find_or_add_symbol("exp"), &cvar_7360);
  make_cvar(cvar_7362, (object *)&__glo_cos_scheme_inexact);make_pair(pair_7363, find_or_add_symbol("cos"), &cvar_7362);
  make_cvar(cvar_7364, (object *)&__glo_atan_scheme_inexact);make_pair(pair_7365, find_or_add_symbol("atan"), &cvar_7364);
  make_cvar(cvar_7366, (object *)&__glo_asin_scheme_inexact);make_pair(pair_7367, find_or_add_symbol("asin"), &cvar_7366);
  make_cvar(cvar_7368, (object *)&__glo_acos_scheme_inexact);make_pair(pair_7369, find_or_add_symbol("acos"), &cvar_7368);
  make_cvar(cvar_7370, (object *)&__glo_finite_127_scheme_inexact);make_pair(pair_7371, find_or_add_symbol("finite?"), &cvar_7370);
  make_cvar(cvar_7372, (object *)&__glo_infinite_127_scheme_inexact);make_pair(pair_7373, find_or_add_symbol("infinite?"), &cvar_7372);
  make_cvar(cvar_7374, (object *)&__glo_nan_127_scheme_inexact);make_pair(pair_7375, find_or_add_symbol("nan?"), &cvar_7374);
make_pair(c_7376, &pair_7349,Cyc_global_variables);
make_pair(c_7377, &pair_7351, &c_7376);
make_pair(c_7378, &pair_7353, &c_7377);
make_pair(c_7379, &pair_7355, &c_7378);
make_pair(c_7380, &pair_7357, &c_7379);
make_pair(c_7381, &pair_7359, &c_7380);
make_pair(c_7382, &pair_7361, &c_7381);
make_pair(c_7383, &pair_7363, &c_7382);
make_pair(c_7384, &pair_7365, &c_7383);
make_pair(c_7385, &pair_7367, &c_7384);
make_pair(c_7386, &pair_7369, &c_7385);
make_pair(c_7387, &pair_7371, &c_7386);
make_pair(c_7388, &pair_7373, &c_7387);
make_pair(c_7389, &pair_7375, &c_7388);
Cyc_global_variables = &c_7389;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117schemeinexact_scheme_inexact)->fn)(data, 1, cont, cont);
}
