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
static void __lambda_16(void *data, int argc, closure _,object k_737) ;
static void __lambda_15(void *data, int argc, closure _, object k, object z) ;
static void __lambda_14(void *data, int argc, closure _, object k, object z) ;
static void __lambda_13(void *data, int argc, closure _, object k, object z) ;
static void __lambda_12(void *data, int argc, closure _, object k, object z) ;
static void __lambda_11(void *data, int argc, closure _,object k_7310, object z1_732, object z2_731_raw, ...) ;
static void __lambda_10(void *data, int argc, object self_7319, object r_7313) ;
static void __lambda_9(void *data, int argc, object self_7320, object r_7314) ;
static void __lambda_8(void *data, int argc, closure _, object k, object z) ;
static void __lambda_7(void *data, int argc, closure _, object k, object z) ;
static void __lambda_6(void *data, int argc, closure _, object k, object z) ;
static void __lambda_5(void *data, int argc, closure _, object k, object z) ;
static void __lambda_4(void *data, int argc, closure _, object k, object z) ;
static void __lambda_3(void *data, int argc, closure _,object k_7317, object z_734) ;
static void __lambda_2(void *data, int argc, object self_7321, object r_7318) ;
static void __lambda_1(void *data, int argc, closure _, object k, object z) ;
static void __lambda_0(void *data, int argc, closure _, object k, object z) ;

static void __lambda_16(void *data, int argc, closure _,object k_737) {
  Cyc_st_add(data, "scheme/inexact.sld:lib-init:schemeinexact");
return_closcall1(data,  k_737,  obj_int2obj(0));; 
}

static void __lambda_15(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, tan, z); }
static void __lambda_14(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, sqrt, z); }
static void __lambda_13(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, sin, z); }
static void __lambda_12(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, log, z); }
static void __lambda_11(void *data, int argc, closure _,object k_7310, object z1_732, object z2_731_raw, ...) {
load_varargs(z2_731, z2_731_raw, argc - 2);
  Cyc_st_add(data, "scheme/inexact.sld:log");
if( (boolean_f != Cyc_is_null(z2_731)) ){ 
  return_closcall2(data,  __glo_c_91log_scheme_inexact,  k_7310, z1_732);
} else { 
  
closureN_type c_7341;
c_7341.hdr.mark = gc_color_red;
 c_7341.hdr.grayed = 0;
c_7341.tag = closureN_tag;
 c_7341.fn = (function_type)__lambda_10;
c_7341.num_args = 1;
c_7341.num_elements = 2;
c_7341.elements = (object *)alloca(sizeof(object) * 2);
c_7341.elements[0] = k_7310;
c_7341.elements[1] = z2_731;

return_closcall2(data,  __glo_c_91log_scheme_inexact,  &c_7341, z1_732);}
; 
}

static void __lambda_10(void *data, int argc, object self_7319, object r_7313) {
  
closureN_type c_7343;
c_7343.hdr.mark = gc_color_red;
 c_7343.hdr.grayed = 0;
c_7343.tag = closureN_tag;
 c_7343.fn = (function_type)__lambda_9;
c_7343.num_args = 1;
c_7343.num_elements = 2;
c_7343.elements = (object *)alloca(sizeof(object) * 2);
c_7343.elements[0] = ((closureN)self_7319)->elements[0];
c_7343.elements[1] = r_7313;

return_closcall2(data,  __glo_c_91log_scheme_inexact,  &c_7343, Cyc_car(data, ((closureN)self_7319)->elements[1]));; 
}

static void __lambda_9(void *data, int argc, object self_7320, object r_7314) {
  
common_type local_7348; object c_7349 = Cyc_fast_div(data,&local_7348,((closureN)self_7320)->elements[1], r_7314);
return_closcall1(data,  ((closureN)self_7320)->elements[0],  c_7349);; 
}

static void __lambda_8(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, exp, z); }
static void __lambda_7(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, cos, z); }
static void __lambda_6(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, atan, z); }
static void __lambda_5(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, asin, z); }
static void __lambda_4(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, acos, z); }
static void __lambda_3(void *data, int argc, closure _,object k_7317, object z_734) {
  Cyc_st_add(data, "scheme/inexact.sld:finite?");

closureN_type c_7326;
c_7326.hdr.mark = gc_color_red;
 c_7326.hdr.grayed = 0;
c_7326.tag = closureN_tag;
 c_7326.fn = (function_type)__lambda_2;
c_7326.num_args = 1;
c_7326.num_elements = 1;
c_7326.elements = (object *)alloca(sizeof(object) * 1);
c_7326.elements[0] = k_7317;

return_closcall2(data,  __glo_infinite_127_scheme_inexact,  &c_7326, z_734);; 
}

static void __lambda_2(void *data, int argc, object self_7321, object r_7318) {
  if( (boolean_f != r_7318) ){ 
  return_closcall1(data,  ((closureN)self_7321)->elements[0],  boolean_f);
} else { 
  return_closcall1(data,  ((closureN)self_7321)->elements[0],  boolean_t);}
; 
}

static void __lambda_1(void *data, int argc, closure _, object k, object z) { Cyc_check_num(data, z);
        if (obj_is_int(z) || 
            type_of(z) == integer_tag ||
            type_of(z) == bignum_tag ||
            !isinf(((double_type *)z)->value)) 
        {
          return_closcall1(data, k, boolean_f);
        }
        return_closcall1(data, k, boolean_t); }
static void __lambda_0(void *data, int argc, closure _, object k, object z) { Cyc_check_num(data, z);
        if (obj_is_int(z) || 
            type_of(z) == integer_tag ||
            type_of(z) == bignum_tag ||
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
  mclosure0(c_7358, (function_type)__lambda_16);c_7358.num_args = 0; 
  __glo_lib_91init_117schemeinexact_scheme_inexact = &c_7358; 
  mclosure0(c_7357, (function_type)__lambda_15);c_7357.num_args = 1; 
  __glo_tan_scheme_inexact = &c_7357; 
  mclosure0(c_7356, (function_type)__lambda_14);c_7356.num_args = 1; 
  __glo_sqrt_scheme_inexact = &c_7356; 
  mclosure0(c_7355, (function_type)__lambda_13);c_7355.num_args = 1; 
  __glo_sin_scheme_inexact = &c_7355; 
  mclosure0(c_7354, (function_type)__lambda_12);c_7354.num_args = 1; 
  __glo_c_91log_scheme_inexact = &c_7354; 
  mclosure0(c_7336, (function_type)__lambda_11);c_7336.num_args = 1; 
  __glo_log_scheme_inexact = &c_7336; 
  mclosure0(c_7335, (function_type)__lambda_8);c_7335.num_args = 1; 
  __glo_exp_scheme_inexact = &c_7335; 
  mclosure0(c_7334, (function_type)__lambda_7);c_7334.num_args = 1; 
  __glo_cos_scheme_inexact = &c_7334; 
  mclosure0(c_7333, (function_type)__lambda_6);c_7333.num_args = 1; 
  __glo_atan_scheme_inexact = &c_7333; 
  mclosure0(c_7332, (function_type)__lambda_5);c_7332.num_args = 1; 
  __glo_asin_scheme_inexact = &c_7332; 
  mclosure0(c_7331, (function_type)__lambda_4);c_7331.num_args = 1; 
  __glo_acos_scheme_inexact = &c_7331; 
  mclosure0(c_7324, (function_type)__lambda_3);c_7324.num_args = 1; 
  __glo_finite_127_scheme_inexact = &c_7324; 
  mclosure0(c_7323, (function_type)__lambda_1);c_7323.num_args = 1; 
  __glo_infinite_127_scheme_inexact = &c_7323; 
  mclosure0(c_7322, (function_type)__lambda_0);c_7322.num_args = 1; 
  __glo_nan_127_scheme_inexact = &c_7322; 

  make_cvar(cvar_7360, (object *)&__glo_lib_91init_117schemeinexact_scheme_inexact);make_pair(pair_7361, find_or_add_symbol("lib-init:schemeinexact"), &cvar_7360);
  make_cvar(cvar_7362, (object *)&__glo_tan_scheme_inexact);make_pair(pair_7363, find_or_add_symbol("tan"), &cvar_7362);
  make_cvar(cvar_7364, (object *)&__glo_sqrt_scheme_inexact);make_pair(pair_7365, find_or_add_symbol("sqrt"), &cvar_7364);
  make_cvar(cvar_7366, (object *)&__glo_sin_scheme_inexact);make_pair(pair_7367, find_or_add_symbol("sin"), &cvar_7366);
  make_cvar(cvar_7368, (object *)&__glo_c_91log_scheme_inexact);make_pair(pair_7369, find_or_add_symbol("c-log"), &cvar_7368);
  make_cvar(cvar_7370, (object *)&__glo_log_scheme_inexact);make_pair(pair_7371, find_or_add_symbol("log"), &cvar_7370);
  make_cvar(cvar_7372, (object *)&__glo_exp_scheme_inexact);make_pair(pair_7373, find_or_add_symbol("exp"), &cvar_7372);
  make_cvar(cvar_7374, (object *)&__glo_cos_scheme_inexact);make_pair(pair_7375, find_or_add_symbol("cos"), &cvar_7374);
  make_cvar(cvar_7376, (object *)&__glo_atan_scheme_inexact);make_pair(pair_7377, find_or_add_symbol("atan"), &cvar_7376);
  make_cvar(cvar_7378, (object *)&__glo_asin_scheme_inexact);make_pair(pair_7379, find_or_add_symbol("asin"), &cvar_7378);
  make_cvar(cvar_7380, (object *)&__glo_acos_scheme_inexact);make_pair(pair_7381, find_or_add_symbol("acos"), &cvar_7380);
  make_cvar(cvar_7382, (object *)&__glo_finite_127_scheme_inexact);make_pair(pair_7383, find_or_add_symbol("finite?"), &cvar_7382);
  make_cvar(cvar_7384, (object *)&__glo_infinite_127_scheme_inexact);make_pair(pair_7385, find_or_add_symbol("infinite?"), &cvar_7384);
  make_cvar(cvar_7386, (object *)&__glo_nan_127_scheme_inexact);make_pair(pair_7387, find_or_add_symbol("nan?"), &cvar_7386);
make_pair(c_7388, &pair_7361,Cyc_global_variables);
make_pair(c_7389, &pair_7363, &c_7388);
make_pair(c_7390, &pair_7365, &c_7389);
make_pair(c_7391, &pair_7367, &c_7390);
make_pair(c_7392, &pair_7369, &c_7391);
make_pair(c_7393, &pair_7371, &c_7392);
make_pair(c_7394, &pair_7373, &c_7393);
make_pair(c_7395, &pair_7375, &c_7394);
make_pair(c_7396, &pair_7377, &c_7395);
make_pair(c_7397, &pair_7379, &c_7396);
make_pair(c_7398, &pair_7381, &c_7397);
make_pair(c_7399, &pair_7383, &c_7398);
make_pair(c_73100, &pair_7385, &c_7399);
make_pair(c_73101, &pair_7387, &c_73100);
Cyc_global_variables = &c_73101;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117schemeinexact_scheme_inexact)->fn)(data, 1, cont, cont);
}
