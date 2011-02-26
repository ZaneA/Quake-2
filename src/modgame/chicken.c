/* Generated from chicken.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2011-02-20 19:45
   Version 4.6.0 
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2010-11-09 on archlinux (Linux)
   command line: chicken.scm -output-file chicken.c -require-extension ports
   used units: library eval ports
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[27];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,14),40,113,50,58,112,114,105,110,116,32,97,49,53,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,14),40,113,50,58,99,104,97,116,32,97,56,49,50,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,13),40,99,117,114,114,101,110,116,45,101,110,116,41,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,23),40,115,101,116,45,99,117,114,114,101,110,116,45,101,110,116,32,97,49,57,50,51,41,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,29),40,113,50,58,119,105,116,104,45,101,110,116,105,116,121,32,101,110,116,50,54,32,112,114,111,99,50,55,41,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,29),40,113,50,58,103,101,116,45,112,108,97,121,101,114,45,98,121,45,110,97,109,101,32,97,51,48,51,52,41,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,31),40,113,50,58,99,108,111,115,101,115,116,45,112,108,97,121,101,114,45,114,97,110,103,101,32,97,51,56,52,50,41,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,28),40,113,50,58,95,103,101,116,45,101,110,116,45,98,121,45,116,114,97,99,101,32,97,52,54,53,48,41,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,21),40,113,50,58,103,101,116,45,101,110,116,45,98,121,45,116,114,97,99,101,41,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,41),40,113,50,58,95,109,111,118,101,45,101,110,116,105,116,121,32,97,53,56,54,50,32,97,53,55,54,51,32,97,53,54,54,52,32,97,53,53,54,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,28),40,113,50,58,109,111,118,101,45,101,110,116,105,116,121,32,120,54,56,32,121,54,57,32,122,55,48,41,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,22),40,113,50,58,95,103,101,116,45,111,114,105,103,105,110,32,97,55,50,55,54,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,15),40,113,50,58,103,101,116,45,111,114,105,103,105,110,41,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,20),40,113,50,58,102,105,110,100,45,105,116,101,109,32,97,56,49,56,53,41,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,28),40,113,50,58,95,115,112,97,119,110,45,105,116,101,109,32,97,57,48,57,53,32,97,56,57,57,54,41,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,23),40,113,50,58,115,112,97,119,110,45,105,116,101,109,32,110,97,109,101,49,48,48,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,35),40,113,50,58,95,115,119,105,116,99,104,45,119,101,97,112,111,110,32,97,49,48,51,49,48,56,32,97,49,48,50,49,48,57,41,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,26),40,113,50,58,115,119,105,116,99,104,45,119,101,97,112,111,110,32,110,97,109,101,49,49,51,41,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,25),40,113,50,58,102,105,114,101,45,98,108,97,115,116,101,114,32,97,49,49,53,49,49,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,28),40,113,50,58,102,105,114,101,45,109,97,99,104,105,110,101,103,117,110,32,97,49,50,50,49,50,54,41,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,25),40,113,50,58,102,105,114,101,45,114,97,105,108,103,117,110,32,97,49,50,57,49,51,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,16),40,97,52,52,55,32,115,116,114,105,110,103,49,51,53,41};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,6),40,97,52,53,51,41,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k425 */
static C_word C_fcall stub130(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub130(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
weapon_railgun_fire(t0);
return C_r;}

/* from k415 */
static C_word C_fcall stub123(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub123(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
Machinegun_Fire(t0);
return C_r;}

/* from k405 */
static C_word C_fcall stub116(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub116(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
Weapon_Blaster_Fire(t0);
return C_r;}

/* from k378 */
static C_word C_fcall stub104(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub104(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
Use_Weapon(t0,t1);
return C_r;}

/* from k347 */
static C_word C_fcall stub91(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub91(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
SpawnItem(t0,t1);
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer_or_false(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub82(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub82(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * name=(char * )C_string_or_null(C_a0);
C_return(FindItem(name));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub73(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub73(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * ent=(void * )C_c_pointer_or_null(C_a0);
C_return(vtos(((edict_t*)ent)->s.origin));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub59(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3) C_regparm;
C_regparm static C_word C_fcall stub59(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * ent=(void * )C_c_pointer_or_null(C_a0);
float x=(float )C_c_double(C_a1);
float y=(float )C_c_double(C_a2);
float z=(float )C_c_double(C_a3);
((edict_t*)ent)->s.origin[0] = x;
  ((edict_t*)ent)->s.origin[1] = y;
  ((edict_t*)ent)->s.origin[2] = z;
C_ret:
#undef return

return C_r;}

/* from k253 */
static C_word C_fcall stub47(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub47(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
C_r=C_mpointer_or_false(&C_a,(void*)Weapon_Trace_Fire(t0));
return C_r;}

/* from k243 */
static C_word C_fcall stub39(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub39(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
C_r=C_flonum(&C_a,PlayersRangeFromSpot(t0));
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer_or_false(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub31(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub31(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * name=(char * )C_string_or_null(C_a0);
int i;
  for (i = 0; i < globals.num_edicts; i++)
  {
      if (g_edicts[i].client && Q_stricmp(g_edicts[i].client->pers.netname, name) == 0)
          C_return(&g_edicts[i]);
  }
  C_return(NULL);
C_ret:
#undef return

return C_r;}

/* from k210 */
static C_word C_fcall stub20(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub20(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
Chicken_SetEnt(t0);
return C_r;}

/* from current-ent in k172 in k169 in k166 */
static C_word C_fcall stub15(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub15(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_mpointer_or_false(&C_a,(void*)Chicken_GetEnt());
return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub9(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub9(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * str=(char * )C_string_or_null(C_a0);
gi.cprintf(NULL, PRINT_CHAT, "%s", str);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub2(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub2(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * str=(char * )C_string_or_null(C_a0);
gi.cprintf(NULL, PRINT_HIGH, "%s", str);
C_ret:
#undef return

return C_r;}

C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_168)
static void C_ccall f_168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_171)
static void C_ccall f_171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_174)
static void C_ccall f_174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_454)
static void C_ccall f_454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_448)
static void C_ccall f_448(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_446)
static void C_ccall f_446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_433)
static void C_ccall f_433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_436)
static void C_ccall f_436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_442)
static void C_ccall f_442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_439)
static void C_ccall f_439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_422)
static void C_ccall f_422(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_412)
static void C_ccall f_412(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_402)
static void C_ccall f_402(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_388)
static void C_ccall f_388(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_396)
static void C_ccall f_396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_400)
static void C_ccall f_400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_371)
static void C_ccall f_371(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_357)
static void C_ccall f_357(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_365)
static void C_ccall f_365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_369)
static void C_ccall f_369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_340)
static void C_ccall f_340(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_326)
static void C_ccall f_326(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_331)
static void C_ccall f_331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_316)
static void C_ccall f_316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_324)
static void C_ccall f_324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_302)
static void C_ccall f_302(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_292)
static void C_ccall f_292(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_300)
static void C_ccall f_300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_270)
static void C_ccall f_270(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_260)
static void C_ccall f_260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_268)
static void C_ccall f_268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_250)
static void C_ccall f_250(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_240)
static void C_ccall f_240(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_226)
static void C_ccall f_226(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_231)
static void C_ccall f_231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_217)
static void C_ccall f_217(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_221)
static void C_ccall f_221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_207)
static void C_ccall f_207(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_204)
static void C_ccall f_204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_190)
static void C_ccall f_190(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_195)
static void C_ccall f_195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_176)
static void C_ccall f_176(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_181)
static void C_ccall f_181(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(tr6)
static void C_fcall tr6(C_proc6 k) C_regparm C_noret;
C_regparm static void C_fcall tr6(C_proc6 k){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
(k)(6,t0,t1,t2,t3,t4,t5);}

C_noret_decl(tr5)
static void C_fcall tr5(C_proc5 k) C_regparm C_noret;
C_regparm static void C_fcall tr5(C_proc5 k){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
(k)(5,t0,t1,t2,t3,t4);}

C_noret_decl(tr4)
static void C_fcall tr4(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4(C_proc4 k){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
(k)(4,t0,t1,t2,t3);}

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_main_entry_point
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("toplevel"));
C_resize_stack(262144);
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(270)){
C_save(t1);
C_rereclaim2(270*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,27);
lf[0]=C_h_intern(&lf[0],8,"q2:print");
lf[1]=C_h_intern(&lf[1],17,"\003sysmake-c-string");
lf[2]=C_h_intern(&lf[2],7,"q2:chat");
lf[3]=C_h_intern(&lf[3],11,"current-ent");
lf[4]=C_h_intern(&lf[4],15,"set-current-ent");
lf[5]=C_h_intern(&lf[5],14,"q2:with-entity");
lf[6]=C_h_intern(&lf[6],21,"q2:get-player-by-name");
lf[7]=C_h_intern(&lf[7],23,"q2:closest-player-range");
lf[8]=C_h_intern(&lf[8],20,"q2:_get-ent-by-trace");
lf[9]=C_h_intern(&lf[9],19,"q2:get-ent-by-trace");
lf[10]=C_h_intern(&lf[10],15,"q2:_move-entity");
lf[11]=C_h_intern(&lf[11],14,"q2:move-entity");
lf[12]=C_h_intern(&lf[12],14,"q2:_get-origin");
lf[13]=C_h_intern(&lf[13],17,"\003syspeek-c-string");
lf[14]=C_h_intern(&lf[14],13,"q2:get-origin");
lf[15]=C_h_intern(&lf[15],12,"q2:find-item");
lf[16]=C_h_intern(&lf[16],14,"q2:_spawn-item");
lf[17]=C_h_intern(&lf[17],13,"q2:spawn-item");
lf[18]=C_h_intern(&lf[18],17,"q2:_switch-weapon");
lf[19]=C_h_intern(&lf[19],16,"q2:switch-weapon");
lf[20]=C_h_intern(&lf[20],15,"q2:fire-blaster");
lf[21]=C_h_intern(&lf[21],18,"q2:fire-machinegun");
lf[22]=C_h_intern(&lf[22],15,"q2:fire-railgun");
lf[23]=C_h_intern(&lf[23],25,"\003sysimplicit-exit-handler");
lf[24]=C_h_intern(&lf[24],14,"return-to-host");
lf[25]=C_h_intern(&lf[25],19,"current-output-port");
lf[26]=C_h_intern(&lf[26],16,"make-output-port");
C_register_lf2(lf,27,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_168,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k166 */
static void C_ccall f_168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_168,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_171,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k169 in k166 */
static void C_ccall f_171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_171,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_174,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k172 in k169 in k166 */
static void C_ccall f_174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word ab[75],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_174,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! q2:print ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_176,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[2]+1 /* (set! q2:chat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_190,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[3]+1 /* (set! current-ent ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_204,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[4]+1 /* (set! set-current-ent ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_207,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[5]+1 /* (set! q2:with-entity ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_217,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[6]+1 /* (set! q2:get-player-by-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_226,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[7]+1 /* (set! q2:closest-player-range ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_240,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[8]+1 /* (set! q2:_get-ent-by-trace ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_250,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[9]+1 /* (set! q2:get-ent-by-trace ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_260,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[10]+1 /* (set! q2:_move-entity ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_270,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[11]+1 /* (set! q2:move-entity ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_292,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[12]+1 /* (set! q2:_get-origin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_302,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[14]+1 /* (set! q2:get-origin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_316,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[15]+1 /* (set! q2:find-item ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_326,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[16]+1 /* (set! q2:_spawn-item ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_340,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[17]+1 /* (set! q2:spawn-item ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_357,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[18]+1 /* (set! q2:_switch-weapon ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_371,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[19]+1 /* (set! q2:switch-weapon ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_388,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[20]+1 /* (set! q2:fire-blaster ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_402,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[21]+1 /* (set! q2:fire-machinegun ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_412,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[22]+1 /* (set! q2:fire-railgun ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_422,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_433,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_446,a[2]=t23,tmp=(C_word)a,a+=3,tmp);
t25=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_448,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_454,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp);
C_trace("chicken.scm:90: make-output-port");
((C_proc4)C_fast_retrieve_symbol_proc(lf[26]))(4,*((C_word*)lf[26]+1),t24,t25,t26);}

/* a453 in k172 in k169 in k166 */
static void C_ccall f_454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_454,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* a447 in k172 in k169 in k166 */
static void C_ccall f_448(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_448,3,t0,t1,t2);}
C_trace("chicken.scm:92: q2:print");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[0]+1)))(3,*((C_word*)lf[0]+1),t1,t2);}

/* k444 in k172 in k169 in k166 */
static void C_ccall f_446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("chicken.scm:89: current-output-port");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[25]+1)))(3,*((C_word*)lf[25]+1),((C_word*)t0)[2],t1);}

/* k431 in k172 in k169 in k166 */
static void C_ccall f_433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_433,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_436,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("chicken.scm:96: return-to-host");
((C_proc2)C_fast_retrieve_symbol_proc(lf[24]))(2,*((C_word*)lf[24]+1),t2);}

/* k434 in k431 in k172 in k169 in k166 */
static void C_ccall f_436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_436,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_439,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_442,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#implicit-exit-handler");
((C_proc2)C_fast_retrieve_symbol_proc(lf[23]))(2,*((C_word*)lf[23]+1),t3);}

/* k440 in k434 in k431 in k172 in k169 in k166 */
static void C_ccall f_442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k437 in k434 in k431 in k172 in k169 in k166 */
static void C_ccall f_439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* q2:fire-railgun in k172 in k169 in k166 */
static void C_ccall f_422(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_422,3,t0,t1,t2);}
t3=(C_truep(t2)?C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub130(C_SCHEME_UNDEFINED,t3));}

/* q2:fire-machinegun in k172 in k169 in k166 */
static void C_ccall f_412(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_412,3,t0,t1,t2);}
t3=(C_truep(t2)?C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub123(C_SCHEME_UNDEFINED,t3));}

/* q2:fire-blaster in k172 in k169 in k166 */
static void C_ccall f_402(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_402,3,t0,t1,t2);}
t3=(C_truep(t2)?C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub116(C_SCHEME_UNDEFINED,t3));}

/* q2:switch-weapon in k172 in k169 in k166 */
static void C_ccall f_388(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_388,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_396,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("chicken.scm:77: current-ent");
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[3]+1)))(2,*((C_word*)lf[3]+1),t3);}

/* k394 in q2:switch-weapon in k172 in k169 in k166 */
static void C_ccall f_396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_396,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_400,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("chicken.scm:77: q2:find-item");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t2,((C_word*)t0)[2]);}

/* k398 in k394 in q2:switch-weapon in k172 in k169 in k166 */
static void C_ccall f_400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("chicken.scm:77: q2:_switch-weapon");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[18]+1)))(4,*((C_word*)lf[18]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* q2:_switch-weapon in k172 in k169 in k166 */
static void C_ccall f_371(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_371,4,t0,t1,t2,t3);}
t4=(C_truep(t2)?C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t5=(C_truep(t3)?C_i_foreign_pointer_argumentp(t3):C_SCHEME_FALSE);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub104(C_SCHEME_UNDEFINED,t4,t5));}

/* q2:spawn-item in k172 in k169 in k166 */
static void C_ccall f_357(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_357,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_365,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("chicken.scm:68: current-ent");
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[3]+1)))(2,*((C_word*)lf[3]+1),t3);}

/* k363 in q2:spawn-item in k172 in k169 in k166 */
static void C_ccall f_365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_365,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_369,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("chicken.scm:68: q2:find-item");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t2,((C_word*)t0)[2]);}

/* k367 in k363 in q2:spawn-item in k172 in k169 in k166 */
static void C_ccall f_369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("chicken.scm:68: q2:_spawn-item");
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[16]+1)))(4,*((C_word*)lf[16]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* q2:_spawn-item in k172 in k169 in k166 */
static void C_ccall f_340(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_340,4,t0,t1,t2,t3);}
t4=(C_truep(t2)?C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t5=(C_truep(t3)?C_i_foreign_pointer_argumentp(t3):C_SCHEME_FALSE);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub91(C_SCHEME_UNDEFINED,t4,t5));}

/* q2:find-item in k172 in k169 in k166 */
static void C_ccall f_326(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_326,3,t0,t1,t2);}
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_331,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t5=C_i_foreign_string_argumentp(t2);
C_trace("##sys#make-c-string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[1]))(3,*((C_word*)lf[1]+1),t4,t5);}
else{
t5=t4;
f_331(2,t5,C_SCHEME_FALSE);}}

/* k329 in q2:find-item in k172 in k169 in k166 */
static void C_ccall f_331(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub82(((C_word*)t0)[2],t1));}

/* q2:get-origin in k172 in k169 in k166 */
static void C_ccall f_316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_316,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_324,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("chicken.scm:56: current-ent");
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[3]+1)))(2,*((C_word*)lf[3]+1),t2);}

/* k322 in q2:get-origin in k172 in k169 in k166 */
static void C_ccall f_324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("chicken.scm:56: q2:_get-origin");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),((C_word*)t0)[2],t1);}

/* q2:_get-origin in k172 in k169 in k166 */
static void C_ccall f_302(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_302,3,t0,t1,t2);}
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=(C_truep(t2)?C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t5=stub73(t3,t4);
C_trace("##sys#peek-c-string");
t6=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t5,C_fix(0));}

/* q2:move-entity in k172 in k169 in k166 */
static void C_ccall f_292(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_292,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_300,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("chicken.scm:50: current-ent");
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[3]+1)))(2,*((C_word*)lf[3]+1),t5);}

/* k298 in q2:move-entity in k172 in k169 in k166 */
static void C_ccall f_300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("chicken.scm:50: q2:_move-entity");
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(6,*((C_word*)lf[10]+1),((C_word*)t0)[5],t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* q2:_move-entity in k172 in k169 in k166 */
static void C_ccall f_270(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_270,6,t0,t1,t2,t3,t4,t5);}
t6=(C_truep(t2)?C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t7=C_i_foreign_flonum_argumentp(t3);
t8=C_i_foreign_flonum_argumentp(t4);
t9=C_i_foreign_flonum_argumentp(t5);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,stub59(C_SCHEME_UNDEFINED,t6,t7,t8,t9));}

/* q2:get-ent-by-trace in k172 in k169 in k166 */
static void C_ccall f_260(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_260,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_268,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("chicken.scm:41: current-ent");
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[3]+1)))(2,*((C_word*)lf[3]+1),t2);}

/* k266 in q2:get-ent-by-trace in k172 in k169 in k166 */
static void C_ccall f_268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("chicken.scm:41: q2:_get-ent-by-trace");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(3,*((C_word*)lf[8]+1),((C_word*)t0)[2],t1);}

/* q2:_get-ent-by-trace in k172 in k169 in k166 */
static void C_ccall f_250(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_250,3,t0,t1,t2);}
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=(C_truep(t2)?C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub47(t3,t4));}

/* q2:closest-player-range in k172 in k169 in k166 */
static void C_ccall f_240(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_240,3,t0,t1,t2);}
t3=C_a_i_bytevector(&a,1,C_fix(4));
t4=(C_truep(t2)?C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub39(t3,t4));}

/* q2:get-player-by-name in k172 in k169 in k166 */
static void C_ccall f_226(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_226,3,t0,t1,t2);}
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_231,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t5=C_i_foreign_string_argumentp(t2);
C_trace("##sys#make-c-string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[1]))(3,*((C_word*)lf[1]+1),t4,t5);}
else{
t5=t4;
f_231(2,t5,C_SCHEME_FALSE);}}

/* k229 in q2:get-player-by-name in k172 in k169 in k166 */
static void C_ccall f_231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub31(((C_word*)t0)[2],t1));}

/* q2:with-entity in k172 in k169 in k166 */
static void C_ccall f_217(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_217,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_221,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace("chicken.scm:21: set-current-ent");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[4]+1)))(3,*((C_word*)lf[4]+1),t4,t2);}

/* k219 in q2:with-entity in k172 in k169 in k166 */
static void C_ccall f_221(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("chicken.scm:22: proc");
t2=((C_word*)t0)[3];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* set-current-ent in k172 in k169 in k166 */
static void C_ccall f_207(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_207,3,t0,t1,t2);}
t3=(C_truep(t2)?C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub20(C_SCHEME_UNDEFINED,t3));}

/* current-ent in k172 in k169 in k166 */
static void C_ccall f_204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_204,2,t0,t1);}
t2=C_a_i_bytevector(&a,1,C_fix(3));
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub15(t2));}

/* q2:chat in k172 in k169 in k166 */
static void C_ccall f_190(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_190,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_195,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t2)){
t4=C_i_foreign_string_argumentp(t2);
C_trace("##sys#make-c-string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[1]))(3,*((C_word*)lf[1]+1),t3,t4);}
else{
t4=t3;
f_195(2,t4,C_SCHEME_FALSE);}}

/* k193 in q2:chat in k172 in k169 in k166 */
static void C_ccall f_195(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub9(C_SCHEME_UNDEFINED,t1));}

/* q2:print in k172 in k169 in k166 */
static void C_ccall f_176(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_176,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_181,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t2)){
t4=C_i_foreign_string_argumentp(t2);
C_trace("##sys#make-c-string");
((C_proc3)C_fast_retrieve_symbol_proc(lf[1]))(3,*((C_word*)lf[1]+1),t3,t4);}
else{
t4=t3;
f_181(2,t4,C_SCHEME_FALSE);}}

/* k179 in q2:print in k172 in k169 in k166 */
static void C_ccall f_181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub2(C_SCHEME_UNDEFINED,t1));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[45] = {
{"toplevel:chicken_scm",(void*)C_toplevel},
{"f_168:chicken_scm",(void*)f_168},
{"f_171:chicken_scm",(void*)f_171},
{"f_174:chicken_scm",(void*)f_174},
{"f_454:chicken_scm",(void*)f_454},
{"f_448:chicken_scm",(void*)f_448},
{"f_446:chicken_scm",(void*)f_446},
{"f_433:chicken_scm",(void*)f_433},
{"f_436:chicken_scm",(void*)f_436},
{"f_442:chicken_scm",(void*)f_442},
{"f_439:chicken_scm",(void*)f_439},
{"f_422:chicken_scm",(void*)f_422},
{"f_412:chicken_scm",(void*)f_412},
{"f_402:chicken_scm",(void*)f_402},
{"f_388:chicken_scm",(void*)f_388},
{"f_396:chicken_scm",(void*)f_396},
{"f_400:chicken_scm",(void*)f_400},
{"f_371:chicken_scm",(void*)f_371},
{"f_357:chicken_scm",(void*)f_357},
{"f_365:chicken_scm",(void*)f_365},
{"f_369:chicken_scm",(void*)f_369},
{"f_340:chicken_scm",(void*)f_340},
{"f_326:chicken_scm",(void*)f_326},
{"f_331:chicken_scm",(void*)f_331},
{"f_316:chicken_scm",(void*)f_316},
{"f_324:chicken_scm",(void*)f_324},
{"f_302:chicken_scm",(void*)f_302},
{"f_292:chicken_scm",(void*)f_292},
{"f_300:chicken_scm",(void*)f_300},
{"f_270:chicken_scm",(void*)f_270},
{"f_260:chicken_scm",(void*)f_260},
{"f_268:chicken_scm",(void*)f_268},
{"f_250:chicken_scm",(void*)f_250},
{"f_240:chicken_scm",(void*)f_240},
{"f_226:chicken_scm",(void*)f_226},
{"f_231:chicken_scm",(void*)f_231},
{"f_217:chicken_scm",(void*)f_217},
{"f_221:chicken_scm",(void*)f_221},
{"f_207:chicken_scm",(void*)f_207},
{"f_204:chicken_scm",(void*)f_204},
{"f_190:chicken_scm",(void*)f_190},
{"f_195:chicken_scm",(void*)f_195},
{"f_176:chicken_scm",(void*)f_176},
{"f_181:chicken_scm",(void*)f_181},
{NULL,NULL}};
#endif

static C_PTABLE_ENTRY *create_ptable(void){
#ifdef C_ENABLE_PTABLES
return ptable;
#else
return NULL;
#endif
}
/* end of file */
