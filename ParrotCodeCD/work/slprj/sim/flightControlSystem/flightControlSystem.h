#ifndef RTW_HEADER_flightControlSystem_h_
#define RTW_HEADER_flightControlSystem_h_
#ifndef flightControlSystem_COMMON_INCLUDES_
#define flightControlSystem_COMMON_INCLUDES_
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "flightControlSystem_types.h"
#include <stddef.h>
#include "rtGetInf.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
#include "zero_crossing_types.h"
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { int8_T l1m15tfakw ; } cp43bsibsl ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real32_T cy3fygubmc [ 2 ] ; } iwfqjny14x ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { int8_T pekexl3321 ; boolean_T olq2d0vjz1 ; } js1e00ratj ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real32_T fm0zbm30ze [ 2 ] ; } eyxn5vdyjf ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { int8_T bm4eggndai ; boolean_T c4xm4qcxri ; } nbhtslb2lj ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real32_T a2yqbcqam0_cxarnvbvui [ 16 ] ; real32_T
ibi2piagvt_bhxxfovxdy [ 16 ] ; real32_T evstouefyu_pbm3vprmfu [ 12 ] ;
real32_T b45ahf3s5y_cv5hdgrwft [ 9 ] ; real_T dwunn3bi44_fqdqrf4qbc [ 4 ] ;
real_T lt2w3q5ili [ 3 ] ; real_T bkymt1dvwc_g2mlkqadfk [ 3 ] ; real_T
b45ahf3s5y_g1smspu5ke [ 3 ] ; real_T jrif0eh3si [ 2 ] ; real_T h1e4elx2mq [ 2
] ; real_T azpx0v1un2 [ 2 ] ; real32_T pgvax4h34w [ 6 ] ; real32_T
fb2gutbykh_merlcviukg [ 4 ] ; real32_T giqydtq0ch_nz4o0shxby [ 4 ] ; real32_T
mumoqxms2i_ppxrqq0gsf [ 4 ] ; real_T cb2kpcmxmf [ 2 ] ; real_T ejocj11n0h [ 2
] ; real_T cwam1jmb4d [ 2 ] ; real_T cibucofkti [ 2 ] ; real_T mzt1uypci3 [ 4
] ; real_T baixec1wg5_llw0u2ae0v [ 2 ] ; real32_T gi5rqqmnns_jwzvbuczlb [ 3 ]
; real32_T kywezacruu_dhmrxtyqop [ 3 ] ; real_T fexzbbxkzn ; real_T
injgfoez2n ; real_T amvrcq1fuc ; real_T lqa5qhltpn_guugdwf2m3 ; real_T
nypkbmfphb_ldqodwenvz ; real_T finlzeqd1s_dhamdvybc1 ; real_T unnamed_idx_2 ;
real_T lgeyrynojq_idx_0 ; real_T hkjxgkhe23_idx_1 ; real_T lgeyrynojq_idx_1 ;
real_T bkymt1dvwc_tmp ; real_T bkymt1dvwc_tmp_dypejvacrn ; real32_T
k20gadexm3 [ 2 ] ; real32_T dz3nhptc13 [ 4 ] ; real32_T orkhsyifkf [ 2 ] ;
real32_T hxsoeyanux [ 2 ] ; real32_T cy2qrqn1lj [ 2 ] ; real32_T lg5arpf5ue [
4 ] ; real32_T djui0aicgi [ 2 ] ; real32_T itfc501qfv [ 8 ] ; real32_T
lmcv44d02w [ 8 ] ; real32_T fgvyovkpwf [ 16 ] ; real32_T ctthzagufv [ 4 ] ;
real32_T h33xcbk4xk [ 4 ] ; real32_T j4i1uknzzt [ 4 ] ; real32_T
fgsro4huaj_lxo5edjg3c [ 2 ] ; real32_T jrif0eh3si_owjr1h1vqy [ 2 ] ; real32_T
b1alozynib_bjbgfqrolh [ 2 ] ; real32_T cwam1jmb4d_nuebgmauvi [ 2 ] ; real32_T
gsawacrzqm_bsqwvugooi [ 2 ] ; real32_T bahayusppm_lnjdk5wtww [ 2 ] ; real32_T
nbtfbjeh04_hv2ho1zopz [ 2 ] ; real32_T oxbwiw21l5_bnlywzniup [ 2 ] ; real32_T
mz1msmwhmu_dapv3jlyq5 [ 2 ] ; real32_T hcgu200vho ; real32_T ebf3llmkmq ;
real32_T jam0bbyqk0 ; real32_T li0sey3j1t ; real32_T hnpiwdpoj2 ; real32_T
aiiueo1qke [ 2 ] ; real32_T b45fpbx2d0 ; real32_T aimulbgnv1 [ 2 ] ; real32_T
h54nqgl2zi [ 2 ] ; real32_T lxqm54wszc [ 2 ] ; real32_T msw4j1f5a5 ; real32_T
e5n3bt555f [ 4 ] ; real32_T nzxxkteuhv [ 2 ] ; real32_T dnr1mtcc1t [ 2 ] ;
real32_T eqi4oxtzgi [ 2 ] ; real32_T gyjxisztxe [ 4 ] ; real32_T abb5hsfzx0 [
3 ] ; real32_T g3jppbwsml [ 16 ] ; real32_T j0pu4cjzeb [ 2 ] ; real32_T
hnpiwdpoj2_mbvzarwird [ 2 ] ; real32_T dmkoj05idu [ 4 ] ; real32_T dzof3xbsea
; real32_T l3w0kjjahz ; real32_T j0ff3qp1rt ; real32_T hapfqnwg0b ; real32_T
acc1 ; real32_T nz2ewbvzet_ezqlmfzvpq ; real32_T fi3vvh5454_bjvjhhzy4i ;
real32_T ll554evhck_jzx3amusab ; real32_T ojk311owvo_fdinthrxmb ; real32_T
eu2eec20kt_al00mdgrv4 ; real32_T avl4esggii_ju13rw2h0m ; real32_T
hop4dus5mt_jz50ptvnrg ; real32_T kpp0n2hpyr_idx_0 ; real32_T kpp0n2hpyr_idx_1
; real32_T kpp0n2hpyr_idx_2 ; real32_T el1oeuwfff_idx_1 ; real32_T
el1oeuwfff_idx_2 ; real32_T n3tk24qz4a_idx_2 ; real32_T ic244jc1gm_idx_1 ;
real32_T n3tk24qz4a_idx_0 ; real32_T n3tk24qz4a_idx_1 ; real32_T
m4p4lyh553_idx_0 ; real32_T amlu45g12u_idx_0 ; real32_T amlu45g12u_idx_1 ;
real32_T ohfdd3d0o2_idx_1 ; real32_T mdcekwyyyu_idx_1 ; real32_T
mdcekwyyyu_idx_2 ; real32_T ohfdd3d0o2_idx_2 ; real32_T ai5impjpjd_idx_0 ;
real32_T ai5impjpjd_idx_1 ; real32_T eviwwiatp3_idx_2 ; real32_T
ai5impjpjd_idx_2 ; real32_T b45ahf3s5y_tmp ; real32_T ewppo5cuta_o4f35lbcvx ;
real32_T jx0gtxwpne_nyxm0bsxsn ; real32_T kvh04n0zhj_icdfyazkhu ; int32_T cff
; int32_T denIdx ; int32_T memOffset ; int32_T i ; uint32_T f3ad2542be ;
uint32_T ba3p2jichr ; uint32_T of0nbo13v0 ; uint32_T n0z1n3jefd_oyypvi4boh ;
uint32_T kxnz4phnr4_nvsvtgkap4 ; uint16_T lmcv44d02w_cl54gopm0x ; int16_T
mzt1uypci3_kkiq3xxxve ; uint8_T n3bu3yuc32 ; boolean_T m45vzwjtw0 ; boolean_T
er5v410dep ; boolean_T fhgxlms05u ; boolean_T jg2mvzzkfu ; eyxn5vdyjf
afkrtspz4r ; iwfqjny14x nyojmurzoq ; eyxn5vdyjf ojiyh5md2fp ; iwfqjny14x
h4zka13z2ik ; } mvrhhqav5d ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real_T ggktuboh3w ; real_T dudxvyaali [ 2 ] ; real_T
bgsd4hwxvl [ 3 ] ; real_T fql4utazuo ; real_T hydw3zxfzv ; real_T dfwvove5te
; struct { void * AQHandles ; } puq03cpvbg ; real32_T n3c1i00bxy [ 2 ] ;
real32_T nbfzg3mofs [ 3 ] ; real32_T dvmcgiwvlg ; real32_T m3yo5bm0br [ 15 ]
; real32_T johlzfhbo0 [ 2 ] ; real32_T dpd1kuq4ti [ 2 ] ; real32_T bkpwlcggki
; real32_T mlypgyrlj0 ; real32_T gawfgxhxnt [ 5 ] ; real32_T fytbq2ia43 [ 4 ]
; real32_T hwg5o53ida [ 10 ] ; real32_T opm4ouvgho [ 2 ] ; real32_T
lbqu3u2lvu [ 2 ] ; real32_T mar1fo4k2g [ 2 ] ; real32_T ic2lljdnru ; real32_T
i2waz4wcdh [ 2 ] ; real32_T jomzm1efxy [ 2 ] ; real32_T j1ya5i3lju [ 2 ] ;
real32_T fmgblzk1yx [ 2 ] ; real32_T elivplttop ; int32_T nihxmtnwn0 ;
uint32_T h0kguh0g04 ; uint32_T mcs0s1fmhj ; uint32_T ltea43kayw ; real32_T
j33klwenqs ; real32_T ltcjlexrjv ; real32_T akyvzynr2c ; real32_T cijvfuftv0
; real32_T khvqumkvsg [ 2 ] ; real32_T ebu51u4psc [ 2 ] ; uint16_T jbinyylhej
; uint16_T brlttosllt ; int8_T ioroua40sf ; int8_T ayxp4yzgmp ; int8_T
cpmhds2jl3 ; int8_T pqmuncbcz5 ; int8_T pkieznpv5v ; int8_T cebxw1ejuv ;
int8_T l0d3hv0vie ; uint8_T gmlzgvyimo ; uint8_T kewexujuqg ; boolean_T
dfsxdbhpqk ; boolean_T bbdsjay1cb ; boolean_T cyeg151nql ; boolean_T
dtlx1df0zm ; boolean_T lmmiwr5usb ; boolean_T be4ujsoocn ; boolean_T
l0khpg0k3s ; boolean_T ozswztjljh ; nbhtslb2lj afkrtspz4r ; js1e00ratj
nyojmurzoq ; nbhtslb2lj ojiyh5md2fp ; js1e00ratj h4zka13z2ik ; cp43bsibsl
p443cxznfl ; cp43bsibsl lj1nf2ykx4 ; cp43bsibsl aiusdqgq1o ; cp43bsibsl
actjduhucg ; cp43bsibsl o0uasibb2vq ; } djfqfeyfr2 ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real_T bm5kxsbozs ; } j5242przmp ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { ZCSigState ogguxux3on ; } a10fskrtdw ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { boolean_T l1rmalgpyz [ 3360 ] ; boolean_T cib04nqyrs [ 1100
] ; boolean_T cvxmgartch [ 6000 ] ; boolean_T gnpdahoba0 [ 4800 ] ; boolean_T
kem5osnw54 [ 5656 ] ; boolean_T ljs3oveq2v [ 1120 ] ; boolean_T ijcurvyrn3 [
330 ] ; boolean_T kj51cc3j3c [ 19200 ] ; boolean_T keihx2tuyo_mbvzarwird ;
boolean_T cmhtlqhfow_cl54gopm0x ; boolean_T kcdmr5avpw_kkiq3xxxve ; boolean_T
dtfvk0dpxt_cxarnvbvui ; mvrhhqav5d kbyaroyowhq ; } ircitwx3zdm ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { bjqsgn0csy pzwjftbl2i ; boolean_T ckpn2rcven ; boolean_T
pqwhhdrmxf ; boolean_T h32dngvhjs ; boolean_T ohjsr0fdmb ; boolean_T
irila1varz ; boolean_T fsrvgfz5zp ; djfqfeyfr2 kbyaroyowhq ; } nllkaxiwhzw ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { j5242przmp kbyaroyowhq ; } h5liyesltnn ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { a10fskrtdw kbyaroyowhq ; } cspyln32yuv ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct naahbqvoow_ { uint8_T P_0 ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct k0iqyvu5xr_ { real32_T P_0 ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct gxtdcuoidg_ { real32_T P_0 ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct f1jw0s1fa5_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ;
real_T P_4 ; real_T P_5 ; real32_T P_6 [ 2 ] ; real32_T P_7 [ 2 ] ; real32_T
P_8 ; real32_T P_9 ; real32_T P_10 ; real32_T P_11 ; real32_T P_12 ; real32_T
P_13 ; real32_T P_14 ; real32_T P_15 ; real32_T P_16 [ 2 ] ; real32_T P_17 ;
real32_T P_18 ; real32_T P_19 ; real32_T P_20 [ 2 ] ; real32_T P_21 ;
real32_T P_22 ; real32_T P_23 ; real32_T P_24 ; real32_T P_25 ; real32_T P_26
; real32_T P_27 ; real32_T P_28 ; real32_T P_29 ; real32_T P_30 ; real32_T
P_31 ; real32_T P_32 ; real32_T P_33 ; real32_T P_34 ; real32_T P_35 ;
real32_T P_36 ; real32_T P_37 ; real32_T P_38 ; real32_T P_39 ; real32_T P_40
; real32_T P_41 ; real32_T P_42 ; real32_T P_43 ; real32_T P_44 ; real32_T
P_45 ; uint32_T P_46 ; uint32_T P_47 ; uint32_T P_48 ; uint32_T P_49 ;
uint32_T P_50 ; uint16_T P_51 ; uint16_T P_52 ; real_T P_53 ; real_T P_54 ;
real_T P_55 ; real_T P_56 ; real_T P_57 [ 4 ] ; real_T P_58 [ 4 ] ; real_T
P_59 ; real_T P_60 ; real_T P_61 ; real_T P_62 ; real_T P_63 ; real_T P_64 ;
real_T P_65 [ 4 ] ; real_T P_66 [ 2 ] ; real_T P_67 [ 2 ] ; real_T P_68 [ 4 ]
; real_T P_69 [ 2 ] ; real_T P_70 [ 2 ] ; real_T P_71 ; real_T P_72 [ 4 ] ;
real_T P_73 [ 2 ] ; real_T P_74 ; real_T P_75 ; real_T P_76 ; real_T P_77 ;
real_T P_78 [ 2 ] ; real_T P_79 [ 3 ] ; real_T P_80 [ 4 ] ; real_T P_81 [ 2 ]
; real_T P_82 [ 2 ] ; real_T P_83 [ 4 ] ; real_T P_84 [ 2 ] ; real_T P_85 [ 2
] ; real_T P_86 ; real_T P_87 [ 3 ] ; real_T P_88 [ 16 ] ; real_T P_89 [ 8 ]
; real_T P_90 [ 8 ] ; real32_T P_91 ; real32_T P_92 ; real32_T P_93 ;
real32_T P_94 [ 2 ] ; real32_T P_95 ; real32_T P_96 ; real32_T P_97 ;
real32_T P_98 ; real32_T P_99 ; real32_T P_100 ; real32_T P_101 ; real32_T
P_102 ; real32_T P_103 ; real32_T P_104 ; real32_T P_105 [ 4 ] ; real32_T
P_106 [ 4 ] ; real32_T P_107 ; real32_T P_108 ; real32_T P_109 ; real32_T
P_110 [ 6 ] ; real32_T P_111 [ 6 ] ; real32_T P_112 ; real32_T P_113 [ 6 ] ;
real32_T P_114 ; real32_T P_115 [ 2 ] ; real32_T P_116 [ 2 ] ; real32_T P_117
; real32_T P_118 [ 2 ] ; real32_T P_119 [ 2 ] ; real32_T P_120 ; real32_T
P_121 [ 6 ] ; real32_T P_122 [ 6 ] ; real32_T P_123 ; real32_T P_124 ;
real32_T P_125 [ 6 ] ; real32_T P_126 [ 6 ] ; real32_T P_127 ; real32_T P_128
; real32_T P_129 ; real32_T P_130 ; real32_T P_131 ; real32_T P_132 ;
real32_T P_133 ; real32_T P_134 ; real32_T P_135 ; real32_T P_136 ; real32_T
P_137 ; real32_T P_138 ; real32_T P_139 ; real32_T P_140 [ 2 ] ; real32_T
P_141 [ 2 ] ; real32_T P_142 ; real32_T P_143 ; real32_T P_144 ; real32_T
P_145 ; real32_T P_146 ; real32_T P_147 ; real32_T P_148 ; real32_T P_149 ;
real32_T P_150 ; real32_T P_151 ; real32_T P_152 ; real32_T P_153 ; real32_T
P_154 ; real32_T P_155 [ 4 ] ; real32_T P_156 ; real32_T P_157 ; real32_T
P_158 ; real32_T P_159 ; real32_T P_160 [ 16 ] ; real32_T P_161 ; real32_T
P_162 ; real32_T P_163 ; real32_T P_164 [ 4 ] ; real32_T P_165 [ 2 ] ;
real32_T P_166 [ 2 ] ; real32_T P_167 ; real32_T P_168 [ 4 ] ; real32_T P_169
[ 4 ] ; real32_T P_170 [ 2 ] ; real32_T P_171 [ 2 ] ; real32_T P_172 [ 4 ] ;
real32_T P_173 ; real32_T P_174 [ 2 ] ; real32_T P_175 [ 4 ] ; real32_T P_176
[ 2 ] ; real32_T P_177 [ 2 ] ; real32_T P_178 ; real32_T P_179 [ 4 ] ;
real32_T P_180 [ 4 ] ; real32_T P_181 [ 2 ] ; real32_T P_182 [ 2 ] ; real32_T
P_183 [ 4 ] ; real32_T P_184 ; real32_T P_185 [ 2 ] ; real32_T P_186 ;
real32_T P_187 ; real32_T P_188 [ 16 ] ; real32_T P_189 [ 8 ] ; real32_T
P_190 [ 8 ] ; real32_T P_191 [ 4 ] ; real32_T P_192 [ 16 ] ; real32_T P_193 [
16 ] ; real32_T P_194 [ 8 ] ; real32_T P_195 [ 8 ] ; real32_T P_196 [ 16 ] ;
real32_T P_197 [ 4 ] ; real32_T P_198 [ 4 ] ; uint32_T P_199 ; uint32_T P_200
; uint32_T P_201 ; uint32_T P_202 ; uint32_T P_203 ; uint32_T P_204 ;
uint32_T P_205 ; uint32_T P_206 ; uint32_T P_207 ; uint16_T P_208 ; uint16_T
P_209 ; uint16_T P_210 ; boolean_T P_211 ; boolean_T P_212 ; boolean_T P_213
; boolean_T P_214 ; boolean_T P_215 ; int8_T P_216 ; int8_T P_217 ; int8_T
P_218 ; int8_T P_219 ; int8_T P_220 ; int8_T P_221 ; int8_T P_222 ; int8_T
P_223 ; uint8_T P_224 ; uint8_T P_225 ; gxtdcuoidg afkrtspz4r ; k0iqyvu5xr
nyojmurzoq ; gxtdcuoidg ojiyh5md2fp ; k0iqyvu5xr h4zka13z2ik ; naahbqvoow
p443cxznfl ; naahbqvoow lj1nf2ykx4 ; naahbqvoow aiusdqgq1o ; naahbqvoow
actjduhucg ; naahbqvoow o0uasibb2vq ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct ileg2v2ld1r_ { uint16_T P_1 ; uint16_T P_2 ; uint16_T P_3 ; uint16_T
P_4 ; uint16_T P_5 ; uint16_T P_6 ; uint16_T P_7 ; boolean_T P_8 ; boolean_T
P_9 ; boolean_T P_10 ; boolean_T P_11 ; boolean_T P_12 ; f1jw0s1fa5
kbyaroyowhq ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct diqjpw4041 { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 29 ] ; int32_T * vardimsAddress [
29 ] ; RTWLoggingFcnPtr loggingPtrs [ 29 ] ; sysRanDType * systemRan [ 32 ] ;
int_T systemTid [ 32 ] ; } DataMapInfo ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { ipf5ube4r0 rtm ; } lhjbdsj2rjg ;
#endif
extern struct_8SSZ93PxvPkADZcA4gG8MD rtP_Sensors ; extern void dw0zngvhyq (
void ) ; extern void ha1ipjbq54 ( uint8_T * kpu3cubhfr ) ; extern void
gwlyno50ln ( void ) ; extern void m0l5se3ogg ( void ) ; extern void
k3yxem35zg ( void ) ; extern void bog0frvixl ( void ) ; extern void
pyvd4pdf3iTID0 ( void ) ; extern void pyvd4pdf3iTID1 ( void ) ; extern void
flightControlSystemTID0 ( const SensorsBus * js1rsjut1v , real32_T mfhybcoy2f
[ 4 ] , uint8_T * kpu3cubhfr ) ; extern void flightControlSystemTID1 ( void )
; extern void flightControlSystemTID2 ( void ) ; extern void o2f5l50guo (
void ) ; extern void f4qzdbbxmw ( SimStruct * _mdlRefSfcnS , int_T
mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_flightControlSystem_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray *
mr_flightControlSystem_GetDWork ( ) ; extern void
mr_flightControlSystem_SetDWork ( const mxArray * ssDW ) ; extern void
mr_flightControlSystem_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_flightControlSystem_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo * flightControlSystem_GetCAPIStaticMap (
void ) ;
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
extern void o0uasibb2v ( uint8_T * hayxpq4tko , naahbqvoow * localP ) ;
extern void cirlo3fock ( const real32_T ipafig5sze [ 4 ] , boolean_T
drhqyxxzwi ) ; extern void hp5lvfksnt ( iwfqjny14x * localB , k0iqyvu5xr *
localP ) ; extern void nvnzsqrnl5 ( iwfqjny14x * localB , js1e00ratj *
localDW , k0iqyvu5xr * localP ) ; extern void h4zka13z2i ( ipf5ube4r0 * const
accn4cnket , boolean_T bbmgen45qg , const real32_T g2xvwkc0hh [ 2 ] ,
real32_T bntudag1oe , const real32_T gm0ark2fnr [ 2 ] , const real32_T
jmwuleyy5u [ 2 ] , real32_T bprsksapwi , real32_T dii3vbsecy , iwfqjny14x *
localB , js1e00ratj * localDW , k0iqyvu5xr * localP ) ; extern void
pmcsvzvic1 ( eyxn5vdyjf * localB , gxtdcuoidg * localP ) ; extern void
d0f0r0vlpr ( eyxn5vdyjf * localB , nbhtslb2lj * localDW , gxtdcuoidg * localP
) ; extern void ojiyh5md2f ( ipf5ube4r0 * const accn4cnket , boolean_T
eas2uspssm , const real32_T a5mxbiadi1 [ 2 ] , const real32_T ka550i4e4w [ 2
] , real32_T bn2q0ulz43 , const real32_T feuv2hveqw [ 2 ] , eyxn5vdyjf *
localB , nbhtslb2lj * localDW , gxtdcuoidg * localP ) ; extern void
kbhhz5squ3 ( ipf5ube4r0 * const accn4cnket , djfqfeyfr2 * localDW ) ; extern
void isgzdh2vbt ( mvrhhqav5d * localB , djfqfeyfr2 * localDW , f1jw0s1fa5 *
localP ) ; extern void juik4zosxw ( mvrhhqav5d * localB , djfqfeyfr2 *
localDW , f1jw0s1fa5 * localP ) ; extern void fhi0bdp14b ( ipf5ube4r0 * const
accn4cnket , djfqfeyfr2 * localDW ) ; extern void fxr1m3qcll ( mvrhhqav5d *
localB , djfqfeyfr2 * localDW , f1jw0s1fa5 * localP ) ; extern void
k1wwquvgrg ( mvrhhqav5d * localB , djfqfeyfr2 * localDW , f1jw0s1fa5 * localP
) ; extern void kbyaroyowh ( ipf5ube4r0 * const accn4cnket , const SensorsBus
* ccq0efndwh , boolean_T cxumx4fbnl , boolean_T eoqrclowg0 , boolean_T
obl5z00tgr , boolean_T lrhhewnnq1 , boolean_T psz3v3ojow , mvrhhqav5d *
localB , djfqfeyfr2 * localDW , f1jw0s1fa5 * localP , a10fskrtdw * localZCE )
; extern void kbyaroyowhTID2 ( mvrhhqav5d * localB , f1jw0s1fa5 * localP ) ;
#endif
void mr_flightControlSystem_CreateInitRestoreData ( ) ; void
mr_flightControlSystem_CopyFromInitRestoreData ( ) ; void
mr_flightControlSystem_DestroyInitRestoreData ( ) ;
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
extern lhjbdsj2rjg lhjbdsj2rj ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
extern ircitwx3zdm ksm0js2nhsy ; extern nllkaxiwhzw dqykr4eggmg ; extern
cspyln32yuv f51itwtzkqf ;
#endif
#endif
