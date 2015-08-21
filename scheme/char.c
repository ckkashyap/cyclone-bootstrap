/**
 ** This file was automatically generated by the Cyclone scheme compiler
 **
 ** (c) 2014 Justin Ethier
 ** Version 0.0.2 (Pre-release)
 **
 **/

#define funcall1(cfn,a1) if (type_of(cfn) == cons_tag || prim(cfn)) { Cyc_apply(0, (closure)a1, cfn); } else { ((cfn)->fn)(1,cfn,a1);}
/* Return to continuation after checking for stack overflow. */
#define return_funcall1(cfn,a1) \
{char stack; \
 if (check_overflow(&stack,stack_limit1)) { \
     object buf[1]; buf[0] = a1;\
     GC(cfn,buf,1); return; \
 } else {funcall1((closure) (cfn),a1); return;}}

/* Evaluate an expression after checking for stack overflow. */
#define return_check1(_fn,a1) { \
 char stack; \
 if (check_overflow(&stack,stack_limit1)) { \
     object buf[1]; buf[0] = a1; \
     mclosure0(c1, _fn); \
     GC(&c1, buf, 1); return; \
 } else { (_fn)(1,(closure)_fn,a1); }}

#define funcall2(cfn,a1,a2) if (type_of(cfn) == cons_tag || prim(cfn)) { Cyc_apply(1, (closure)a1, cfn,a2); } else { ((cfn)->fn)(2,cfn,a1,a2);}
/* Return to continuation after checking for stack overflow. */
#define return_funcall2(cfn,a1,a2) \
{char stack; \
 if (check_overflow(&stack,stack_limit1)) { \
     object buf[2]; buf[0] = a1;buf[1] = a2;\
     GC(cfn,buf,2); return; \
 } else {funcall2((closure) (cfn),a1,a2); return;}}

/* Evaluate an expression after checking for stack overflow. */
#define return_check2(_fn,a1,a2) { \
 char stack; \
 if (check_overflow(&stack,stack_limit1)) { \
     object buf[2]; buf[0] = a1;buf[1] = a2; \
     mclosure0(c1, _fn); \
     GC(&c1, buf, 2); return; \
 } else { (_fn)(2,(closure)_fn,a1,a2); }}

#define funcall3(cfn,a1,a2,a3) if (type_of(cfn) == cons_tag || prim(cfn)) { Cyc_apply(2, (closure)a1, cfn,a2,a3); } else { ((cfn)->fn)(3,cfn,a1,a2,a3);}
/* Return to continuation after checking for stack overflow. */
#define return_funcall3(cfn,a1,a2,a3) \
{char stack; \
 if (check_overflow(&stack,stack_limit1)) { \
     object buf[3]; buf[0] = a1;buf[1] = a2;buf[2] = a3;\
     GC(cfn,buf,3); return; \
 } else {funcall3((closure) (cfn),a1,a2,a3); return;}}

/* Evaluate an expression after checking for stack overflow. */
#define return_check3(_fn,a1,a2,a3) { \
 char stack; \
 if (check_overflow(&stack,stack_limit1)) { \
     object buf[3]; buf[0] = a1;buf[1] = a2;buf[2] = a3; \
     mclosure0(c1, _fn); \
     GC(&c1, buf, 3); return; \
 } else { (_fn)(3,(closure)_fn,a1,a2,a3); }}

#include "cyclone/types.h"
object __glo_lib_91init_117scheme_191char = nil;
object __glo_string_91downcase = nil;
object __glo_string_91upcase = nil;
object __glo_digit_91value = nil;
object __glo_char_91whitespace_127 = nil;
object __glo_char_91numeric_127 = nil;
object __glo_char_91lower_91case_127 = nil;
object __glo_char_91upper_91case_127 = nil;
object __glo_char_91alphabetic_127 = nil;
object __glo_char_91downcase = nil;
object __glo_char_91upcase = nil;
extern object __glo_call_91with_91current_91continuation;
extern object __glo_call_95cc;
extern object __glo_call_91with_91values;
extern object __glo_dynamic_91wind;
extern object __glo_values;
extern object __glo_char_123_127;
extern object __glo_char_121_127;
extern object __glo_char_125_127;
extern object __glo_char_121_123_127;
extern object __glo_char_125_123_127;
extern object __glo_string_123_127;
extern object __glo_string_121_127;
extern object __glo_string_121_123_127;
extern object __glo_string_125_127;
extern object __glo_string_125_123_127;
extern object __glo_foldl;
extern object __glo_foldr;
extern object __glo_not;
extern object __glo_list_127;
extern object __glo_zero_127;
extern object __glo_positive_127;
extern object __glo_negative_127;
extern object __glo_append;
extern object __glo__list;
extern object __glo_make_91list;
extern object __glo_list_91copy;
extern object __glo_map;
extern object __glo_for_91each;
extern object __glo_list_91tail;
extern object __glo_list_91ref;
extern object __glo_list_91set_67;
extern object __glo_reverse;
extern object __glo_boolean_123_127;
extern object __glo_symbol_123_127;
extern object __glo_Cyc_91obj_123_127;
extern object __glo_vector;
extern object __glo_vector_91append;
extern object __glo_vector_91copy;
extern object __glo_vector_91copy_67;
extern object __glo_vector_91fill_67;
extern object __glo_vector_91_125list;
extern object __glo_vector_91_125string;
extern object __glo_vector_91map;
extern object __glo_vector_91for_91each;
extern object __glo_make_91string;
extern object __glo_string;
extern object __glo_string_91copy;
extern object __glo_string_91copy_67;
extern object __glo_string_91fill_67;
extern object __glo_string_91_125list;
extern object __glo_string_91_125vector;
extern object __glo_string_91map;
extern object __glo_string_91for_91each;
extern object __glo_make_91parameter;
extern object __glo_current_91output_91port;
extern object __glo_current_91input_91port;
extern object __glo_current_91error_91port;
extern object __glo_call_91with_91port;
extern object __glo_error;
extern object __glo_raise;
extern object __glo_raise_91continuable;
extern object __glo_with_91exception_91handler;
extern object __glo__85exception_91handler_91stack_85;
extern object __glo_Cyc_91add_91exception_91handler;
extern object __glo_Cyc_91remove_91exception_91handler;
extern object __glo_newline;
extern object __glo_write_91char;
extern object __glo_flush_91output_91port;
extern object __glo_read_91line;
extern object __glo_features;
extern object __glo_any;
extern object __glo_every;
extern object __glo_and;
extern object __glo_or;
extern object __glo_let;
extern object __glo_let_85;
extern object __glo_begin;
extern object __glo__case;
extern object __glo_cond;
extern object __glo_when;
extern object __glo_quasiquote;
#include "cyclone/runtime.h"
static void __lambda_23(int argc, closure _,object k_7313) ;
static void __lambda_22(int argc, closure _,object k_7316, object str_731) ;
static void __lambda_21(int argc, closure _,object k_7319, object str_732) ;
static void __lambda_20(int argc, closure _,object k_7322, object c_733) ;
static void __lambda_19(int argc, object self_7357, object r_7323) ;
static void __lambda_18(int argc, object self_7358, object r_7324) ;
static void __lambda_17(int argc, closure _,object k_7327, object c_734) ;
static void __lambda_16(int argc, object self_7359, object r_7328) ;
static void __lambda_15(int argc, closure _,object k_7331, object c_735) ;
static void __lambda_14(int argc, object self_7360, object r_7332) ;
static void __lambda_13(int argc, closure _,object k_7335, object c_736) ;
static void __lambda_12(int argc, object self_7361, object r_7336) ;
static void __lambda_11(int argc, closure _,object k_7339, object c_737) ;
static void __lambda_10(int argc, object self_7362, object r_7340) ;
static void __lambda_9(int argc, closure _,object k_7343, object c_738) ;
static void __lambda_8(int argc, object self_7363, object r_7344) ;
static void __lambda_7(int argc, closure _,object k_7347, object c_739) ;
static void __lambda_6(int argc, object self_7364, object r_7348) ;
static void __lambda_5(int argc, object self_7365, object r_7350) ;
static void __lambda_4(int argc, object self_7366, object r_7349) ;
static void __lambda_3(int argc, closure _,object k_7353, object c_7310) ;
static void __lambda_2(int argc, object self_7367, object r_7354) ;
static void __lambda_1(int argc, object self_7368, object r_7356) ;
static void __lambda_0(int argc, object self_7369, object r_7355) ;

static void __lambda_23(int argc, closure _,object k_7313) {
  Cyc_st_add("scheme/char.sld:lib-init:scheme_char");

make_int(c_73191, 0);
return_funcall1(  k_7313,  &c_73191);; 
}

static void __lambda_22(int argc, closure _,object k_7316, object str_731) {
  Cyc_st_add("scheme/char.sld:string-downcase");
return_funcall3(  __glo_string_91map,  k_7316, __glo_char_91downcase, str_731);; 
}

static void __lambda_21(int argc, closure _,object k_7319, object str_732) {
  Cyc_st_add("scheme/char.sld:string-upcase");
return_funcall3(  __glo_string_91map,  k_7319, __glo_char_91upcase, str_732);; 
}

static void __lambda_20(int argc, closure _,object k_7322, object c_733) {
  Cyc_st_add("scheme/char.sld:digit-value");

closureN_type c_73170;
c_73170.tag = closureN_tag;
 c_73170.fn = (function_type)__lambda_19;
c_73170.num_args = 1;
c_73170.num_elt = 2;
c_73170.elts = (object *)alloca(sizeof(object) * 2);
c_73170.elts[0] = c_733;
c_73170.elts[1] = k_7322;

return_funcall2(  __glo_char_91numeric_127,  &c_73170, c_733);; 
}

static void __lambda_19(int argc, object self_7357, object r_7323) {
  Cyc_st_add("scheme/char.sld:digit-value");
if( !eq(boolean_f, r_7323) ){ 
  
closureN_type c_73172;
c_73172.tag = closureN_tag;
 c_73172.fn = (function_type)__lambda_18;
c_73172.num_args = 1;
c_73172.num_elt = 1;
c_73172.elts = (object *)alloca(sizeof(object) * 1);
c_73172.elts[0] = ((closureN)self_7357)->elts[1];


integer_type c_73181 = Cyc_char2integer(((closureN)self_7357)->elts[0]);
return_funcall1((closure)&c_73172,  &c_73181);
} else { 
  return_funcall1(  ((closureN)self_7357)->elts[1],  boolean_f);}
; 
}

static void __lambda_18(int argc, object self_7358, object r_7324) {
  Cyc_st_add("scheme/char.sld:digit-value");

make_int(c_73178, 48);

common_type c_73177 = Cyc_sub(2,r_7324, &c_73178);
return_funcall1(  ((closureN)self_7358)->elts[0],  &c_73177);; 
}

static void __lambda_17(int argc, closure _,object k_7327, object c_734) {
  Cyc_st_add("scheme/char.sld:char-whitespace?");

closureN_type c_73158;
c_73158.tag = closureN_tag;
 c_73158.fn = (function_type)__lambda_16;
c_73158.num_args = 1;
c_73158.num_elt = 2;
c_73158.elts = (object *)alloca(sizeof(object) * 2);
c_73158.elts[0] = c_734;
c_73158.elts[1] = k_7327;


make_cons(c_73167,obj_char2obj(10),nil);

make_cons(c_73166,obj_char2obj(13),&c_73167);

make_cons(c_73165,obj_char2obj(32),&c_73166);

make_cons(c_73164,obj_char2obj(9),&c_73165);
return_funcall1((closure)&c_73158,  &c_73164);; 
}

static void __lambda_16(int argc, object self_7359, object r_7328) {
  Cyc_st_add("scheme/char.sld:char-whitespace?");
return_funcall1(  ((closureN)self_7359)->elts[1],  memberp(((closureN)self_7359)->elts[0], r_7328));; 
}

static void __lambda_15(int argc, closure _,object k_7331, object c_735) {
  Cyc_st_add("scheme/char.sld:char-numeric?");

closureN_type c_73140;
c_73140.tag = closureN_tag;
 c_73140.fn = (function_type)__lambda_14;
c_73140.num_args = 1;
c_73140.num_elt = 2;
c_73140.elts = (object *)alloca(sizeof(object) * 2);
c_73140.elts[0] = c_735;
c_73140.elts[1] = k_7331;


make_cons(c_73155,obj_char2obj(57),nil);

make_cons(c_73154,obj_char2obj(56),&c_73155);

make_cons(c_73153,obj_char2obj(55),&c_73154);

make_cons(c_73152,obj_char2obj(54),&c_73153);

make_cons(c_73151,obj_char2obj(53),&c_73152);

make_cons(c_73150,obj_char2obj(52),&c_73151);

make_cons(c_73149,obj_char2obj(51),&c_73150);

make_cons(c_73148,obj_char2obj(50),&c_73149);

make_cons(c_73147,obj_char2obj(49),&c_73148);

make_cons(c_73146,obj_char2obj(48),&c_73147);
return_funcall1((closure)&c_73140,  &c_73146);; 
}

static void __lambda_14(int argc, object self_7360, object r_7332) {
  Cyc_st_add("scheme/char.sld:char-numeric?");
return_funcall1(  ((closureN)self_7360)->elts[1],  memberp(((closureN)self_7360)->elts[0], r_7332));; 
}

static void __lambda_13(int argc, closure _,object k_7335, object c_736) {
  Cyc_st_add("scheme/char.sld:char-lower-case?");

closureN_type c_73132;
c_73132.tag = closureN_tag;
 c_73132.fn = (function_type)__lambda_12;
c_73132.num_args = 1;
c_73132.num_elt = 2;
c_73132.elts = (object *)alloca(sizeof(object) * 2);
c_73132.elts[0] = c_736;
c_73132.elts[1] = k_7335;

return_funcall3(  __glo_char_125_123_127,  &c_73132, c_736, obj_char2obj(97));; 
}

static void __lambda_12(int argc, object self_7361, object r_7336) {
  Cyc_st_add("scheme/char.sld:char-lower-case?");
if( !eq(boolean_f, r_7336) ){ 
  return_funcall3(  __glo_char_121_123_127,  ((closureN)self_7361)->elts[1], ((closureN)self_7361)->elts[0], obj_char2obj(122));
} else { 
  return_funcall1(  ((closureN)self_7361)->elts[1],  boolean_f);}
; 
}

static void __lambda_11(int argc, closure _,object k_7339, object c_737) {
  Cyc_st_add("scheme/char.sld:char-upper-case?");

closureN_type c_73124;
c_73124.tag = closureN_tag;
 c_73124.fn = (function_type)__lambda_10;
c_73124.num_args = 1;
c_73124.num_elt = 2;
c_73124.elts = (object *)alloca(sizeof(object) * 2);
c_73124.elts[0] = c_737;
c_73124.elts[1] = k_7339;

return_funcall3(  __glo_char_125_123_127,  &c_73124, c_737, obj_char2obj(65));; 
}

static void __lambda_10(int argc, object self_7362, object r_7340) {
  Cyc_st_add("scheme/char.sld:char-upper-case?");
if( !eq(boolean_f, r_7340) ){ 
  return_funcall3(  __glo_char_121_123_127,  ((closureN)self_7362)->elts[1], ((closureN)self_7362)->elts[0], obj_char2obj(90));
} else { 
  return_funcall1(  ((closureN)self_7362)->elts[1],  boolean_f);}
; 
}

static void __lambda_9(int argc, closure _,object k_7343, object c_738) {
  Cyc_st_add("scheme/char.sld:char-alphabetic?");

closureN_type c_73116;
c_73116.tag = closureN_tag;
 c_73116.fn = (function_type)__lambda_8;
c_73116.num_args = 1;
c_73116.num_elt = 2;
c_73116.elts = (object *)alloca(sizeof(object) * 2);
c_73116.elts[0] = c_738;
c_73116.elts[1] = k_7343;

return_funcall3(  __glo_char_125_123_127,  &c_73116, c_738, obj_char2obj(65));; 
}

static void __lambda_8(int argc, object self_7363, object r_7344) {
  Cyc_st_add("scheme/char.sld:char-alphabetic?");
if( !eq(boolean_f, r_7344) ){ 
  return_funcall3(  __glo_char_121_123_127,  ((closureN)self_7363)->elts[1], ((closureN)self_7363)->elts[0], obj_char2obj(122));
} else { 
  return_funcall1(  ((closureN)self_7363)->elts[1],  boolean_f);}
; 
}

static void __lambda_7(int argc, closure _,object k_7347, object c_739) {
  Cyc_st_add("scheme/char.sld:char-downcase");

closureN_type c_7394;
c_7394.tag = closureN_tag;
 c_7394.fn = (function_type)__lambda_6;
c_7394.num_args = 1;
c_7394.num_elt = 2;
c_7394.elts = (object *)alloca(sizeof(object) * 2);
c_7394.elts[0] = c_739;
c_7394.elts[1] = k_7347;

return_funcall2(  __glo_char_91upper_91case_127,  &c_7394, c_739);; 
}

static void __lambda_6(int argc, object self_7364, object r_7348) {
  Cyc_st_add("scheme/char.sld:char-downcase");
if( !eq(boolean_f, r_7348) ){ 
  
closureN_type c_7396;
c_7396.tag = closureN_tag;
 c_7396.fn = (function_type)__lambda_5;
c_7396.num_args = 1;
c_7396.num_elt = 1;
c_7396.elts = (object *)alloca(sizeof(object) * 1);
c_7396.elts[0] = ((closureN)self_7364)->elts[1];


integer_type c_73109 = Cyc_char2integer(((closureN)self_7364)->elts[0]);
return_funcall1((closure)&c_7396,  &c_73109);
} else { 
  return_funcall1(  ((closureN)self_7364)->elts[1],  ((closureN)self_7364)->elts[0]);}
; 
}

static void __lambda_5(int argc, object self_7365, object r_7350) {
  Cyc_st_add("scheme/char.sld:char-downcase");

closureN_type c_7398;
c_7398.tag = closureN_tag;
 c_7398.fn = (function_type)__lambda_4;
c_7398.num_args = 1;
c_7398.num_elt = 1;
c_7398.elts = (object *)alloca(sizeof(object) * 1);
c_7398.elts[0] = ((closureN)self_7365)->elts[0];


make_int(c_73106, 32);

common_type c_73105 = Cyc_sum(2,r_7350, &c_73106);
return_funcall1((closure)&c_7398,  &c_73105);; 
}

static void __lambda_4(int argc, object self_7366, object r_7349) {
  Cyc_st_add("scheme/char.sld:char-downcase");
return_funcall1(  ((closureN)self_7366)->elts[0],  Cyc_integer2char(r_7349));; 
}

static void __lambda_3(int argc, closure _,object k_7353, object c_7310) {
  Cyc_st_add("scheme/char.sld:char-upcase");

closureN_type c_7372;
c_7372.tag = closureN_tag;
 c_7372.fn = (function_type)__lambda_2;
c_7372.num_args = 1;
c_7372.num_elt = 2;
c_7372.elts = (object *)alloca(sizeof(object) * 2);
c_7372.elts[0] = c_7310;
c_7372.elts[1] = k_7353;

return_funcall2(  __glo_char_91lower_91case_127,  &c_7372, c_7310);; 
}

static void __lambda_2(int argc, object self_7367, object r_7354) {
  Cyc_st_add("scheme/char.sld:char-upcase");
if( !eq(boolean_f, r_7354) ){ 
  
closureN_type c_7374;
c_7374.tag = closureN_tag;
 c_7374.fn = (function_type)__lambda_1;
c_7374.num_args = 1;
c_7374.num_elt = 1;
c_7374.elts = (object *)alloca(sizeof(object) * 1);
c_7374.elts[0] = ((closureN)self_7367)->elts[1];


integer_type c_7387 = Cyc_char2integer(((closureN)self_7367)->elts[0]);
return_funcall1((closure)&c_7374,  &c_7387);
} else { 
  return_funcall1(  ((closureN)self_7367)->elts[1],  ((closureN)self_7367)->elts[0]);}
; 
}

static void __lambda_1(int argc, object self_7368, object r_7356) {
  Cyc_st_add("scheme/char.sld:char-upcase");

closureN_type c_7376;
c_7376.tag = closureN_tag;
 c_7376.fn = (function_type)__lambda_0;
c_7376.num_args = 1;
c_7376.num_elt = 1;
c_7376.elts = (object *)alloca(sizeof(object) * 1);
c_7376.elts[0] = ((closureN)self_7368)->elts[0];


make_int(c_7384, 32);

common_type c_7383 = Cyc_sub(2,r_7356, &c_7384);
return_funcall1((closure)&c_7376,  &c_7383);; 
}

static void __lambda_0(int argc, object self_7369, object r_7355) {
  Cyc_st_add("scheme/char.sld:char-upcase");
return_funcall1(  ((closureN)self_7369)->elts[0],  Cyc_integer2char(r_7355));; 
}

void c_scheme_char_entry_pt(argc, cont,value) int argc; closure cont; object value;{ 

  add_global((object *) &__glo_lib_91init_117scheme_191char);
  add_global((object *) &__glo_string_91downcase);
  add_global((object *) &__glo_string_91upcase);
  add_global((object *) &__glo_digit_91value);
  add_global((object *) &__glo_char_91whitespace_127);
  add_global((object *) &__glo_char_91numeric_127);
  add_global((object *) &__glo_char_91lower_91case_127);
  add_global((object *) &__glo_char_91upper_91case_127);
  add_global((object *) &__glo_char_91alphabetic_127);
  add_global((object *) &__glo_char_91downcase);
  add_global((object *) &__glo_char_91upcase);
  mclosure0(c_73189, (function_type)__lambda_23);c_73189.num_args = 0; 
  __glo_lib_91init_117scheme_191char = &c_73189; 
  mclosure0(c_73187, (function_type)__lambda_22);c_73187.num_args = 1; 
  __glo_string_91downcase = &c_73187; 
  mclosure0(c_73185, (function_type)__lambda_21);c_73185.num_args = 1; 
  __glo_string_91upcase = &c_73185; 
  mclosure0(c_73168, (function_type)__lambda_20);c_73168.num_args = 1; 
  __glo_digit_91value = &c_73168; 
  mclosure0(c_73156, (function_type)__lambda_17);c_73156.num_args = 1; 
  __glo_char_91whitespace_127 = &c_73156; 
  mclosure0(c_73138, (function_type)__lambda_15);c_73138.num_args = 1; 
  __glo_char_91numeric_127 = &c_73138; 
  mclosure0(c_73130, (function_type)__lambda_13);c_73130.num_args = 1; 
  __glo_char_91lower_91case_127 = &c_73130; 
  mclosure0(c_73122, (function_type)__lambda_11);c_73122.num_args = 1; 
  __glo_char_91upper_91case_127 = &c_73122; 
  mclosure0(c_73114, (function_type)__lambda_9);c_73114.num_args = 1; 
  __glo_char_91alphabetic_127 = &c_73114; 
  mclosure0(c_7392, (function_type)__lambda_7);c_7392.num_args = 1; 
  __glo_char_91downcase = &c_7392; 
  mclosure0(c_7370, (function_type)__lambda_3);c_7370.num_args = 1; 
  __glo_char_91upcase = &c_7370; 

  make_cvar(cvar_73192, (object *)&__glo_lib_91init_117scheme_191char);make_cons(pair_73193, find_or_add_symbol("lib-init:scheme_char"), &cvar_73192);
  make_cvar(cvar_73194, (object *)&__glo_string_91downcase);make_cons(pair_73195, find_or_add_symbol("string-downcase"), &cvar_73194);
  make_cvar(cvar_73196, (object *)&__glo_string_91upcase);make_cons(pair_73197, find_or_add_symbol("string-upcase"), &cvar_73196);
  make_cvar(cvar_73198, (object *)&__glo_digit_91value);make_cons(pair_73199, find_or_add_symbol("digit-value"), &cvar_73198);
  make_cvar(cvar_73200, (object *)&__glo_char_91whitespace_127);make_cons(pair_73201, find_or_add_symbol("char-whitespace?"), &cvar_73200);
  make_cvar(cvar_73202, (object *)&__glo_char_91numeric_127);make_cons(pair_73203, find_or_add_symbol("char-numeric?"), &cvar_73202);
  make_cvar(cvar_73204, (object *)&__glo_char_91lower_91case_127);make_cons(pair_73205, find_or_add_symbol("char-lower-case?"), &cvar_73204);
  make_cvar(cvar_73206, (object *)&__glo_char_91upper_91case_127);make_cons(pair_73207, find_or_add_symbol("char-upper-case?"), &cvar_73206);
  make_cvar(cvar_73208, (object *)&__glo_char_91alphabetic_127);make_cons(pair_73209, find_or_add_symbol("char-alphabetic?"), &cvar_73208);
  make_cvar(cvar_73210, (object *)&__glo_char_91downcase);make_cons(pair_73211, find_or_add_symbol("char-downcase"), &cvar_73210);
  make_cvar(cvar_73212, (object *)&__glo_char_91upcase);make_cons(pair_73213, find_or_add_symbol("char-upcase"), &cvar_73212);
make_cons(c_73214, &pair_73193,Cyc_global_variables);
make_cons(c_73215, &pair_73195, &c_73214);
make_cons(c_73216, &pair_73197, &c_73215);
make_cons(c_73217, &pair_73199, &c_73216);
make_cons(c_73218, &pair_73201, &c_73217);
make_cons(c_73219, &pair_73203, &c_73218);
make_cons(c_73220, &pair_73205, &c_73219);
make_cons(c_73221, &pair_73207, &c_73220);
make_cons(c_73222, &pair_73209, &c_73221);
make_cons(c_73223, &pair_73211, &c_73222);
make_cons(c_73224, &pair_73213, &c_73223);
Cyc_global_variables = &c_73224;
cont = ((closure1_type *)cont)->elt1;
(((closure)__glo_lib_91init_117scheme_191char)->fn)(1, cont, cont);
}
