#include "flightControlSystem.h"
#include "rtwtypes.h"
#include "flightControlSystem_types.h"
#include "flightControlSystem_private.h"
#include "mwmathutil.h"
#include <string.h>
#include "flightControlSystem_capi.h"
#include "zero_crossing_types.h"
#include "rt_nonfinite.h"
#define akt5oizsy2 ((uint8_T)4U)
#define dtqxeddsii ((uint8_T)1U)
#define ev0zvaamcw ((uint8_T)6U)
#define fmt4luad11 ((uint8_T)8U)
#define g0o20edlje ((uint8_T)7U)
#define gbdlrrgjrd ((uint8_T)0U)
#define hdv5sckbu5 ((uint8_T)3U)
#define hnr2mbt51y ((uint8_T)5U)
#define kojq2h0k4n ((uint8_T)2U)
int_T nmtwkzsqud [ 3 ] ; static RegMdlInfo rtMdlInfo_flightControlSystem [
206 ] = { { "onncz34gi5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "flightControlSystem" } , { "gp0kj0xudu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "mltsdo134k" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "efv1sacs0w" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "e2rhhiq5o0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "il0gvduzw5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "dj4chi0fpl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "fd4smhe20f" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "eriud2kakb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "pso0j22e2b" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "gxtdcuoidg" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "nbhtslb2lj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "eyxn5vdyjf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "bjbzyfobdq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ez2ayzc3hh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "oriympq40o" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "p0bpllcarv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "imzi4mxevj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "lr3eio45tg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "c24c2cvkgf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "fuhgilgdah" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "kpm2x0bkp2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "lshhodd5xd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "k0iqyvu5xr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "js1e00ratj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "iwfqjny14x" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "eo3ooxv3vs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ofavoo2sxn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "l0qyiu3jwx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "p4khco4dem" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "mxzyuwn3et" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "docx2pklad" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "oe2scvyo4s" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "mfwokoqrtx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "dkb2hd3ubp" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "p0pjziark0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "f2mdqwnnoj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "emwmx0z5tu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "irebzfuhtt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "np3h5asccm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ozasqt5e1q" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "dfovrjzqnq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "gnqhcd4ovd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "bwbk10z1bf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "bpncosy2b0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "elm4fuabty" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "gbwv1igf4c" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "bl35gtaxuc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ntc2liem4n" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "naahbqvoow" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "cp43bsibsl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "az5vjtbhxd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "j5242przmp" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "cbdbu2rkqj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "nth04buvzi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "nvcphgllp1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ktk0bef5gd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "kdhr3z0pus" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ovx4tq0zoz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "neyb5pwmhi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "a10fskrtdw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "bqcj50cspg" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "f1jw0s1fa5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "djfqfeyfr2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "mvrhhqav5d" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "lhjbdsj2rjg" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"flightControlSystem" } , { "lhjbdsj2rj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "h5liyesltnn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "k0lgy5kzmig" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "d2rcqsbpxyc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "kekotmnbk54" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "no25hyfktuo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ht3wudfgy2u" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "iesycof4wox" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "eev4eat4b5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "cspyln32yuv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "dhuzh5wmni3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "b1hr2q0zjhm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "nllkaxiwhzw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "ircitwx3zdm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "h5liyesltn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "k0lgy5kzmi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "d2rcqsbpxy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "kekotmnbk5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "no25hyfktu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ht3wudfgy2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "iesycof4wo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "cspyln32yu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "dhuzh5wmni" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "b1hr2q0zjh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "nllkaxiwhz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ircitwx3zd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "b42rzqdx01" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "o2f5l50guo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "m0l5se3ogg" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "bog0frvixl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "o5hyd2bjrc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "pyvd4pdf3i" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "gwlyno50ln" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ha1ipjbq54" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "f4qzdbbxmw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "k3yxem35zg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "dw0zngvhyq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "iti2crtncj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "m54eghacre" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "fhi0bdp14b" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "fxr1m3qcll" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "fduvvzunqg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "k1wwquvgrg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "juik4zosxw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "isgzdh2vbt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "mdznwjtw30" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "iq3cx2u21l" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "kbhhz5squ3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "kbyaroyowh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , 0 , ( void * ) "Control System1" } , { "kqj4s00ffw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "mnh3sckwxl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "fkyb5hu2jp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "d0f0r0vlpr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "pmcsvzvic1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "pw3ltkrfe1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "fk1s0kjcej" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "owatmsx2xt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ojiyh5md2f" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , 0 , ( void * ) "Enabled Subsystem" } , { "jjbck2i2m2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "evr4cjh03o" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "hbdajzbnke" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "nvnzsqrnl5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "hp5lvfksnt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "cgmvecknin" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "err5ijuk0k" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ltreuoj2jx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "h4zka13z2i" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , 0 , ( void * ) "MeasurementUpdate" } , { "faq3aipw0z" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "iuk00wun3s" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "glzfv5urex" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "nnzshvuhmp" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "fh0zfsqhbf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ofqnjxno1e" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "cddigsteri" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ge5riqw20s" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "cirlo3fock" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , 0 , ( void * ) "SqrtUsedFcn" } , { "aw4pevzfwi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "aqzo3dou53" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "iok5izyaei" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "bf4fcm0ycr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "c55xxs1qve" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "a1uis3t15a" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "o0uasibb2v" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * ) "Geofencing error" } ,
{ "flightControlSystem" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL )
} , { "d0ohl2eoh0m" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "nmtwkzsqud" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "f51itwtzkqf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "dqykr4eggmg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ksm0js2nhsy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "diqjpw4041" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ipf5ube4r0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "parrot_ImageProcess1" , MDL_INFO_ID_DATA_TYPE ,
0 , - 1 , ( NULL ) } , { "struct_OSJpyIZcrpXqReVWwh9iuG" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_p3FXZIgqtjF2uqDpmYjb6C" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_OMRgDnJcZuQneKEj9vdTyD" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_q6UUpnZ4gTjFvULFx6Rxa" , MDL_INFO_ID_DATA_TYPE , 0 , - 1
, ( NULL ) } , { "struct_IZWOW0zYvpphl7qLgSfN7E" , MDL_INFO_ID_DATA_TYPE , 0
, - 1 , ( NULL ) } , { "struct_hxsmtt0xTZOLDNa2Rz7GAF" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_XRMsui9C07VjBvdq1msujB" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_eAf0NJvzCY9HYTXF7bLNgB" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "SensorsBus" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_acquisition_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_vbat_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_ultrasound_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_list_echo_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_echo_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_pressure_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_magn_mG_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_fifo_gyro_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_gyro_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_acc_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"extraSensorData_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"CommandBus" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_iVffV1TBXj5FV1arW9HEXD" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_upN04LJx4fKLPytCMWCPsB" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_8SSZ93PxvPkADZcA4gG8MD" , MDL_INFO_ID_DATA_TYPE , 0 , -
1 , ( NULL ) } , { "struct_eFnp8sKFNJLN84XLbLzaFF" , MDL_INFO_ID_DATA_TYPE ,
0 , - 1 , ( NULL ) } , { "struct_FIfaVnupBjYAxo1EdNiDlF" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_eF5OUT33sX0T9pzS8027m" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) }
, { "struct_LZS2kzYWg8ZnmAKAaEUHJD" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_hE1099BMemg5OfzqcWAA6G" , MDL_INFO_ID_DATA_TYPE , 0 , -
1 , ( NULL ) } , { "cuint64" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , ( void
* ) "uint64" } , { "uint64" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } ,
{ "cint64" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , ( void * ) "int64" } , {
"int64" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_flightControlSystem_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , (
void * ) "flightControlSystem" } , { "mr_flightControlSystem_GetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"bjqsgn0csy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "flightControlSystem.h" , MDL_INFO_MODEL_FILENAME
, 0 , - 1 , ( NULL ) } , { "flightControlSystem.c" , MDL_INFO_MODEL_FILENAME
, 0 , - 1 , ( void * ) "flightControlSystem" } } ; ileg2v2ld1r b1hr2q0zjh = {
150U , 150U , 150U , 1100U , 300U , 150U , 150U , false , false , false ,
false , false , { 50.0 , - 1.0 , 0.8 , 0.4 , 0.1 , 0.0 , { 0.00012F ,
9.72E-5F } , { 0.006F , 0.00486F } , 0.1F , 0.0F , 0.0F , 0.0F , 0.0F , -
0.5F , - 0.34906584F , - 0.02F , { 70.0F , 70.0F } , 0.7F , 0.2F , 4.0F , {
0.003F , 0.00243F } , 0.5F , 0.34906584F , 0.02F , 10.0F , 10.0F , 6.0F ,
6.0F , 0.01F , 0.01F , 6.867F , 12.753F , - 0.4F , 0.0F , 0.0F , 80.0F ,
80.0F , 0.6F , 0.5F , 0.6F , 0.5F , 7.0F , 7.0F , 5.0F , 5.0F , - 0.4F ,
4294967295U , 4294967295U , 4294967295U , 1U , 800U , 65535U , 100U , 0.0 ,
0.0 , 0.0 , 0.0 , { 3.7568380197512489E-6 , 1.1270514059253748E-5 ,
1.1270514059253748E-5 , 3.7568380197512489E-6 } , { 1.0 , -
2.9371707284498907 , 2.8762997234793319 , - 0.939098940325283 } , 0.0 , 0.0 ,
1.0 , 0.0 , 0.5 , 600.0 , { 1.0 , 0.0 , 0.005 , 1.0 } , { 0.0 , 0.005 } , {
1.0 , 0.0 } , { 0.0026241420641872266 , 0.0069776736071494585 ,
0.0069776736071494594 , 0.037607692935053325 } , { 0.026590304322229696 ,
0.069776736071494483 } , { 0.026241420641872265 , 0.0697767360714946 } , 0.0
, { 0.002694858992582106 , 0.0071657120718247548 , 0.0071657120718247548 ,
0.038107692935053367 } , { 0.0 , 1.0 } , 0.0 , 0.0 , 0.0005 , 0.1 , { - 0.046
, 0.0 } , { 0.0 , 0.0 , 9.81 } , { 1097.3834951572255 , - 30.388465402591859
, - 30.388465402591855 , 7.2223686232128914 } , { 0.0011870943291829544 , -
3.2868164179443428E-5 } , { 0.0011869299883620552 , - 3.2868164179443354E-5 }
, { 1097.3834951572255 , - 30.388465402591859 , - 30.388465402591855 ,
7.2223686232128914 } , { 0.0011870943291829544 , - 3.2868164179443428E-5 } ,
{ 0.0011869299883620552 , - 3.2868164179443354E-5 } , 0.0 , { 0.0 , 0.0 , -
9.81 } , { 1.3281632400274306 , 0.0 , - 0.43210920795542979 , 0.0 , 0.0 ,
1.3281632400274306 , 0.0 , - 0.43210920795542979 , - 0.43210920795542984 ,
0.0 , 6.14734986237778 , 0.0 , 0.0 , - 0.43210920795542984 , 0.0 ,
6.14734986237778 } , { 0.066516189303360354 , 5.23402355848703E-19 , -
0.021605460397771867 , - 4.8628553107267881E-19 , 4.3622439914025307E-18 ,
0.066516189303360354 , - 4.5659075919712689E-17 , - 0.021605460397771864 } ,
{ 0.066408162001371535 , 0.0 , - 0.021605460397771489 , 0.0 , 0.0 ,
0.066408162001371535 , 0.0 , - 0.021605460397771489 } , 0.45F , 0.8F , 0.5F ,
{ - 1.0F , 1.0F } , 0.00228F , 0.0F , 0.0F , 0.0F , - 1.0F , 1.15F , 0.005F ,
0.0F , - 1.0F , 0.0832137167F , { 3.75683794E-6F , 1.12705138E-5F ,
1.12705138E-5F , 3.75683794E-6F } , { 1.0F , - 2.93717074F , 2.87629962F , -
0.939098954F } , 0.0F , 0.005F , 0.0F , { 0.0F , 0.0F , 9.81F , 0.0F , 0.0F ,
0.0F } , { 0.994075298F , 0.996184587F , 1.00549F , 1.00139189F ,
0.993601203F , 1.00003F } , 0.0F , { 0.0264077242F , 0.140531361F ,
0.33306092F , 0.33306092F , 0.140531361F , 0.0264077242F } , 0.101936802F , {
1.0F , 1.0F } , { 2.5915494F , - 0.591549456F } , 0.0F , { 1.0F , 1.0F } , {
2.5915494F , - 0.591549456F } , 0.0F , { 0.282124132F , 1.27253926F ,
2.42084408F , 2.42084408F , 1.27253926F , 0.282124132F } , { 1.0F ,
2.22871494F , 2.52446198F , 1.57725322F , 0.54102242F , 0.0795623958F } ,
0.0F , - 1.0F , { 0.282124132F , 1.27253926F , 2.42084408F , 2.42084408F ,
1.27253926F , 0.282124132F } , { 1.0F , 2.22871494F , 2.52446198F ,
1.57725322F , 0.54102242F , 0.0795623958F } , 0.0F , 200.0F , 0.0F , 0.0F ,
0.005F , 0.0F , 2.0F , - 2.0F , 0.24F , - 0.61803F , 1.20204329F , -
1.20204329F , 0.005F , { 1.0F , 1.0F } , { 8.95774746F , - 6.95774698F } ,
0.0F , 0.005F , 0.005F , 0.52359879F , - 0.52359879F , 0.004F , 0.005F , 0.0F
, 0.0012F , 0.002F , - 1530.72681F , 500.0F , 10.0F , { 1.0F , - 1.0F , 1.0F
, - 1.0F } , 1.0F , 1.0F , 0.0F , 0.0F , { 0.25F , 0.25F , 0.25F , 0.25F ,
103.573624F , - 103.573624F , 103.573624F , - 103.573624F , - 5.66592F , -
5.66592F , 5.66592F , 5.66592F , - 5.66592F , 5.66592F , 5.66592F , -
5.66592F } , 0.0F , 0.0F , 0.0F , { 1.0F , 0.0F , - 0.005F , 1.0F } , {
0.005F , 0.0F } , { 1.0F , 0.0F } , 0.0F , { 1098.6875F , - 30.4245777F , -
30.4245777F , 7.22336864F } , { 1.0F , 0.0F , 0.0F , 1.0F } , { 0.0F , 0.0F }
, { 0.0F , 0.0F } , { 1.0F , 0.0F , 0.0F , 0.001F } , 924556.188F , { 0.0F ,
0.0F } , { 1.0F , 0.0F , - 0.005F , 1.0F } , { 0.005F , 0.0F } , { 1.0F ,
0.0F } , 0.0F , { 1098.6875F , - 30.4245777F , - 30.4245777F , 7.22336864F }
, { 1.0F , 0.0F , 0.0F , 1.0F } , { 0.0F , 0.0F } , { 0.0F , 0.0F } , { 1.0F
, 0.0F , 0.0F , 0.001F } , 924556.188F , { 0.0F , 0.0F } , 0.0F , 2.0F , {
1.0F , 0.0F , 0.0F , 0.0F , 0.0F , 1.0F , 0.0F , 0.0F , - 0.005F , 0.0F ,
1.0F , 0.0F , 0.0F , - 0.005F , 0.0F , 1.0F } , { 0.005F , 0.0F , 0.0F , 0.0F
, 0.0F , 0.005F , 0.0F , 0.0F } , { 1.0F , 0.0F , 0.0F , 1.0F , 0.0F , 0.0F ,
0.0F , 0.0F } , { 0.0F , 0.0F , 0.0F , 0.0F } , { 1.42263806F , 0.0F , -
0.462845951F , 0.0F , 0.0F , 1.42263806F , 0.0F , - 0.462845951F , -
0.462845951F , 0.0F , 6.15735F , 0.0F , 0.0F , - 0.462845951F , 0.0F ,
6.15735F } , { 1.0F , 0.0F , 0.0F , 0.0F , 0.0F , 1.0F , 0.0F , 0.0F , 0.0F ,
0.0F , 1.0F , 0.0F , 0.0F , 0.0F , 0.0F , 1.0F } , { 0.0F , 0.0F , 0.0F ,
0.0F , 0.0F , 0.0F , 0.0F , 0.0F } , { 0.0F , 0.0F , 0.0F , 0.0F , 0.0F ,
0.0F , 0.0F , 0.0F } , { 0.09F , 0.0F , 0.0F , 0.0F , 0.0F , 0.09F , 0.0F ,
0.0F , 0.0F , 0.0F , 0.01F , 0.0F , 0.0F , 0.0F , 0.0F , 0.01F } , { 20.0F ,
0.0F , 0.0F , 20.0F } , { 0.0F , 0.0F , 0.0F , 0.0F } , 0U , 0U , 0U , 1U ,
0U , 1U , 0U , 1U , 0U , 0U , 1U , 0U , false , false , false , false , true
, 1 , - 1 , 1 , - 1 , 1 , - 1 , 1 , - 1 , 1U , 0U , { 0.0F } , { 0.0F } , {
0.0F } , { 0.0F } , { 0U } , { 0U } , { 0U } , { 99U } , { 1U } } } ;
lhjbdsj2rjg lhjbdsj2rj ; ircitwx3zdm ksm0js2nhsy ; nllkaxiwhzw dqykr4eggmg ;
cspyln32yuv f51itwtzkqf ; void o0uasibb2v ( uint8_T * hayxpq4tko , naahbqvoow
* localP ) { * hayxpq4tko = localP -> P_0 ; } void cirlo3fock ( const
real32_T ipafig5sze [ 4 ] , boolean_T drhqyxxzwi ) { real32_T e1pao12ugf [ 4
] ; int32_T i ; real32_T e1pao12ugf_tmp ; if ( drhqyxxzwi ) { for ( i = 0 ; i
< 2 ; i ++ ) { e1pao12ugf_tmp = ipafig5sze [ i + 2 ] ; e1pao12ugf [ i ] =
e1pao12ugf_tmp * ipafig5sze [ 2 ] + ipafig5sze [ i ] * ipafig5sze [ 0 ] ;
e1pao12ugf [ i + 2 ] = e1pao12ugf_tmp * ipafig5sze [ 3 ] + ipafig5sze [ i ] *
ipafig5sze [ 1 ] ; } } else { for ( i = 0 ; i < 2 ; i ++ ) { e1pao12ugf [ i ]
= ipafig5sze [ i ] ; e1pao12ugf [ i + 2 ] = ipafig5sze [ i + 2 ] ; } } } void
hp5lvfksnt ( iwfqjny14x * localB , k0iqyvu5xr * localP ) { localB ->
cy3fygubmc [ 0 ] = localP -> P_0 ; localB -> cy3fygubmc [ 1 ] = localP -> P_0
; } void nvnzsqrnl5 ( iwfqjny14x * localB , js1e00ratj * localDW , k0iqyvu5xr
* localP ) { localB -> cy3fygubmc [ 0 ] = localP -> P_0 ; localB ->
cy3fygubmc [ 1 ] = localP -> P_0 ; localDW -> olq2d0vjz1 = false ; } void
h4zka13z2i ( ipf5ube4r0 * const accn4cnket , boolean_T bbmgen45qg , const
real32_T g2xvwkc0hh [ 2 ] , real32_T bntudag1oe , const real32_T gm0ark2fnr [
2 ] , const real32_T jmwuleyy5u [ 2 ] , real32_T bprsksapwi , real32_T
dii3vbsecy , iwfqjny14x * localB , js1e00ratj * localDW , k0iqyvu5xr * localP
) { real32_T avlwhcit0z ; if ( bbmgen45qg ) { if ( ! localDW -> olq2d0vjz1 )
{ if ( rtmGetTaskTime ( accn4cnket , 0 ) != rtmGetTStart ( accn4cnket ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ; }
localDW -> olq2d0vjz1 = true ; } avlwhcit0z = bntudag1oe - ( ( gm0ark2fnr [ 0
] * jmwuleyy5u [ 0 ] + gm0ark2fnr [ 1 ] * jmwuleyy5u [ 1 ] ) + bprsksapwi *
dii3vbsecy ) ; localB -> cy3fygubmc [ 0 ] = g2xvwkc0hh [ 0 ] * avlwhcit0z ;
localB -> cy3fygubmc [ 1 ] = g2xvwkc0hh [ 1 ] * avlwhcit0z ; srUpdateBC (
localDW -> pekexl3321 ) ; } else if ( localDW -> olq2d0vjz1 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ;
nvnzsqrnl5 ( localB , localDW , localP ) ; } } void pmcsvzvic1 ( eyxn5vdyjf *
localB , gxtdcuoidg * localP ) { localB -> fm0zbm30ze [ 0 ] = localP -> P_0 ;
localB -> fm0zbm30ze [ 1 ] = localP -> P_0 ; } void d0f0r0vlpr ( eyxn5vdyjf *
localB , nbhtslb2lj * localDW , gxtdcuoidg * localP ) { localB -> fm0zbm30ze
[ 0 ] = localP -> P_0 ; localB -> fm0zbm30ze [ 1 ] = localP -> P_0 ; localDW
-> c4xm4qcxri = false ; } void ojiyh5md2f ( ipf5ube4r0 * const accn4cnket ,
boolean_T eas2uspssm , const real32_T a5mxbiadi1 [ 2 ] , const real32_T
ka550i4e4w [ 2 ] , real32_T bn2q0ulz43 , const real32_T feuv2hveqw [ 2 ] ,
eyxn5vdyjf * localB , nbhtslb2lj * localDW , gxtdcuoidg * localP ) { real32_T
gxgz4ik235 ; if ( eas2uspssm ) { if ( ! localDW -> c4xm4qcxri ) { if (
rtmGetTaskTime ( accn4cnket , 0 ) != rtmGetTStart ( accn4cnket ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ; }
localDW -> c4xm4qcxri = true ; } gxgz4ik235 = bn2q0ulz43 - ( ka550i4e4w [ 0 ]
* feuv2hveqw [ 0 ] + ka550i4e4w [ 1 ] * feuv2hveqw [ 1 ] ) ; localB ->
fm0zbm30ze [ 0 ] = a5mxbiadi1 [ 0 ] * gxgz4ik235 ; localB -> fm0zbm30ze [ 1 ]
= a5mxbiadi1 [ 1 ] * gxgz4ik235 ; srUpdateBC ( localDW -> bm4eggndai ) ; }
else if ( localDW -> c4xm4qcxri ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ;
d0f0r0vlpr ( localB , localDW , localP ) ; } } void kbhhz5squ3 ( ipf5ube4r0 *
const accn4cnket , djfqfeyfr2 * localDW ) { if ( ( ssGetSimMode ( accn4cnket
-> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( accn4cnket -> _mdlRefSfcnS
) -> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if
( slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( accn4cnket ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( accn4cnket
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"State Estimator:1" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "State Estimator:1" ) ; sdiLabelU
blockPath = sdiGetLabelFromChars (
"flightControlSystem/Control System1/To Workspace" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiDims forEachMdlRefDims ; int_T forEachMdlRefDimsArray
[ 32 ] ; sdiLabelU sigName = sdiGetLabelFromChars ( "State Estimator:1" ) ;
sdiAsyncQueueHandle hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_SINGLE ) ; {
sdiComplexity sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [ 1 ] = { 12 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( accn4cnket
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , accn4cnket ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; { sdiLabelU varName = sdiGetLabelFromChars (
"estimatedStates" ) ; sdiRegisterWksVariable ( hForEachParent , varName ,
"structwithtime" ) ; sdiFreeLabel ( varName ) ; }
sdiAsyncRepoSetBlockPathDomain ( hForEachParent ) ;
isStreamoutAlreadyRegistered = true ; } localDW -> puq03cpvbg . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , accn4cnket -> DataMapInfo .
mmi . InstanceMap . fullPath , "4a68365d-d023-4b99-8f13-ba384ff2f622" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> puq03cpvbg . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> puq03cpvbg . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> puq03cpvbg . AQHandles , "0.005" ,
0.005 , rtmGetTFinal ( accn4cnket ) ) ; sdiSetSignalRefRate ( localDW ->
puq03cpvbg . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW -> puq03cpvbg .
AQHandles , rtmGetTaskTime ( accn4cnket , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> puq03cpvbg . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> puq03cpvbg . AQHandles ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain (
localDW -> puq03cpvbg . AQHandles ) ; if ( forEachMdlRefDims . nDims > 0 ) {
sdiAttachForEachIterationToParent ( hForEachParent , localDW -> puq03cpvbg .
AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) { sdiFreeName
( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ; sdiFreeLabel (
loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ;
sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ; sdiFreeLabel (
subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { { sdiLabelU varName =
sdiGetLabelFromChars ( "estimatedStates" ) ; sdiRegisterWksVariable ( localDW
-> puq03cpvbg . AQHandles , varName , "structwithtime" ) ; sdiFreeLabel (
varName ) ; } } } } } } void isgzdh2vbt ( mvrhhqav5d * localB , djfqfeyfr2 *
localDW , f1jw0s1fa5 * localP ) { int32_T i ; localDW -> n3c1i00bxy [ 0 ] =
localP -> P_102 ; localDW -> n3c1i00bxy [ 1 ] = localP -> P_102 ; localDW ->
ioroua40sf = 2 ; localDW -> ggktuboh3w = localP -> P_55 ; localDW ->
dfsxdbhpqk = true ; localDW -> nbfzg3mofs [ 0 ] = localP -> P_107 ; localDW
-> bgsd4hwxvl [ 0 ] = localP -> P_59 ; localDW -> nbfzg3mofs [ 1 ] = localP
-> P_107 ; localDW -> bgsd4hwxvl [ 1 ] = localP -> P_59 ; localDW ->
nbfzg3mofs [ 2 ] = localP -> P_107 ; localDW -> bgsd4hwxvl [ 2 ] = localP ->
P_59 ; localDW -> dvmcgiwvlg = localP -> P_109 ; localDW -> nihxmtnwn0 = 0 ;
for ( i = 0 ; i < 15 ; i ++ ) { localDW -> m3yo5bm0br [ i ] = localP -> P_112
; } localDW -> bbdsjay1cb = true ; localDW -> cyeg151nql = true ; localDW ->
h0kguh0g04 = localP -> P_199 ; localDW -> bkpwlcggki = localP -> P_117 ;
localDW -> mlypgyrlj0 = localP -> P_120 ; for ( i = 0 ; i < 5 ; i ++ ) {
localDW -> gawfgxhxnt [ i ] = localP -> P_123 ; } localDW -> mcs0s1fmhj =
localP -> P_200 ; localDW -> dtlx1df0zm = true ; for ( i = 0 ; i < 10 ; i ++
) { localDW -> hwg5o53ida [ i ] = localP -> P_127 ; } localDW -> jbinyylhej =
localP -> P_208 ; localDW -> ic2lljdnru = localP -> P_132 ; localDW ->
ayxp4yzgmp = 2 ; localDW -> opm4ouvgho [ 0 ] = localP -> P_9 ; localDW ->
lbqu3u2lvu [ 0 ] = localP -> P_129 ; localDW -> mar1fo4k2g [ 0 ] = localP ->
P_130 ; localDW -> i2waz4wcdh [ 0 ] = localP -> P_11 ; localDW -> jomzm1efxy
[ 0 ] = localP -> P_142 ; localDW -> j1ya5i3lju [ 0 ] = localP -> P_12 ;
localDW -> fmgblzk1yx [ 0 ] = localP -> P_10 ; localDW -> opm4ouvgho [ 1 ] =
localP -> P_9 ; localDW -> lbqu3u2lvu [ 1 ] = localP -> P_129 ; localDW ->
mar1fo4k2g [ 1 ] = localP -> P_130 ; localDW -> i2waz4wcdh [ 1 ] = localP ->
P_11 ; localDW -> jomzm1efxy [ 1 ] = localP -> P_142 ; localDW -> j1ya5i3lju
[ 1 ] = localP -> P_12 ; localDW -> fmgblzk1yx [ 1 ] = localP -> P_10 ;
localDW -> elivplttop = localP -> P_149 ; localDW -> ltea43kayw = localP ->
P_201 ; localDW -> fql4utazuo = localP -> P_60 ; localB -> n3bu3yuc32 =
localP -> P_225 ; localDW -> brlttosllt = 0U ; localDW -> kewexujuqg = 0U ;
localDW -> gmlzgvyimo = gbdlrrgjrd ; localDW -> dfwvove5te = 0.0 ; localB ->
l3w0kjjahz = 0.0F ; localB -> amvrcq1fuc = 0.0 ; localB -> j0ff3qp1rt = 0.0F
; localB -> hapfqnwg0b = 0.0F ; localB -> azpx0v1un2 [ 0 ] = localP -> P_53 ;
localB -> h1e4elx2mq [ 0 ] = localP -> P_54 ; localB -> azpx0v1un2 [ 1 ] =
localP -> P_53 ; localB -> h1e4elx2mq [ 1 ] = localP -> P_54 ; hp5lvfksnt ( &
localB -> h4zka13z2ik , & localP -> h4zka13z2ik ) ; pmcsvzvic1 ( & localB ->
ojiyh5md2fp , & localP -> ojiyh5md2fp ) ; hp5lvfksnt ( & localB -> nyojmurzoq
, & localP -> nyojmurzoq ) ; pmcsvzvic1 ( & localB -> afkrtspz4r , & localP
-> afkrtspz4r ) ; localB -> dzof3xbsea = localP -> P_96 ; localB ->
j4i1uknzzt [ 0 ] = localP -> P_97 ; localB -> h33xcbk4xk [ 0 ] = localP ->
P_98 ; localB -> j4i1uknzzt [ 1 ] = localP -> P_97 ; localB -> h33xcbk4xk [ 1
] = localP -> P_98 ; localB -> j4i1uknzzt [ 2 ] = localP -> P_97 ; localB ->
h33xcbk4xk [ 2 ] = localP -> P_98 ; localB -> j4i1uknzzt [ 3 ] = localP ->
P_97 ; localB -> h33xcbk4xk [ 3 ] = localP -> P_98 ; } void juik4zosxw (
mvrhhqav5d * localB , djfqfeyfr2 * localDW , f1jw0s1fa5 * localP ) { int32_T
i ; localDW -> n3c1i00bxy [ 0 ] = localP -> P_102 ; localDW -> n3c1i00bxy [ 1
] = localP -> P_102 ; localDW -> ioroua40sf = 2 ; localDW -> ggktuboh3w =
localP -> P_55 ; localDW -> dfsxdbhpqk = true ; localDW -> nbfzg3mofs [ 0 ] =
localP -> P_107 ; localDW -> bgsd4hwxvl [ 0 ] = localP -> P_59 ; localDW ->
nbfzg3mofs [ 1 ] = localP -> P_107 ; localDW -> bgsd4hwxvl [ 1 ] = localP ->
P_59 ; localDW -> nbfzg3mofs [ 2 ] = localP -> P_107 ; localDW -> bgsd4hwxvl
[ 2 ] = localP -> P_59 ; localDW -> dvmcgiwvlg = localP -> P_109 ; localDW ->
nihxmtnwn0 = 0 ; for ( i = 0 ; i < 15 ; i ++ ) { localDW -> m3yo5bm0br [ i ]
= localP -> P_112 ; } localDW -> bbdsjay1cb = true ; localDW -> cyeg151nql =
true ; localDW -> h0kguh0g04 = localP -> P_199 ; localDW -> bkpwlcggki =
localP -> P_117 ; localDW -> mlypgyrlj0 = localP -> P_120 ; for ( i = 0 ; i <
5 ; i ++ ) { localDW -> gawfgxhxnt [ i ] = localP -> P_123 ; } localDW ->
mcs0s1fmhj = localP -> P_200 ; localDW -> dtlx1df0zm = true ; for ( i = 0 ; i
< 10 ; i ++ ) { localDW -> hwg5o53ida [ i ] = localP -> P_127 ; } localDW ->
jbinyylhej = localP -> P_208 ; localDW -> ic2lljdnru = localP -> P_132 ;
localDW -> ayxp4yzgmp = 2 ; localDW -> opm4ouvgho [ 0 ] = localP -> P_9 ;
localDW -> lbqu3u2lvu [ 0 ] = localP -> P_129 ; localDW -> mar1fo4k2g [ 0 ] =
localP -> P_130 ; localDW -> i2waz4wcdh [ 0 ] = localP -> P_11 ; localDW ->
jomzm1efxy [ 0 ] = localP -> P_142 ; localDW -> j1ya5i3lju [ 0 ] = localP ->
P_12 ; localDW -> fmgblzk1yx [ 0 ] = localP -> P_10 ; localDW -> opm4ouvgho [
1 ] = localP -> P_9 ; localDW -> lbqu3u2lvu [ 1 ] = localP -> P_129 ; localDW
-> mar1fo4k2g [ 1 ] = localP -> P_130 ; localDW -> i2waz4wcdh [ 1 ] = localP
-> P_11 ; localDW -> jomzm1efxy [ 1 ] = localP -> P_142 ; localDW ->
j1ya5i3lju [ 1 ] = localP -> P_12 ; localDW -> fmgblzk1yx [ 1 ] = localP ->
P_10 ; localDW -> elivplttop = localP -> P_149 ; localDW -> ltea43kayw =
localP -> P_201 ; localDW -> fql4utazuo = localP -> P_60 ; localDW ->
brlttosllt = 0U ; localDW -> kewexujuqg = 0U ; localDW -> gmlzgvyimo =
gbdlrrgjrd ; localDW -> dfwvove5te = 0.0 ; localB -> l3w0kjjahz = 0.0F ;
localB -> amvrcq1fuc = 0.0 ; localB -> j0ff3qp1rt = 0.0F ; localB ->
hapfqnwg0b = 0.0F ; } void fxr1m3qcll ( mvrhhqav5d * localB , djfqfeyfr2 *
localDW , f1jw0s1fa5 * localP ) { if ( localDW -> ozswztjljh ) { localB ->
azpx0v1un2 [ 0 ] = localP -> P_53 ; localB -> azpx0v1un2 [ 1 ] = localP ->
P_53 ; localDW -> ozswztjljh = false ; } if ( localDW -> l0khpg0k3s ) {
localB -> h1e4elx2mq [ 0 ] = localP -> P_54 ; localB -> h1e4elx2mq [ 1 ] =
localP -> P_54 ; localDW -> l0khpg0k3s = false ; } if ( localDW -> be4ujsoocn
) { localB -> j4i1uknzzt [ 0 ] = localP -> P_97 ; localB -> j4i1uknzzt [ 1 ]
= localP -> P_97 ; localB -> j4i1uknzzt [ 2 ] = localP -> P_97 ; localB ->
j4i1uknzzt [ 3 ] = localP -> P_97 ; localDW -> be4ujsoocn = false ; } if (
localDW -> lmmiwr5usb ) { localB -> h33xcbk4xk [ 0 ] = localP -> P_98 ;
localB -> h33xcbk4xk [ 1 ] = localP -> P_98 ; localB -> h33xcbk4xk [ 2 ] =
localP -> P_98 ; localB -> h33xcbk4xk [ 3 ] = localP -> P_98 ; localDW ->
lmmiwr5usb = false ; } if ( localDW -> ojiyh5md2fp . c4xm4qcxri ) {
d0f0r0vlpr ( & localB -> ojiyh5md2fp , & localDW -> ojiyh5md2fp , & localP ->
ojiyh5md2fp ) ; } if ( localDW -> afkrtspz4r . c4xm4qcxri ) { d0f0r0vlpr ( &
localB -> afkrtspz4r , & localDW -> afkrtspz4r , & localP -> afkrtspz4r ) ; }
if ( localDW -> h4zka13z2ik . olq2d0vjz1 ) { nvnzsqrnl5 ( & localB ->
h4zka13z2ik , & localDW -> h4zka13z2ik , & localP -> h4zka13z2ik ) ; } if (
localDW -> nyojmurzoq . olq2d0vjz1 ) { nvnzsqrnl5 ( & localB -> nyojmurzoq ,
& localDW -> nyojmurzoq , & localP -> nyojmurzoq ) ; } } void kbyaroyowh (
ipf5ube4r0 * const accn4cnket , const SensorsBus * ccq0efndwh , boolean_T
cxumx4fbnl , boolean_T eoqrclowg0 , boolean_T obl5z00tgr , boolean_T
lrhhewnnq1 , boolean_T psz3v3ojow , mvrhhqav5d * localB , djfqfeyfr2 *
localDW , f1jw0s1fa5 * localP , a10fskrtdw * localZCE ) { int_T tid = 0 ;
uint32_T kmfks4hb13 ; uint32_T dwky5emhr0 ; uint32_T gvwdejllmw ; uint32_T
euaesrb2hm ; real32_T apgfnvnkio ; uint16_T e0jzucgg5v ; uint16_T nwb5cwi32s
; boolean_T cpah2vfwos ; boolean_T myyno4nxcb ; boolean_T mnhrimwa2d ;
boolean_T poclb2vmnu ; boolean_T jigbguekqc ; boolean_T jfzyx4ctma ;
boolean_T mhypci5zya ; boolean_T oljazbhpwg ; int8_T tmp ; int8_T tmp_p ;
boolean_T bhbb4hzefz ; boolean_T h2thm5amik ; boolean_T mnvyotict5 ;
boolean_T pcr4qjwuet ; boolean_T tmp_e ; if ( localP -> P_215 && ( localDW ->
ioroua40sf <= 0 ) ) { localDW -> n3c1i00bxy [ 0 ] = localP -> P_102 ; localDW
-> n3c1i00bxy [ 1 ] = localP -> P_102 ; } localB -> amlu45g12u_idx_0 =
localDW -> n3c1i00bxy [ 0 ] ; localB -> amlu45g12u_idx_1 = localDW ->
n3c1i00bxy [ 1 ] ; localB -> fexzbbxkzn = ( real_T ) localP -> P_103 *
ccq0efndwh -> HALSensors . HAL_ultrasound_SI . altitude ; localB ->
lqa5qhltpn_guugdwf2m3 = localB -> fexzbbxkzn ; localB -> m45vzwjtw0 = (
localDW -> ggktuboh3w > localP -> P_5 ) ; localDW -> dfsxdbhpqk = ( localB ->
m45vzwjtw0 || localDW -> dfsxdbhpqk ) ; if ( localDW -> dfsxdbhpqk ) {
localDW -> dudxvyaali [ 0 ] = localB -> jrif0eh3si [ 0 ] ; localDW ->
dudxvyaali [ 1 ] = localB -> jrif0eh3si [ 1 ] ; } localB -> lgeyrynojq_idx_0
= localDW -> dudxvyaali [ 0 ] ; localB -> lgeyrynojq_idx_1 = localDW ->
dudxvyaali [ 1 ] ; localDW -> j33klwenqs = ( ( ( ( ccq0efndwh -> HALSensors .
HAL_pressure_SI . pressure - ccq0efndwh -> SensorCalibration [ 6 ] ) * localP
-> P_104 - localDW -> nbfzg3mofs [ 0 ] * localP -> P_106 [ 1 ] ) - localDW ->
nbfzg3mofs [ 1 ] * localP -> P_106 [ 2 ] ) - localDW -> nbfzg3mofs [ 2 ] *
localP -> P_106 [ 3 ] ) / localP -> P_106 [ 0 ] ; localB ->
hop4dus5mt_jz50ptvnrg = ( ( localP -> P_105 [ 0 ] * localDW -> j33klwenqs +
localDW -> nbfzg3mofs [ 0 ] * localP -> P_105 [ 1 ] ) + localDW -> nbfzg3mofs
[ 1 ] * localP -> P_105 [ 2 ] ) + localDW -> nbfzg3mofs [ 2 ] * localP ->
P_105 [ 3 ] ; localDW -> hydw3zxfzv = ( ( ( localB -> fexzbbxkzn - localDW ->
bgsd4hwxvl [ 0 ] * localP -> P_58 [ 1 ] ) - localDW -> bgsd4hwxvl [ 1 ] *
localP -> P_58 [ 2 ] ) - localDW -> bgsd4hwxvl [ 2 ] * localP -> P_58 [ 3 ] )
/ localP -> P_58 [ 0 ] ; if ( localB -> fexzbbxkzn > - rtP_Sensors .
altSensorMin ) { localB -> nypkbmfphb_ldqodwenvz = - rtP_Sensors .
altSensorMin ; } else if ( localB -> fexzbbxkzn < localP -> P_56 ) { localB
-> nypkbmfphb_ldqodwenvz = localP -> P_56 ; } else { localB ->
nypkbmfphb_ldqodwenvz = localB -> fexzbbxkzn ; } localB -> er5v410dep = ( (
muDoubleScalarAbs ( localDW -> ggktuboh3w - localB -> nypkbmfphb_ldqodwenvz )
<= localP -> P_4 ) && ( localB -> fexzbbxkzn < - rtP_Sensors . altSensorMin )
&& ( ( ! ( muDoubleScalarAbs ( localB -> hop4dus5mt_jz50ptvnrg - localDW ->
ggktuboh3w ) >= localP -> P_2 ) ) || ( ! ( muDoubleScalarAbs ( ( ( ( localP
-> P_57 [ 0 ] * localDW -> hydw3zxfzv + localDW -> bgsd4hwxvl [ 0 ] * localP
-> P_57 [ 1 ] ) + localDW -> bgsd4hwxvl [ 1 ] * localP -> P_57 [ 2 ] ) +
localDW -> bgsd4hwxvl [ 2 ] * localP -> P_57 [ 3 ] ) - localDW -> ggktuboh3w
) >= localP -> P_3 ) ) ) ) ; bhbb4hzefz = localB -> er5v410dep ; cpah2vfwos =
localB -> er5v410dep ; if ( cpah2vfwos ) { if ( ! localDW -> l0khpg0k3s ) {
if ( rtmGetTaskTime ( accn4cnket , 0 ) != rtmGetTStart ( accn4cnket ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ; }
localDW -> l0khpg0k3s = true ; } localB -> nypkbmfphb_ldqodwenvz = localB ->
lqa5qhltpn_guugdwf2m3 - ( localP -> P_67 [ 0 ] * localB -> lgeyrynojq_idx_0 +
localP -> P_67 [ 1 ] * localB -> lgeyrynojq_idx_1 ) ; localB -> h1e4elx2mq [
0 ] = localB -> cibucofkti [ 0 ] * localB -> nypkbmfphb_ldqodwenvz ; localB
-> h1e4elx2mq [ 1 ] = localB -> cibucofkti [ 1 ] * localB ->
nypkbmfphb_ldqodwenvz ; srUpdateBC ( localDW -> cebxw1ejuv ) ; } else if (
localDW -> l0khpg0k3s ) { ssSetBlockStateForSolverChangedAtMajorStep (
accn4cnket -> _mdlRefSfcnS ) ; localB -> h1e4elx2mq [ 0 ] = localP -> P_54 ;
localB -> h1e4elx2mq [ 1 ] = localP -> P_54 ; localDW -> l0khpg0k3s = false ;
} localB -> cb2kpcmxmf [ 0 ] = localB -> h1e4elx2mq [ 0 ] + localB ->
lgeyrynojq_idx_0 ; localB -> cb2kpcmxmf [ 1 ] = localB -> h1e4elx2mq [ 1 ] +
localB -> lgeyrynojq_idx_1 ; localB -> nz2ewbvzet_ezqlmfzvpq = ( real32_T )
localB -> cb2kpcmxmf [ 0 ] ; localB -> fi3vvh5454_bjvjhhzy4i = localDW ->
dvmcgiwvlg ; for ( localB -> i = 0 ; localB -> i < 6 ; localB -> i ++ ) {
localB -> pgvax4h34w [ localB -> i ] = ccq0efndwh -> SensorCalibration [
localB -> i ] + localP -> P_110 [ localB -> i ] ; } localB ->
eu2eec20kt_al00mdgrv4 = localB -> pgvax4h34w [ 0 ] ; localB ->
ll554evhck_jzx3amusab = localB -> pgvax4h34w [ 1 ] ; localB ->
ic244jc1gm_idx_1 = localB -> pgvax4h34w [ 2 ] ; localB -> m4p4lyh553_idx_0 =
localB -> pgvax4h34w [ 3 ] ; localB -> ojk311owvo_fdinthrxmb = localB ->
pgvax4h34w [ 4 ] ; localB -> acc1 = localB -> pgvax4h34w [ 5 ] ; localB ->
pgvax4h34w [ 0 ] = ccq0efndwh -> HALSensors . HAL_acc_SI . x - localB ->
eu2eec20kt_al00mdgrv4 ; localB -> pgvax4h34w [ 1 ] = ccq0efndwh -> HALSensors
. HAL_acc_SI . y - localB -> ll554evhck_jzx3amusab ; localB -> pgvax4h34w [ 2
] = ccq0efndwh -> HALSensors . HAL_acc_SI . z - localB -> ic244jc1gm_idx_1 ;
localB -> pgvax4h34w [ 3 ] = ccq0efndwh -> HALSensors . HAL_gyro_SI . x -
localB -> m4p4lyh553_idx_0 ; localB -> pgvax4h34w [ 4 ] = ccq0efndwh ->
HALSensors . HAL_gyro_SI . y - localB -> ojk311owvo_fdinthrxmb ; localB ->
pgvax4h34w [ 5 ] = ccq0efndwh -> HALSensors . HAL_gyro_SI . z - localB ->
acc1 ; for ( localB -> i = 0 ; localB -> i < 6 ; localB -> i ++ ) { localB ->
pgvax4h34w [ localB -> i ] *= localP -> P_111 [ localB -> i ] ; } localB ->
acc1 = localB -> pgvax4h34w [ 0 ] * localP -> P_113 [ 0 ] ; localB -> cff = 1
; localB -> i = localDW -> nihxmtnwn0 ; while ( localB -> i < 5 ) { localB ->
acc1 += localDW -> m3yo5bm0br [ localB -> i ] * localP -> P_113 [ localB ->
cff ] ; localB -> cff ++ ; localB -> i ++ ; } localB -> i = 0 ; while (
localB -> i < localDW -> nihxmtnwn0 ) { localB -> acc1 += localDW ->
m3yo5bm0br [ localB -> i ] * localP -> P_113 [ localB -> cff ] ; localB ->
cff ++ ; localB -> i ++ ; } localB -> gi5rqqmnns_jwzvbuczlb [ 0 ] = localB ->
acc1 ; localB -> acc1 = localP -> P_113 [ 0 ] * localB -> pgvax4h34w [ 1 ] ;
localB -> cff = 1 ; localB -> i = localDW -> nihxmtnwn0 ; while ( localB -> i
< 5 ) { localB -> acc1 += localDW -> m3yo5bm0br [ localB -> i + 5 ] * localP
-> P_113 [ localB -> cff ] ; localB -> cff ++ ; localB -> i ++ ; } localB ->
i = 0 ; while ( localB -> i < localDW -> nihxmtnwn0 ) { localB -> acc1 +=
localDW -> m3yo5bm0br [ localB -> i + 5 ] * localP -> P_113 [ localB -> cff ]
; localB -> cff ++ ; localB -> i ++ ; } localB -> gi5rqqmnns_jwzvbuczlb [ 1 ]
= localB -> acc1 ; localB -> acc1 = localP -> P_113 [ 0 ] * localB ->
pgvax4h34w [ 2 ] ; localB -> cff = 1 ; localB -> i = localDW -> nihxmtnwn0 ;
while ( localB -> i < 5 ) { localB -> acc1 += localDW -> m3yo5bm0br [ localB
-> i + 10 ] * localP -> P_113 [ localB -> cff ] ; localB -> cff ++ ; localB
-> i ++ ; } localB -> i = 0 ; while ( localB -> i < localDW -> nihxmtnwn0 ) {
localB -> acc1 += localDW -> m3yo5bm0br [ localB -> i + 10 ] * localP ->
P_113 [ localB -> cff ] ; localB -> cff ++ ; localB -> i ++ ; } localB ->
gi5rqqmnns_jwzvbuczlb [ 2 ] = localB -> acc1 ; localB ->
eu2eec20kt_al00mdgrv4 = localP -> P_114 * localB -> gi5rqqmnns_jwzvbuczlb [ 0
] ; if ( localB -> eu2eec20kt_al00mdgrv4 > 1.0F ) { localB ->
eu2eec20kt_al00mdgrv4 = 1.0F ; } else if ( localB -> eu2eec20kt_al00mdgrv4 <
- 1.0F ) { localB -> eu2eec20kt_al00mdgrv4 = - 1.0F ; } localB -> hcgu200vho
= muSingleScalarAsin ( localB -> eu2eec20kt_al00mdgrv4 ) ; localB ->
ewppo5cuta_o4f35lbcvx = localB -> hcgu200vho ; if ( localDW -> bbdsjay1cb ) {
localDW -> johlzfhbo0 [ 0 ] = localB -> orkhsyifkf [ 0 ] ; localDW ->
johlzfhbo0 [ 1 ] = localB -> orkhsyifkf [ 1 ] ; } localB ->
cwam1jmb4d_nuebgmauvi [ 0 ] = localDW -> johlzfhbo0 [ 0 ] ; localB ->
cwam1jmb4d_nuebgmauvi [ 1 ] = localDW -> johlzfhbo0 [ 1 ] ; localB ->
eu2eec20kt_al00mdgrv4 = muSingleScalarFloor ( localP -> P_187 ) ; if ( (
localB -> gi5rqqmnns_jwzvbuczlb [ 0 ] < 0.0F ) && ( localP -> P_187 > localB
-> eu2eec20kt_al00mdgrv4 ) ) { localB -> ll554evhck_jzx3amusab = -
muSingleScalarPower ( - localB -> gi5rqqmnns_jwzvbuczlb [ 0 ] , localP ->
P_187 ) ; } else { localB -> ll554evhck_jzx3amusab = muSingleScalarPower (
localB -> gi5rqqmnns_jwzvbuczlb [ 0 ] , localP -> P_187 ) ; } if ( ( localB
-> gi5rqqmnns_jwzvbuczlb [ 1 ] < 0.0F ) && ( localP -> P_187 > localB ->
eu2eec20kt_al00mdgrv4 ) ) { localB -> ic244jc1gm_idx_1 = -
muSingleScalarPower ( - localB -> gi5rqqmnns_jwzvbuczlb [ 1 ] , localP ->
P_187 ) ; } else { localB -> ic244jc1gm_idx_1 = muSingleScalarPower ( localB
-> gi5rqqmnns_jwzvbuczlb [ 1 ] , localP -> P_187 ) ; } if ( ( localB -> acc1
< 0.0F ) && ( localP -> P_187 > localB -> eu2eec20kt_al00mdgrv4 ) ) { localB
-> eu2eec20kt_al00mdgrv4 = - muSingleScalarPower ( - localB -> acc1 , localP
-> P_187 ) ; } else { localB -> eu2eec20kt_al00mdgrv4 = muSingleScalarPower (
localB -> acc1 , localP -> P_187 ) ; } localB -> ll554evhck_jzx3amusab =
muSingleScalarSqrt ( ( localB -> ll554evhck_jzx3amusab + localB ->
ic244jc1gm_idx_1 ) + localB -> eu2eec20kt_al00mdgrv4 ) ; localB ->
mzt1uypci3_kkiq3xxxve = ( int16_T ) ( ( localB -> ll554evhck_jzx3amusab >
localP -> P_30 ) && ( localB -> ll554evhck_jzx3amusab < localP -> P_31 ) ) ;
pcr4qjwuet = ( localB -> mzt1uypci3_kkiq3xxxve != 0 ) ; myyno4nxcb = ( localB
-> mzt1uypci3_kkiq3xxxve != 0 ) ; ojiyh5md2f ( accn4cnket , myyno4nxcb ,
localB -> hnpiwdpoj2_mbvzarwird , localP -> P_166 , localB ->
ewppo5cuta_o4f35lbcvx , localB -> cwam1jmb4d_nuebgmauvi , & localB ->
ojiyh5md2fp , & localDW -> ojiyh5md2fp , & localP -> ojiyh5md2fp ) ; localB
-> fgsro4huaj_lxo5edjg3c [ 0 ] = localB -> ojiyh5md2fp . fm0zbm30ze [ 0 ] +
localB -> cwam1jmb4d_nuebgmauvi [ 0 ] ; localB -> fgsro4huaj_lxo5edjg3c [ 1 ]
= localB -> ojiyh5md2fp . fm0zbm30ze [ 1 ] + localB -> cwam1jmb4d_nuebgmauvi
[ 1 ] ; localB -> ebf3llmkmq = muSingleScalarAtan ( localB ->
gi5rqqmnns_jwzvbuczlb [ 1 ] / localB -> acc1 ) ; localB ->
jx0gtxwpne_nyxm0bsxsn = localB -> ebf3llmkmq ; if ( localDW -> cyeg151nql ) {
localDW -> dpd1kuq4ti [ 0 ] = localB -> djui0aicgi [ 0 ] ; localDW ->
dpd1kuq4ti [ 1 ] = localB -> djui0aicgi [ 1 ] ; } localB ->
gsawacrzqm_bsqwvugooi [ 0 ] = localDW -> dpd1kuq4ti [ 0 ] ; localB ->
gsawacrzqm_bsqwvugooi [ 1 ] = localDW -> dpd1kuq4ti [ 1 ] ; mnvyotict5 = (
localB -> mzt1uypci3_kkiq3xxxve != 0 ) ; mnhrimwa2d = ( localB ->
mzt1uypci3_kkiq3xxxve != 0 ) ; ojiyh5md2f ( accn4cnket , mnhrimwa2d , localB
-> cy2qrqn1lj , localP -> P_177 , localB -> jx0gtxwpne_nyxm0bsxsn , localB ->
gsawacrzqm_bsqwvugooi , & localB -> afkrtspz4r , & localDW -> afkrtspz4r , &
localP -> afkrtspz4r ) ; localB -> ic244jc1gm_idx_1 = localB ->
fgsro4huaj_lxo5edjg3c [ 0 ] ; localB -> ll554evhck_jzx3amusab = localB ->
afkrtspz4r . fm0zbm30ze [ 0 ] + localB -> gsawacrzqm_bsqwvugooi [ 0 ] ;
kmfks4hb13 = localDW -> h0kguh0g04 ; if ( kmfks4hb13 < localP -> P_50 ) {
localB -> m4p4lyh553_idx_0 = ccq0efndwh -> VisionSensors . opticalFlow_data [
0 ] ; localB -> ojk311owvo_fdinthrxmb = ccq0efndwh -> VisionSensors .
opticalFlow_data [ 1 ] ; } else { localB -> ojk311owvo_fdinthrxmb = localP ->
P_99 * localB -> nz2ewbvzet_ezqlmfzvpq ; localB -> m4p4lyh553_idx_0 =
ccq0efndwh -> VisionSensors . opticalFlow_data [ 0 ] * localB ->
ojk311owvo_fdinthrxmb * localP -> P_100 ; localB -> ojk311owvo_fdinthrxmb =
ccq0efndwh -> VisionSensors . opticalFlow_data [ 1 ] * localB ->
ojk311owvo_fdinthrxmb * localP -> P_100 ; } localB -> eu2eec20kt_al00mdgrv4 =
muSingleScalarAbs ( localB -> nz2ewbvzet_ezqlmfzvpq ) ; localDW -> ltcjlexrjv
= ( localB -> pgvax4h34w [ 3 ] - localP -> P_116 [ 1 ] * localDW ->
bkpwlcggki ) / localP -> P_116 [ 0 ] ; localB -> jam0bbyqk0 = localP -> P_115
[ 0 ] * localDW -> ltcjlexrjv + localP -> P_115 [ 1 ] * localDW -> bkpwlcggki
; localDW -> akyvzynr2c = ( localB -> pgvax4h34w [ 4 ] - localP -> P_119 [ 1
] * localDW -> mlypgyrlj0 ) / localP -> P_119 [ 0 ] ; localB -> li0sey3j1t =
localP -> P_118 [ 0 ] * localDW -> akyvzynr2c + localP -> P_118 [ 1 ] *
localDW -> mlypgyrlj0 ; localDW -> cijvfuftv0 = localB -> pgvax4h34w [ 5 ] ;
localB -> denIdx = 1 ; for ( localB -> i = 0 ; localB -> i < 5 ; localB -> i
++ ) { localDW -> cijvfuftv0 -= localP -> P_122 [ localB -> denIdx ] *
localDW -> gawfgxhxnt [ localB -> i ] ; localB -> denIdx ++ ; } localDW ->
cijvfuftv0 /= localP -> P_122 [ 0 ] ; localB -> kpp0n2hpyr_idx_0 = localP ->
P_121 [ 0 ] * localDW -> cijvfuftv0 ; localB -> denIdx = 1 ; for ( localB ->
i = 0 ; localB -> i < 5 ; localB -> i ++ ) { localB -> kpp0n2hpyr_idx_0 +=
localP -> P_121 [ localB -> denIdx ] * localDW -> gawfgxhxnt [ localB -> i ]
; localB -> denIdx ++ ; } localB -> n0z1n3jefd_oyypvi4boh = localDW ->
mcs0s1fmhj ; h2thm5amik = ( localB -> n0z1n3jefd_oyypvi4boh == localP -> P_49
) ; if ( ( ( localZCE -> ogguxux3on == POS_ZCSIG ) != ( int32_T ) h2thm5amik
) && ( localZCE -> ogguxux3on != UNINITIALIZED_ZCSIG ) ) { localB ->
dzof3xbsea = ccq0efndwh -> HALSensors . HAL_gyro_SI . temperature ; localDW
-> pkieznpv5v = 4 ; } localZCE -> ogguxux3on = h2thm5amik ; if ( localP ->
P_224 == 1 ) { localB -> nypkbmfphb_ldqodwenvz = ( ccq0efndwh -> HALSensors .
HAL_gyro_SI . temperature - localB -> dzof3xbsea ) * localP -> P_95 ; } else
{ localB -> nypkbmfphb_ldqodwenvz = localP -> P_86 ; } localB -> hnpiwdpoj2 =
localB -> kpp0n2hpyr_idx_0 - ( real32_T ) localB -> nypkbmfphb_ldqodwenvz ;
localB -> n3tk24qz4a_idx_0 = localB -> jam0bbyqk0 - ( localB -> afkrtspz4r .
fm0zbm30ze [ 1 ] + localB -> gsawacrzqm_bsqwvugooi [ 1 ] ) ; localB ->
n3tk24qz4a_idx_1 = localB -> li0sey3j1t - localB -> fgsro4huaj_lxo5edjg3c [ 1
] ; localB -> n3tk24qz4a_idx_2 = localB -> hnpiwdpoj2 - localP -> P_186 ;
localB -> aiiueo1qke [ 0 ] = localB -> eu2eec20kt_al00mdgrv4 * localB ->
n3tk24qz4a_idx_1 * localP -> P_124 + localB -> m4p4lyh553_idx_0 ; localB ->
aiiueo1qke [ 1 ] = localB -> eu2eec20kt_al00mdgrv4 * localB ->
n3tk24qz4a_idx_0 + localB -> ojk311owvo_fdinthrxmb ; localB ->
fgsro4huaj_lxo5edjg3c [ 0 ] = localB -> aiiueo1qke [ 0 ] ; localB ->
fgsro4huaj_lxo5edjg3c [ 1 ] = localB -> aiiueo1qke [ 1 ] ; if ( localDW ->
dtlx1df0zm ) { localDW -> fytbq2ia43 [ 0 ] = localB -> ctthzagufv [ 0 ] ;
localDW -> fytbq2ia43 [ 1 ] = localB -> ctthzagufv [ 1 ] ; localDW ->
fytbq2ia43 [ 2 ] = localB -> ctthzagufv [ 2 ] ; localDW -> fytbq2ia43 [ 3 ] =
localB -> ctthzagufv [ 3 ] ; } localB -> fb2gutbykh_merlcviukg [ 0 ] =
localDW -> fytbq2ia43 [ 0 ] ; localB -> fb2gutbykh_merlcviukg [ 1 ] = localDW
-> fytbq2ia43 [ 1 ] ; localB -> fb2gutbykh_merlcviukg [ 2 ] = localDW ->
fytbq2ia43 [ 2 ] ; localB -> fb2gutbykh_merlcviukg [ 3 ] = localDW ->
fytbq2ia43 [ 3 ] ; localB -> jrif0eh3si_owjr1h1vqy [ 0 ] = localB ->
jam0bbyqk0 ; localB -> jrif0eh3si_owjr1h1vqy [ 1 ] = localB -> li0sey3j1t ;
for ( localB -> cff = 0 ; localB -> cff < 2 ; localB -> cff ++ ) { localB ->
memOffset = localB -> cff * 5 ; localB -> eu2eec20kt_al00mdgrv4 = localB ->
jrif0eh3si_owjr1h1vqy [ localB -> cff ] ; localB -> denIdx = 1 ; for ( localB
-> i = 0 ; localB -> i < 5 ; localB -> i ++ ) { localB ->
eu2eec20kt_al00mdgrv4 -= localDW -> hwg5o53ida [ localB -> memOffset + localB
-> i ] * localP -> P_126 [ localB -> denIdx ] ; localB -> denIdx ++ ; }
localB -> eu2eec20kt_al00mdgrv4 /= localP -> P_126 [ 0 ] ; localDW ->
khvqumkvsg [ localB -> cff ] = localB -> eu2eec20kt_al00mdgrv4 ; localB ->
kpp0n2hpyr_idx_0 = localP -> P_125 [ 0 ] * localDW -> khvqumkvsg [ localB ->
cff ] ; localB -> denIdx = 1 ; for ( localB -> i = 0 ; localB -> i < 5 ;
localB -> i ++ ) { localB -> kpp0n2hpyr_idx_0 += localDW -> hwg5o53ida [
localB -> memOffset + localB -> i ] * localP -> P_125 [ localB -> denIdx ] ;
localB -> denIdx ++ ; } localB -> k20gadexm3 [ localB -> cff ] = localB ->
kpp0n2hpyr_idx_0 * localP -> P_128 ; } localB -> mz1msmwhmu_dapv3jlyq5 [ 0 ]
= localDW -> opm4ouvgho [ 0 ] ; localB -> mz1msmwhmu_dapv3jlyq5 [ 1 ] =
localDW -> opm4ouvgho [ 1 ] ; localB -> oxbwiw21l5_bnlywzniup [ 0 ] = localB
-> k20gadexm3 [ 0 ] - localB -> mz1msmwhmu_dapv3jlyq5 [ 0 ] ; localB ->
oxbwiw21l5_bnlywzniup [ 1 ] = localB -> k20gadexm3 [ 1 ] - localB ->
mz1msmwhmu_dapv3jlyq5 [ 1 ] ; localB -> eu2eec20kt_al00mdgrv4 =
muSingleScalarAbs ( localB -> jam0bbyqk0 ) ; localB -> kpp0n2hpyr_idx_0 =
muSingleScalarAbs ( localB -> li0sey3j1t ) ; localB -> fhgxlms05u = ( ( ( (
muSingleScalarAbs ( localB -> ic244jc1gm_idx_1 ) <= localP -> P_37 ) && (
muSingleScalarAbs ( localB -> ll554evhck_jzx3amusab ) <= localP -> P_39 ) &&
( localB -> eu2eec20kt_al00mdgrv4 <= localP -> P_41 ) && ( localB ->
kpp0n2hpyr_idx_0 <= localP -> P_42 ) && ( muSingleScalarAbs ( localB ->
oxbwiw21l5_bnlywzniup [ 0 ] ) <= localP -> P_35 ) && ( muSingleScalarAbs (
localB -> oxbwiw21l5_bnlywzniup [ 1 ] ) <= localP -> P_36 ) ) || ( ( localB
-> eu2eec20kt_al00mdgrv4 <= localP -> P_38 ) && ( localB -> kpp0n2hpyr_idx_0
<= localP -> P_40 ) ) ) && ( muSingleScalarAbs ( localB -> m4p4lyh553_idx_0 -
localDW -> lbqu3u2lvu [ 0 ] ) <= localP -> P_43 ) && ( muSingleScalarAbs (
localB -> ojk311owvo_fdinthrxmb - localDW -> lbqu3u2lvu [ 1 ] ) <= localP ->
P_44 ) && ( localB -> nz2ewbvzet_ezqlmfzvpq <= localP -> P_45 ) ) ;
h2thm5amik = localB -> fhgxlms05u ; poclb2vmnu = localB -> fhgxlms05u ; if (
poclb2vmnu ) { if ( ! localDW -> lmmiwr5usb ) { if ( rtmGetTaskTime (
accn4cnket , 0 ) != rtmGetTStart ( accn4cnket ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ; }
localDW -> lmmiwr5usb = true ; } for ( localB -> i = 0 ; localB -> i < 2 ;
localB -> i ++ ) { localB -> b1alozynib_bjbgfqrolh [ localB -> i ] = localB
-> fgsro4huaj_lxo5edjg3c [ localB -> i ] - ( ( ( localP -> P_190 [ localB ->
i + 2 ] * localB -> fb2gutbykh_merlcviukg [ 1 ] + localP -> P_190 [ localB ->
i ] * localB -> fb2gutbykh_merlcviukg [ 0 ] ) + localP -> P_190 [ localB -> i
+ 4 ] * localB -> fb2gutbykh_merlcviukg [ 2 ] ) + localP -> P_190 [ localB ->
i + 6 ] * localB -> fb2gutbykh_merlcviukg [ 3 ] ) ; } for ( localB -> i = 0 ;
localB -> i < 4 ; localB -> i ++ ) { localB -> h33xcbk4xk [ localB -> i ] =
0.0F ; localB -> h33xcbk4xk [ localB -> i ] += localB -> lmcv44d02w [ localB
-> i ] * localB -> b1alozynib_bjbgfqrolh [ 0 ] ; localB -> h33xcbk4xk [
localB -> i ] += localB -> lmcv44d02w [ localB -> i + 4 ] * localB ->
b1alozynib_bjbgfqrolh [ 1 ] ; } srUpdateBC ( localDW -> cpmhds2jl3 ) ; } else
if ( localDW -> lmmiwr5usb ) { ssSetBlockStateForSolverChangedAtMajorStep (
accn4cnket -> _mdlRefSfcnS ) ; localB -> h33xcbk4xk [ 0 ] = localP -> P_98 ;
localB -> h33xcbk4xk [ 1 ] = localP -> P_98 ; localB -> h33xcbk4xk [ 2 ] =
localP -> P_98 ; localB -> h33xcbk4xk [ 3 ] = localP -> P_98 ; localDW ->
lmmiwr5usb = false ; } localB -> dz3nhptc13 [ 0 ] = localB -> h33xcbk4xk [ 0
] + localB -> fb2gutbykh_merlcviukg [ 0 ] ; localB -> dz3nhptc13 [ 1 ] =
localB -> h33xcbk4xk [ 1 ] + localB -> fb2gutbykh_merlcviukg [ 1 ] ; localB
-> dz3nhptc13 [ 2 ] = localB -> h33xcbk4xk [ 2 ] + localB ->
fb2gutbykh_merlcviukg [ 2 ] ; localB -> dz3nhptc13 [ 3 ] = localB ->
h33xcbk4xk [ 3 ] + localB -> fb2gutbykh_merlcviukg [ 3 ] ;
muSingleScalarSinCos ( localB -> fi3vvh5454_bjvjhhzy4i , & localB ->
kpp0n2hpyr_idx_0 , & localB -> eu2eec20kt_al00mdgrv4 ) ; muSingleScalarSinCos
( localB -> ic244jc1gm_idx_1 , & localB -> kpp0n2hpyr_idx_1 , & localB ->
el1oeuwfff_idx_1 ) ; muSingleScalarSinCos ( localB -> ll554evhck_jzx3amusab ,
& localB -> kpp0n2hpyr_idx_2 , & localB -> el1oeuwfff_idx_2 ) ; localB ->
b45ahf3s5y_cv5hdgrwft [ 0 ] = localB -> eu2eec20kt_al00mdgrv4 * localB ->
el1oeuwfff_idx_1 ; localB -> avl4esggii_ju13rw2h0m = localB ->
kpp0n2hpyr_idx_1 * localB -> kpp0n2hpyr_idx_2 ; localB ->
b45ahf3s5y_cv5hdgrwft [ 1 ] = localB -> avl4esggii_ju13rw2h0m * localB ->
eu2eec20kt_al00mdgrv4 - localB -> kpp0n2hpyr_idx_0 * localB ->
el1oeuwfff_idx_2 ; localB -> b45ahf3s5y_tmp = localB -> kpp0n2hpyr_idx_1 *
localB -> el1oeuwfff_idx_2 ; localB -> b45ahf3s5y_cv5hdgrwft [ 2 ] = localB
-> b45ahf3s5y_tmp * localB -> eu2eec20kt_al00mdgrv4 + localB ->
kpp0n2hpyr_idx_0 * localB -> kpp0n2hpyr_idx_2 ; localB ->
b45ahf3s5y_cv5hdgrwft [ 3 ] = localB -> kpp0n2hpyr_idx_0 * localB ->
el1oeuwfff_idx_1 ; localB -> b45ahf3s5y_cv5hdgrwft [ 4 ] = localB ->
avl4esggii_ju13rw2h0m * localB -> kpp0n2hpyr_idx_0 + localB ->
eu2eec20kt_al00mdgrv4 * localB -> el1oeuwfff_idx_2 ; localB ->
b45ahf3s5y_cv5hdgrwft [ 5 ] = localB -> b45ahf3s5y_tmp * localB ->
kpp0n2hpyr_idx_0 - localB -> eu2eec20kt_al00mdgrv4 * localB ->
kpp0n2hpyr_idx_2 ; localB -> b45ahf3s5y_cv5hdgrwft [ 6 ] = - localB ->
kpp0n2hpyr_idx_1 ; localB -> b45ahf3s5y_cv5hdgrwft [ 7 ] = localB ->
el1oeuwfff_idx_1 * localB -> kpp0n2hpyr_idx_2 ; localB ->
b45ahf3s5y_cv5hdgrwft [ 8 ] = localB -> el1oeuwfff_idx_1 * localB ->
el1oeuwfff_idx_2 ; localB -> nypkbmfphb_ldqodwenvz = localDW -> mar1fo4k2g [
0 ] ; localB -> hkjxgkhe23_idx_1 = localDW -> mar1fo4k2g [ 1 ] ; localB ->
finlzeqd1s_dhamdvybc1 = localB -> cb2kpcmxmf [ 1 ] ; localB -> unnamed_idx_2
= localB -> cb2kpcmxmf [ 1 ] ; for ( localB -> i = 0 ; localB -> i < 3 ;
localB -> i ++ ) { localB -> bkymt1dvwc_tmp = localB -> b45ahf3s5y_cv5hdgrwft
[ localB -> i + 6 ] ; localB -> bkymt1dvwc_tmp_dypejvacrn = localB ->
b45ahf3s5y_cv5hdgrwft [ localB -> i + 3 ] * localB -> hkjxgkhe23_idx_1 +
localB -> b45ahf3s5y_cv5hdgrwft [ localB -> i ] * localB ->
nypkbmfphb_ldqodwenvz ; localB -> bkymt1dvwc_g2mlkqadfk [ localB -> i ] =
localB -> bkymt1dvwc_tmp * localB -> finlzeqd1s_dhamdvybc1 + localB ->
bkymt1dvwc_tmp_dypejvacrn ; localB -> b45ahf3s5y_g1smspu5ke [ localB -> i ] =
localB -> bkymt1dvwc_tmp * localB -> unnamed_idx_2 + localB ->
bkymt1dvwc_tmp_dypejvacrn ; } localB -> el1oeuwfff_idx_2 = ( real32_T )
localB -> b45ahf3s5y_g1smspu5ke [ 2 ] ; localB -> evstouefyu_pbm3vprmfu [ 0 ]
= localB -> amlu45g12u_idx_0 ; localB -> evstouefyu_pbm3vprmfu [ 1 ] = localB
-> amlu45g12u_idx_1 ; localB -> evstouefyu_pbm3vprmfu [ 2 ] = localB ->
nz2ewbvzet_ezqlmfzvpq ; localB -> evstouefyu_pbm3vprmfu [ 3 ] = localB ->
fi3vvh5454_bjvjhhzy4i ; localB -> evstouefyu_pbm3vprmfu [ 4 ] = localB ->
ic244jc1gm_idx_1 ; localB -> evstouefyu_pbm3vprmfu [ 5 ] = localB ->
ll554evhck_jzx3amusab ; localB -> evstouefyu_pbm3vprmfu [ 6 ] = localB ->
dz3nhptc13 [ 0 ] ; localB -> evstouefyu_pbm3vprmfu [ 7 ] = localB ->
dz3nhptc13 [ 1 ] ; localB -> evstouefyu_pbm3vprmfu [ 8 ] = ( real32_T )
localB -> bkymt1dvwc_g2mlkqadfk [ 2 ] ; localB -> evstouefyu_pbm3vprmfu [ 9 ]
= localB -> n3tk24qz4a_idx_0 ; localB -> evstouefyu_pbm3vprmfu [ 10 ] =
localB -> n3tk24qz4a_idx_1 ; localB -> evstouefyu_pbm3vprmfu [ 11 ] = localB
-> n3tk24qz4a_idx_2 ; { if ( tid == 0 ) { if ( localDW -> puq03cpvbg .
AQHandles && ssGetLogOutput ( accn4cnket -> _mdlRefSfcnS ) ) { sdiWriteSignal
( localDW -> puq03cpvbg . AQHandles , rtmGetTaskTime ( accn4cnket , 0 ) , (
char * ) & localB -> evstouefyu_pbm3vprmfu [ 0 ] + 0 ) ; } } } e0jzucgg5v =
localDW -> jbinyylhej ; localB -> jg2mvzzkfu = ( e0jzucgg5v < localP -> P_52
) ; nwb5cwi32s = ( uint16_T ) ( ( uint32_T ) e0jzucgg5v + localP -> P_209 ) ;
if ( nwb5cwi32s > localP -> P_51 ) { localB -> lmcv44d02w_cl54gopm0x = localP
-> P_210 ; } else { localB -> lmcv44d02w_cl54gopm0x = nwb5cwi32s ; } if ( ( !
localB -> jg2mvzzkfu ) && ( localDW -> ayxp4yzgmp == 1 ) ) { localDW ->
ic2lljdnru = localP -> P_132 ; } if ( localDW -> ic2lljdnru >= localP ->
P_133 ) { localDW -> ic2lljdnru = localP -> P_133 ; } else if ( localDW ->
ic2lljdnru <= localP -> P_134 ) { localDW -> ic2lljdnru = localP -> P_134 ; }
if ( localDW -> brlttosllt < 1023U ) { localDW -> brlttosllt ++ ; } if (
localDW -> kewexujuqg == 0U ) { localDW -> kewexujuqg = 1U ; localDW ->
gmlzgvyimo = hnr2mbt51y ; localDW -> brlttosllt = 0U ; } else { switch (
localDW -> gmlzgvyimo ) { case dtqxeddsii : if ( obl5z00tgr ) { localDW ->
gmlzgvyimo = akt5oizsy2 ; } else { localB -> amvrcq1fuc -= 0.001 ; } break ;
case kojq2h0k4n : if ( obl5z00tgr ) { localDW -> gmlzgvyimo = akt5oizsy2 ; }
else { localB -> amvrcq1fuc += 0.001 ; } break ; case hdv5sckbu5 : if ( (
localDW -> brlttosllt >= 200U ) && ( localDW -> dfwvove5te == 1.0 ) ) {
localDW -> gmlzgvyimo = ev0zvaamcw ; localDW -> brlttosllt = 0U ; } else {
localB -> hapfqnwg0b = 0.5F ; localDW -> dfwvove5te ++ ; } break ; case
akt5oizsy2 : if ( cxumx4fbnl ) { localDW -> gmlzgvyimo = fmt4luad11 ; localDW
-> brlttosllt = 0U ; } else if ( eoqrclowg0 ) { localDW -> gmlzgvyimo =
g0o20edlje ; localDW -> brlttosllt = 0U ; } else if ( lrhhewnnq1 ) { localDW
-> gmlzgvyimo = hdv5sckbu5 ; localDW -> brlttosllt = 0U ; } else { localB ->
l3w0kjjahz += 0.0005F * muSingleScalarCos ( localB -> fi3vvh5454_bjvjhhzy4i )
; localB -> j0ff3qp1rt += 0.0005F * muSingleScalarSin ( localB ->
fi3vvh5454_bjvjhhzy4i ) ; } break ; case hnr2mbt51y : tmp_e = ! obl5z00tgr ;
if ( ( localDW -> brlttosllt >= 600U ) && tmp_e && ( ! psz3v3ojow ) ) {
localDW -> gmlzgvyimo = dtqxeddsii ; } else if ( ( localDW -> brlttosllt >=
600U ) && obl5z00tgr ) { localDW -> gmlzgvyimo = akt5oizsy2 ; } else if ( (
localDW -> brlttosllt >= 600U ) && tmp_e ) { localDW -> gmlzgvyimo =
kojq2h0k4n ; } else { localB -> l3w0kjjahz = 0.0F ; localB -> j0ff3qp1rt =
0.0F ; localB -> hapfqnwg0b = - 1.1F ; localB -> amvrcq1fuc = 0.0 ; localDW
-> dfwvove5te = 0.0 ; } break ; case ev0zvaamcw : if ( ( localDW ->
brlttosllt >= 600U ) && obl5z00tgr ) { localDW -> gmlzgvyimo = akt5oizsy2 ; }
else { tmp_e = ! obl5z00tgr ; if ( ( localDW -> brlttosllt >= 600U ) && tmp_e
&& ( ! psz3v3ojow ) ) { localDW -> gmlzgvyimo = dtqxeddsii ; } else if ( (
localDW -> brlttosllt >= 600U ) && tmp_e ) { localDW -> gmlzgvyimo =
kojq2h0k4n ; } else { localB -> l3w0kjjahz = 0.0F ; localB -> j0ff3qp1rt =
0.0F ; localB -> hapfqnwg0b = - 1.1F ; localB -> amvrcq1fuc = 0.0 ; } } break
; case g0o20edlje : if ( ( localDW -> brlttosllt >= 100U ) && obl5z00tgr ) {
localDW -> gmlzgvyimo = akt5oizsy2 ; } else { localB -> l3w0kjjahz +=
0.00035F * muSingleScalarCos ( localB -> fi3vvh5454_bjvjhhzy4i ) ; localB ->
j0ff3qp1rt += 0.00035F * muSingleScalarSin ( localB -> fi3vvh5454_bjvjhhzy4i
) ; localB -> amvrcq1fuc -= 0.001 ; } break ; default : if ( ( localDW ->
brlttosllt >= 100U ) && obl5z00tgr ) { localDW -> gmlzgvyimo = akt5oizsy2 ; }
else { localB -> l3w0kjjahz += 0.00035F * muSingleScalarCos ( localB ->
fi3vvh5454_bjvjhhzy4i ) ; localB -> j0ff3qp1rt += 0.00035F *
muSingleScalarSin ( localB -> fi3vvh5454_bjvjhhzy4i ) ; localB -> amvrcq1fuc
+= 0.001 ; } break ; } } localB -> avl4esggii_ju13rw2h0m = localB ->
hapfqnwg0b - localB -> nz2ewbvzet_ezqlmfzvpq ; localB -> b45fpbx2d0 = localP
-> P_135 * localB -> avl4esggii_ju13rw2h0m ; if ( localB -> jg2mvzzkfu ) {
localB -> eu2eec20kt_al00mdgrv4 = localP -> P_91 * localP -> P_136 ; } else {
localB -> eu2eec20kt_al00mdgrv4 = ( localP -> P_92 * localB ->
avl4esggii_ju13rw2h0m + localDW -> ic2lljdnru ) - localP -> P_93 * ( real32_T
) localB -> bkymt1dvwc_g2mlkqadfk [ 2 ] ; } localB -> avl4esggii_ju13rw2h0m =
localP -> P_136 + localB -> eu2eec20kt_al00mdgrv4 ; if ( localB ->
avl4esggii_ju13rw2h0m > localP -> P_137 ) { localB -> avl4esggii_ju13rw2h0m =
localP -> P_137 ; } else if ( localB -> avl4esggii_ju13rw2h0m < localP ->
P_138 ) { localB -> avl4esggii_ju13rw2h0m = localP -> P_138 ; } localB ->
kpp0n2hpyr_idx_2 = muSingleScalarSin ( localB -> fi3vvh5454_bjvjhhzy4i ) ;
localB -> el1oeuwfff_idx_1 = muSingleScalarCos ( localB ->
fi3vvh5454_bjvjhhzy4i ) ; localB -> kpp0n2hpyr_idx_0 = localB -> l3w0kjjahz -
localB -> amlu45g12u_idx_0 ; localB -> kpp0n2hpyr_idx_1 = localB ->
j0ff3qp1rt - localB -> amlu45g12u_idx_1 ; localDW -> ebu51u4psc [ 0U ] = 0.0F
; localB -> eu2eec20kt_al00mdgrv4 = ( localB -> el1oeuwfff_idx_1 * localB ->
kpp0n2hpyr_idx_0 + localB -> kpp0n2hpyr_idx_2 * localB -> kpp0n2hpyr_idx_1 )
* localP -> P_17 ; if ( localB -> eu2eec20kt_al00mdgrv4 > localP -> P_21 ) {
localB -> eu2eec20kt_al00mdgrv4 = localP -> P_21 ; } else if ( localB ->
eu2eec20kt_al00mdgrv4 < localP -> P_13 ) { localB -> eu2eec20kt_al00mdgrv4 =
localP -> P_13 ; } localB -> b45ahf3s5y_tmp = localB -> eu2eec20kt_al00mdgrv4
- localB -> dz3nhptc13 [ 0 ] ; localB -> lxqm54wszc [ 0 ] = localP -> P_18 *
localB -> b45ahf3s5y_tmp + localDW -> i2waz4wcdh [ 0 ] ; if ( localB ->
lxqm54wszc [ 0 ] > localP -> P_22 ) { localB -> eu2eec20kt_al00mdgrv4 =
localP -> P_22 ; } else if ( localB -> lxqm54wszc [ 0 ] < localP -> P_14 ) {
localB -> eu2eec20kt_al00mdgrv4 = localP -> P_14 ; } else { localB ->
eu2eec20kt_al00mdgrv4 = localB -> lxqm54wszc [ 0 ] ; } localDW -> ebu51u4psc
[ 0 ] = ( localB -> eu2eec20kt_al00mdgrv4 - localDW -> jomzm1efxy [ 0 ] *
localP -> P_141 [ 1 ] ) / localP -> P_141 [ 0 ] ; localB ->
b1alozynib_bjbgfqrolh [ 0 ] = localB -> b45ahf3s5y_tmp ; localB ->
eu2eec20kt_al00mdgrv4 = ( - localB -> kpp0n2hpyr_idx_2 * localB ->
kpp0n2hpyr_idx_0 + localB -> el1oeuwfff_idx_1 * localB -> kpp0n2hpyr_idx_1 )
* localP -> P_17 ; if ( localB -> eu2eec20kt_al00mdgrv4 > localP -> P_21 ) {
localB -> eu2eec20kt_al00mdgrv4 = localP -> P_21 ; } else if ( localB ->
eu2eec20kt_al00mdgrv4 < localP -> P_13 ) { localB -> eu2eec20kt_al00mdgrv4 =
localP -> P_13 ; } localB -> b45ahf3s5y_tmp = localB -> eu2eec20kt_al00mdgrv4
- localB -> dz3nhptc13 [ 1 ] ; localB -> lxqm54wszc [ 1 ] = localP -> P_18 *
localB -> b45ahf3s5y_tmp + localDW -> i2waz4wcdh [ 1 ] ; if ( localB ->
lxqm54wszc [ 1 ] > localP -> P_22 ) { localB -> eu2eec20kt_al00mdgrv4 =
localP -> P_22 ; } else if ( localB -> lxqm54wszc [ 1 ] < localP -> P_14 ) {
localB -> eu2eec20kt_al00mdgrv4 = localP -> P_14 ; } else { localB ->
eu2eec20kt_al00mdgrv4 = localB -> lxqm54wszc [ 1 ] ; } localDW -> ebu51u4psc
[ 1 ] = ( localB -> eu2eec20kt_al00mdgrv4 - localP -> P_141 [ 1 ] * localDW
-> jomzm1efxy [ 1 ] ) / localP -> P_141 [ 0 ] ; if ( localP -> P_215 ) {
localB -> kpp0n2hpyr_idx_2 = ( localP -> P_140 [ 0 ] * localDW -> ebu51u4psc
[ 0 ] + localDW -> jomzm1efxy [ 0 ] * localP -> P_140 [ 1 ] ) * localP ->
P_94 [ 0 ] ; localB -> eu2eec20kt_al00mdgrv4 = ( localP -> P_140 [ 0 ] *
localDW -> ebu51u4psc [ 1 ] + localP -> P_140 [ 1 ] * localDW -> jomzm1efxy [
1 ] ) * localP -> P_94 [ 1 ] ; } else { localB -> kpp0n2hpyr_idx_2 = (
real32_T ) 0.0 ; localB -> eu2eec20kt_al00mdgrv4 = ( real32_T ) 0.0 ; }
localB -> kpp0n2hpyr_idx_2 = ( localB -> kpp0n2hpyr_idx_2 - localB ->
ic244jc1gm_idx_1 ) * localP -> P_19 ; localB -> jrif0eh3si_owjr1h1vqy [ 0 ] =
localB -> kpp0n2hpyr_idx_2 - localB -> n3tk24qz4a_idx_1 ; localB ->
jrif0eh3si_owjr1h1vqy [ 1 ] = ( localB -> eu2eec20kt_al00mdgrv4 - localB ->
ll554evhck_jzx3amusab ) * localP -> P_19 - localB -> n3tk24qz4a_idx_0 ;
localB -> n3tk24qz4a_idx_0 = ( real32_T ) localB -> amvrcq1fuc - localB ->
fi3vvh5454_bjvjhhzy4i ; if ( localB -> n3tk24qz4a_idx_0 > localP -> P_145 ) {
localB -> n3tk24qz4a_idx_0 = localP -> P_145 ; } else if ( localB ->
n3tk24qz4a_idx_0 < localP -> P_146 ) { localB -> n3tk24qz4a_idx_0 = localP ->
P_146 ; } localB -> n3tk24qz4a_idx_2 = ( localP -> P_147 * localB ->
n3tk24qz4a_idx_0 + localDW -> elivplttop ) - localP -> P_150 * localB ->
n3tk24qz4a_idx_2 ; localB -> msw4j1f5a5 = localP -> P_151 * localB ->
n3tk24qz4a_idx_0 ; localB -> aimulbgnv1 [ 0 ] = ( localP -> P_6 [ 0 ] *
localB -> jrif0eh3si_owjr1h1vqy [ 0 ] - localDW -> fmgblzk1yx [ 0 ] ) *
localP -> P_16 [ 0 ] ; localB -> n3tk24qz4a_idx_0 = ( localP -> P_20 [ 0 ] *
localB -> jrif0eh3si_owjr1h1vqy [ 0 ] + localDW -> j1ya5i3lju [ 0 ] ) +
localB -> aimulbgnv1 [ 0 ] ; if ( localB -> n3tk24qz4a_idx_0 > localP -> P_23
) { localB -> h54nqgl2zi [ 0 ] = localB -> n3tk24qz4a_idx_0 - localP -> P_23
; } else if ( localB -> n3tk24qz4a_idx_0 >= localP -> P_15 ) { localB ->
h54nqgl2zi [ 0 ] = 0.0F ; } else { localB -> h54nqgl2zi [ 0 ] = localB ->
n3tk24qz4a_idx_0 - localP -> P_15 ; } localB -> kpp0n2hpyr_idx_2 = localP ->
P_7 [ 0 ] * localB -> jrif0eh3si_owjr1h1vqy [ 0 ] ; if ( localB -> h54nqgl2zi
[ 0 ] > localP -> P_158 ) { tmp = localP -> P_216 ; } else { tmp = localP ->
P_217 ; } if ( localB -> kpp0n2hpyr_idx_2 > localP -> P_158 ) { tmp_p =
localP -> P_218 ; } else { tmp_p = localP -> P_219 ; } if ( ( localP -> P_158
!= localB -> h54nqgl2zi [ 0 ] ) && ( tmp == tmp_p ) ) { localB -> h54nqgl2zi
[ 0 ] = localP -> P_159 ; } else { localB -> h54nqgl2zi [ 0 ] = localB ->
kpp0n2hpyr_idx_2 ; } if ( localB -> lxqm54wszc [ 0 ] > localP -> P_22 ) {
localB -> lxqm54wszc [ 0 ] -= localP -> P_22 ; } else if ( localB ->
lxqm54wszc [ 0 ] >= localP -> P_14 ) { localB -> lxqm54wszc [ 0 ] = 0.0F ; }
else { localB -> lxqm54wszc [ 0 ] -= localP -> P_14 ; } localB ->
kpp0n2hpyr_idx_2 = localP -> P_8 * localB -> b1alozynib_bjbgfqrolh [ 0 ] ; if
( localB -> lxqm54wszc [ 0 ] > localP -> P_161 ) { tmp = localP -> P_220 ; }
else { tmp = localP -> P_221 ; } if ( localB -> kpp0n2hpyr_idx_2 > localP ->
P_161 ) { tmp_p = localP -> P_222 ; } else { tmp_p = localP -> P_223 ; } if (
( localP -> P_161 != localB -> lxqm54wszc [ 0 ] ) && ( tmp == tmp_p ) ) {
localB -> lxqm54wszc [ 0 ] = localP -> P_162 ; } else { localB -> lxqm54wszc
[ 0 ] = localB -> kpp0n2hpyr_idx_2 ; } if ( localB -> n3tk24qz4a_idx_0 >
localP -> P_23 ) { localB -> n3tk24qz4a_idx_1 = localP -> P_23 ; } else if (
localB -> n3tk24qz4a_idx_0 < localP -> P_15 ) { localB -> n3tk24qz4a_idx_1 =
localP -> P_15 ; } else { localB -> n3tk24qz4a_idx_1 = localB ->
n3tk24qz4a_idx_0 ; } localB -> aimulbgnv1 [ 1 ] = ( localP -> P_6 [ 1 ] *
localB -> jrif0eh3si_owjr1h1vqy [ 1 ] - localDW -> fmgblzk1yx [ 1 ] ) *
localP -> P_16 [ 1 ] ; localB -> n3tk24qz4a_idx_0 = ( localP -> P_20 [ 1 ] *
localB -> jrif0eh3si_owjr1h1vqy [ 1 ] + localDW -> j1ya5i3lju [ 1 ] ) +
localB -> aimulbgnv1 [ 1 ] ; if ( localB -> n3tk24qz4a_idx_0 > localP -> P_23
) { localB -> h54nqgl2zi [ 1 ] = localB -> n3tk24qz4a_idx_0 - localP -> P_23
; } else if ( localB -> n3tk24qz4a_idx_0 >= localP -> P_15 ) { localB ->
h54nqgl2zi [ 1 ] = 0.0F ; } else { localB -> h54nqgl2zi [ 1 ] = localB ->
n3tk24qz4a_idx_0 - localP -> P_15 ; } localB -> kpp0n2hpyr_idx_2 = localP ->
P_7 [ 1 ] * localB -> jrif0eh3si_owjr1h1vqy [ 1 ] ; if ( localB -> h54nqgl2zi
[ 1 ] > localP -> P_158 ) { tmp = localP -> P_216 ; } else { tmp = localP ->
P_217 ; } if ( localB -> kpp0n2hpyr_idx_2 > localP -> P_158 ) { tmp_p =
localP -> P_218 ; } else { tmp_p = localP -> P_219 ; } if ( ( localP -> P_158
!= localB -> h54nqgl2zi [ 1 ] ) && ( tmp == tmp_p ) ) { localB -> h54nqgl2zi
[ 1 ] = localP -> P_159 ; } else { localB -> h54nqgl2zi [ 1 ] = localB ->
kpp0n2hpyr_idx_2 ; } if ( localB -> lxqm54wszc [ 1 ] > localP -> P_22 ) {
localB -> lxqm54wszc [ 1 ] -= localP -> P_22 ; } else if ( localB ->
lxqm54wszc [ 1 ] >= localP -> P_14 ) { localB -> lxqm54wszc [ 1 ] = 0.0F ; }
else { localB -> lxqm54wszc [ 1 ] -= localP -> P_14 ; } localB ->
kpp0n2hpyr_idx_2 = localP -> P_8 * localB -> b45ahf3s5y_tmp ; if ( localB ->
lxqm54wszc [ 1 ] > localP -> P_161 ) { tmp = localP -> P_220 ; } else { tmp =
localP -> P_221 ; } if ( localB -> kpp0n2hpyr_idx_2 > localP -> P_161 ) {
tmp_p = localP -> P_222 ; } else { tmp_p = localP -> P_223 ; } if ( ( localP
-> P_161 != localB -> lxqm54wszc [ 1 ] ) && ( tmp == tmp_p ) ) { localB ->
lxqm54wszc [ 1 ] = localP -> P_162 ; } else { localB -> lxqm54wszc [ 1 ] =
localB -> kpp0n2hpyr_idx_2 ; } if ( localB -> n3tk24qz4a_idx_0 > localP ->
P_23 ) { localB -> n3tk24qz4a_idx_0 = localP -> P_23 ; } else if ( localB ->
n3tk24qz4a_idx_0 < localP -> P_15 ) { localB -> n3tk24qz4a_idx_0 = localP ->
P_15 ; } for ( localB -> i = 0 ; localB -> i < 4 ; localB -> i ++ ) { localB
-> giqydtq0ch_nz4o0shxby [ localB -> i ] = ( ( localB -> g3jppbwsml [ localB
-> i + 4 ] * localB -> n3tk24qz4a_idx_2 + localB -> g3jppbwsml [ localB -> i
] * localB -> avl4esggii_ju13rw2h0m ) + localB -> g3jppbwsml [ localB -> i +
8 ] * localB -> n3tk24qz4a_idx_1 ) + localB -> g3jppbwsml [ localB -> i + 12
] * localB -> n3tk24qz4a_idx_0 ; } localB -> eu2eec20kt_al00mdgrv4 = localP
-> P_152 * localB -> giqydtq0ch_nz4o0shxby [ 0 ] ; if ( localB ->
eu2eec20kt_al00mdgrv4 > localP -> P_153 ) { localB -> eu2eec20kt_al00mdgrv4 =
localP -> P_153 ; } else if ( localB -> eu2eec20kt_al00mdgrv4 < localP ->
P_154 ) { localB -> eu2eec20kt_al00mdgrv4 = localP -> P_154 ; } localB ->
e5n3bt555f [ 0 ] = localP -> P_155 [ 0 ] * localB -> eu2eec20kt_al00mdgrv4 ;
localB -> eu2eec20kt_al00mdgrv4 = localP -> P_152 * localB ->
giqydtq0ch_nz4o0shxby [ 1 ] ; if ( localB -> eu2eec20kt_al00mdgrv4 > localP
-> P_153 ) { localB -> eu2eec20kt_al00mdgrv4 = localP -> P_153 ; } else if (
localB -> eu2eec20kt_al00mdgrv4 < localP -> P_154 ) { localB ->
eu2eec20kt_al00mdgrv4 = localP -> P_154 ; } localB -> e5n3bt555f [ 1 ] =
localP -> P_155 [ 1 ] * localB -> eu2eec20kt_al00mdgrv4 ; localB ->
eu2eec20kt_al00mdgrv4 = localP -> P_152 * localB -> giqydtq0ch_nz4o0shxby [ 2
] ; if ( localB -> eu2eec20kt_al00mdgrv4 > localP -> P_153 ) { localB ->
eu2eec20kt_al00mdgrv4 = localP -> P_153 ; } else if ( localB ->
eu2eec20kt_al00mdgrv4 < localP -> P_154 ) { localB -> eu2eec20kt_al00mdgrv4 =
localP -> P_154 ; } localB -> e5n3bt555f [ 2 ] = localP -> P_155 [ 2 ] *
localB -> eu2eec20kt_al00mdgrv4 ; localB -> eu2eec20kt_al00mdgrv4 = localP ->
P_152 * localB -> giqydtq0ch_nz4o0shxby [ 3 ] ; if ( localB ->
eu2eec20kt_al00mdgrv4 > localP -> P_153 ) { localB -> eu2eec20kt_al00mdgrv4 =
localP -> P_153 ; } else if ( localB -> eu2eec20kt_al00mdgrv4 < localP ->
P_154 ) { localB -> eu2eec20kt_al00mdgrv4 = localP -> P_154 ; } localB ->
e5n3bt555f [ 3 ] = localP -> P_155 [ 3 ] * localB -> eu2eec20kt_al00mdgrv4 ;
localB -> kxnz4phnr4_nvsvtgkap4 = localDW -> ltea43kayw ; if ( localB ->
kxnz4phnr4_nvsvtgkap4 > localP -> P_64 ) { localB -> hop4dus5mt_jz50ptvnrg =
localB -> nz2ewbvzet_ezqlmfzvpq - localB -> hop4dus5mt_jz50ptvnrg ; localB ->
nypkbmfphb_ldqodwenvz = ccq0efndwh -> VisionSensors . opticalFlow_data [ 2 ]
; localB -> hkjxgkhe23_idx_1 = ccq0efndwh -> VisionSensors . opticalFlow_data
[ 2 ] ; } else { localB -> hop4dus5mt_jz50ptvnrg = localP -> P_163 ; localB
-> nypkbmfphb_ldqodwenvz = localP -> P_62 ; localB -> hkjxgkhe23_idx_1 =
localP -> P_62 ; } localB -> injgfoez2n = ( real_T ) ( localB ->
hkjxgkhe23_idx_1 == localP -> P_1 ) * localDW -> fql4utazuo + ( real_T ) (
localB -> nypkbmfphb_ldqodwenvz == localP -> P_1 ) ; dwky5emhr0 = localB ->
kxnz4phnr4_nvsvtgkap4 + localP -> P_202 ; if ( dwky5emhr0 > localP -> P_46 )
{ localB -> f3ad2542be = localP -> P_203 ; } else { localB -> f3ad2542be =
dwky5emhr0 ; } if ( ( muSingleScalarAbs ( localB -> amlu45g12u_idx_0 ) >
localP -> P_24 ) || ( muSingleScalarAbs ( localB -> amlu45g12u_idx_1 ) >
localP -> P_25 ) ) { o0uasibb2v ( & localB -> n3bu3yuc32 , & localP ->
o0uasibb2vq ) ; } else if ( ( ( muSingleScalarAbs ( ccq0efndwh ->
VisionSensors . opticalFlow_data [ 0 ] ) > localP -> P_28 ) && (
muSingleScalarAbs ( localP -> P_156 * ccq0efndwh -> VisionSensors .
opticalFlow_data [ 0 ] - localB -> dz3nhptc13 [ 0 ] ) > localP -> P_26 ) ) ||
( ( muSingleScalarAbs ( localP -> P_157 * ccq0efndwh -> VisionSensors .
opticalFlow_data [ 1 ] - localB -> dz3nhptc13 [ 1 ] ) > localP -> P_27 ) && (
muSingleScalarAbs ( ccq0efndwh -> VisionSensors . opticalFlow_data [ 1 ] ) >
localP -> P_29 ) ) ) { o0uasibb2v ( & localB -> n3bu3yuc32 , & localP ->
actjduhucg ) ; } else if ( localB -> injgfoez2n > localP -> P_0 ) {
o0uasibb2v ( & localB -> n3bu3yuc32 , & localP -> aiusdqgq1o ) ; } else if (
muSingleScalarAbs ( localB -> hop4dus5mt_jz50ptvnrg ) > localP -> P_63 ) {
o0uasibb2v ( & localB -> n3bu3yuc32 , & localP -> lj1nf2ykx4 ) ; } else {
o0uasibb2v ( & localB -> n3bu3yuc32 , & localP -> p443cxznfl ) ; } if (
localP -> P_211 ) { for ( localB -> i = 0 ; localB -> i < 2 ; localB -> i ++
) { localB -> nypkbmfphb_ldqodwenvz = localB -> mzt1uypci3 [ localB -> i + 2
] ; localB -> dwunn3bi44_fqdqrf4qbc [ localB -> i ] = localB ->
nypkbmfphb_ldqodwenvz * localB -> mzt1uypci3 [ 2 ] + localB -> mzt1uypci3 [
localB -> i ] * localB -> mzt1uypci3 [ 0 ] ; localB -> dwunn3bi44_fqdqrf4qbc
[ localB -> i + 2 ] = localB -> nypkbmfphb_ldqodwenvz * localB -> mzt1uypci3
[ 3 ] + localB -> mzt1uypci3 [ localB -> i ] * localB -> mzt1uypci3 [ 1 ] ; }
} else { for ( localB -> i = 0 ; localB -> i < 2 ; localB -> i ++ ) { localB
-> dwunn3bi44_fqdqrf4qbc [ localB -> i ] = localB -> mzt1uypci3 [ localB -> i
] ; localB -> dwunn3bi44_fqdqrf4qbc [ localB -> i + 2 ] = localB ->
mzt1uypci3 [ localB -> i + 2 ] ; } } localB -> baixec1wg5_llw0u2ae0v [ 0 ] =
localB -> lgeyrynojq_idx_0 ; localB -> baixec1wg5_llw0u2ae0v [ 1 ] = localB
-> lgeyrynojq_idx_1 ; localB -> lgeyrynojq_idx_0 = localP -> P_65 [ 0 ] *
localB -> baixec1wg5_llw0u2ae0v [ 0 ] + localB -> baixec1wg5_llw0u2ae0v [ 1 ]
* localP -> P_65 [ 2 ] ; localB -> lgeyrynojq_idx_1 = localB ->
baixec1wg5_llw0u2ae0v [ 0 ] * localP -> P_65 [ 1 ] + localB ->
baixec1wg5_llw0u2ae0v [ 1 ] * localP -> P_65 [ 3 ] ; for ( localB -> i = 0 ;
localB -> i < 3 ; localB -> i ++ ) { localB -> lt2w3q5ili [ localB -> i ] = (
( localB -> b45ahf3s5y_cv5hdgrwft [ 3 * localB -> i + 1 ] * localB ->
gi5rqqmnns_jwzvbuczlb [ 1 ] + localB -> b45ahf3s5y_cv5hdgrwft [ 3 * localB ->
i ] * localB -> gi5rqqmnns_jwzvbuczlb [ 0 ] ) + localB ->
b45ahf3s5y_cv5hdgrwft [ 3 * localB -> i + 2 ] * localB -> acc1 ) + localP ->
P_79 [ localB -> i ] ; } localB -> finlzeqd1s_dhamdvybc1 = localB ->
lt2w3q5ili [ 2 ] ; localB -> nypkbmfphb_ldqodwenvz = localP -> P_66 [ 0 ] *
localB -> lt2w3q5ili [ 2 ] ; localB -> hkjxgkhe23_idx_1 = localP -> P_66 [ 1
] * localB -> lt2w3q5ili [ 2 ] ; jigbguekqc = bhbb4hzefz ; if ( jigbguekqc )
{ if ( ! localDW -> ozswztjljh ) { if ( rtmGetTaskTime ( accn4cnket , 0 ) !=
rtmGetTStart ( accn4cnket ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
accn4cnket -> _mdlRefSfcnS ) ; } localDW -> ozswztjljh = true ; } localB ->
lqa5qhltpn_guugdwf2m3 -= ( localP -> P_67 [ 0 ] * localB ->
baixec1wg5_llw0u2ae0v [ 0 ] + localP -> P_67 [ 1 ] * localB ->
baixec1wg5_llw0u2ae0v [ 1 ] ) + localP -> P_71 * localB ->
finlzeqd1s_dhamdvybc1 ; localB -> azpx0v1un2 [ 0 ] = localB -> cwam1jmb4d [ 0
] * localB -> lqa5qhltpn_guugdwf2m3 ; localB -> azpx0v1un2 [ 1 ] = localB ->
cwam1jmb4d [ 1 ] * localB -> lqa5qhltpn_guugdwf2m3 ; srUpdateBC ( localDW ->
l0d3hv0vie ) ; } else if ( localDW -> ozswztjljh ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ;
localB -> azpx0v1un2 [ 0 ] = localP -> P_53 ; localB -> azpx0v1un2 [ 1 ] =
localP -> P_53 ; localDW -> ozswztjljh = false ; } localB -> ejocj11n0h [ 0 ]
= ( localB -> nypkbmfphb_ldqodwenvz + localB -> lgeyrynojq_idx_0 ) + localB
-> azpx0v1un2 [ 0 ] ; localB -> ejocj11n0h [ 1 ] = ( localB ->
hkjxgkhe23_idx_1 + localB -> lgeyrynojq_idx_1 ) + localB -> azpx0v1un2 [ 1 ]
; localB -> kywezacruu_dhmrxtyqop [ 0 ] = localB -> jam0bbyqk0 ; localB ->
kywezacruu_dhmrxtyqop [ 1 ] = localB -> li0sey3j1t ; localB ->
kywezacruu_dhmrxtyqop [ 2 ] = localB -> hnpiwdpoj2 ; cirlo3fock ( localB ->
dmkoj05idu , localP -> P_212 ) ; localB -> bahayusppm_lnjdk5wtww [ 0 ] =
localB -> cwam1jmb4d_nuebgmauvi [ 0 ] ; localB -> bahayusppm_lnjdk5wtww [ 1 ]
= localB -> cwam1jmb4d_nuebgmauvi [ 1 ] ; localB -> amlu45g12u_idx_0 = localP
-> P_164 [ 0 ] * localB -> bahayusppm_lnjdk5wtww [ 0 ] + localB ->
bahayusppm_lnjdk5wtww [ 1 ] * localP -> P_164 [ 2 ] ; localB ->
amlu45g12u_idx_1 = localB -> bahayusppm_lnjdk5wtww [ 0 ] * localP -> P_164 [
1 ] + localB -> bahayusppm_lnjdk5wtww [ 1 ] * localP -> P_164 [ 3 ] ; localB
-> kvh04n0zhj_icdfyazkhu = localB -> li0sey3j1t ; localB -> kpp0n2hpyr_idx_2
= localP -> P_165 [ 0 ] * localB -> kvh04n0zhj_icdfyazkhu ; localB ->
eu2eec20kt_al00mdgrv4 = localP -> P_165 [ 1 ] * localB ->
kvh04n0zhj_icdfyazkhu ; jfzyx4ctma = pcr4qjwuet ; h4zka13z2i ( accn4cnket ,
jfzyx4ctma , localB -> j0pu4cjzeb , localB -> ewppo5cuta_o4f35lbcvx , localP
-> P_166 , localB -> bahayusppm_lnjdk5wtww , localP -> P_167 , localB ->
kvh04n0zhj_icdfyazkhu , & localB -> h4zka13z2ik , & localDW -> h4zka13z2ik ,
& localP -> h4zka13z2ik ) ; localB -> nzxxkteuhv [ 0 ] = ( localB ->
kpp0n2hpyr_idx_2 + localB -> amlu45g12u_idx_0 ) + localB -> h4zka13z2ik .
cy3fygubmc [ 0 ] ; localB -> nzxxkteuhv [ 1 ] = ( localB ->
eu2eec20kt_al00mdgrv4 + localB -> amlu45g12u_idx_1 ) + localB -> h4zka13z2ik
. cy3fygubmc [ 1 ] ; cirlo3fock ( localB -> lg5arpf5ue , localP -> P_213 ) ;
localB -> nbtfbjeh04_hv2ho1zopz [ 0 ] = localB -> gsawacrzqm_bsqwvugooi [ 0 ]
; localB -> nbtfbjeh04_hv2ho1zopz [ 1 ] = localB -> gsawacrzqm_bsqwvugooi [ 1
] ; localB -> amlu45g12u_idx_0 = localP -> P_175 [ 0 ] * localB ->
nbtfbjeh04_hv2ho1zopz [ 0 ] + localB -> nbtfbjeh04_hv2ho1zopz [ 1 ] * localP
-> P_175 [ 2 ] ; localB -> amlu45g12u_idx_1 = localB -> nbtfbjeh04_hv2ho1zopz
[ 0 ] * localP -> P_175 [ 1 ] + localB -> nbtfbjeh04_hv2ho1zopz [ 1 ] *
localP -> P_175 [ 3 ] ; apgfnvnkio = localB -> jam0bbyqk0 ; localB ->
kpp0n2hpyr_idx_2 = localP -> P_176 [ 0 ] * apgfnvnkio ; localB ->
eu2eec20kt_al00mdgrv4 = localP -> P_176 [ 1 ] * apgfnvnkio ; mhypci5zya =
mnvyotict5 ; h4zka13z2i ( accn4cnket , mhypci5zya , localB -> hxsoeyanux ,
localB -> jx0gtxwpne_nyxm0bsxsn , localP -> P_177 , localB ->
nbtfbjeh04_hv2ho1zopz , localP -> P_178 , apgfnvnkio , & localB -> nyojmurzoq
, & localDW -> nyojmurzoq , & localP -> nyojmurzoq ) ; localB -> dnr1mtcc1t [
0 ] = ( localB -> kpp0n2hpyr_idx_2 + localB -> amlu45g12u_idx_0 ) + localB ->
nyojmurzoq . cy3fygubmc [ 0 ] ; localB -> dnr1mtcc1t [ 1 ] = ( localB ->
eu2eec20kt_al00mdgrv4 + localB -> amlu45g12u_idx_1 ) + localB -> nyojmurzoq .
cy3fygubmc [ 1 ] ; gvwdejllmw = localB -> n0z1n3jefd_oyypvi4boh + localP ->
P_204 ; if ( gvwdejllmw > localP -> P_47 ) { localB -> ba3p2jichr = localP ->
P_205 ; } else { localB -> ba3p2jichr = gvwdejllmw ; } muSingleScalarSinCos (
localB -> fi3vvh5454_bjvjhhzy4i , & localB -> amlu45g12u_idx_0 , & localB ->
amlu45g12u_idx_1 ) ; muSingleScalarSinCos ( localB -> ic244jc1gm_idx_1 , &
localB -> mdcekwyyyu_idx_1 , & localB -> ohfdd3d0o2_idx_1 ) ;
muSingleScalarSinCos ( localB -> ll554evhck_jzx3amusab , & localB ->
mdcekwyyyu_idx_2 , & localB -> ohfdd3d0o2_idx_2 ) ; localB ->
b45ahf3s5y_cv5hdgrwft [ 0 ] = localB -> amlu45g12u_idx_1 * localB ->
ohfdd3d0o2_idx_1 ; localB -> avl4esggii_ju13rw2h0m = localB ->
mdcekwyyyu_idx_1 * localB -> mdcekwyyyu_idx_2 ; localB ->
b45ahf3s5y_cv5hdgrwft [ 1 ] = localB -> avl4esggii_ju13rw2h0m * localB ->
amlu45g12u_idx_1 - localB -> amlu45g12u_idx_0 * localB -> ohfdd3d0o2_idx_2 ;
localB -> b45ahf3s5y_tmp = localB -> mdcekwyyyu_idx_1 * localB ->
ohfdd3d0o2_idx_2 ; localB -> b45ahf3s5y_cv5hdgrwft [ 2 ] = localB ->
b45ahf3s5y_tmp * localB -> amlu45g12u_idx_1 + localB -> amlu45g12u_idx_0 *
localB -> mdcekwyyyu_idx_2 ; localB -> b45ahf3s5y_cv5hdgrwft [ 3 ] = localB
-> amlu45g12u_idx_0 * localB -> ohfdd3d0o2_idx_1 ; localB ->
b45ahf3s5y_cv5hdgrwft [ 4 ] = localB -> avl4esggii_ju13rw2h0m * localB ->
amlu45g12u_idx_0 + localB -> amlu45g12u_idx_1 * localB -> ohfdd3d0o2_idx_2 ;
localB -> b45ahf3s5y_cv5hdgrwft [ 5 ] = localB -> b45ahf3s5y_tmp * localB ->
amlu45g12u_idx_0 - localB -> amlu45g12u_idx_1 * localB -> mdcekwyyyu_idx_2 ;
localB -> b45ahf3s5y_cv5hdgrwft [ 6 ] = - localB -> mdcekwyyyu_idx_1 ; localB
-> b45ahf3s5y_cv5hdgrwft [ 7 ] = localB -> ohfdd3d0o2_idx_1 * localB ->
mdcekwyyyu_idx_2 ; localB -> b45ahf3s5y_cv5hdgrwft [ 8 ] = localB ->
ohfdd3d0o2_idx_1 * localB -> ohfdd3d0o2_idx_2 ; bhbb4hzefz = ( localB ->
nz2ewbvzet_ezqlmfzvpq <= localP -> P_32 ) ; pcr4qjwuet = ( ( localB ->
m4p4lyh553_idx_0 != localP -> P_33 ) || ( localB -> ojk311owvo_fdinthrxmb !=
localP -> P_34 ) ) ; for ( localB -> i = 0 ; localB -> i < 3 ; localB -> i ++
) { localB -> bkymt1dvwc_g2mlkqadfk [ localB -> i ] = localB ->
gi5rqqmnns_jwzvbuczlb [ localB -> i ] - ( ( localB -> b45ahf3s5y_cv5hdgrwft [
localB -> i + 3 ] * localP -> P_87 [ 1 ] + localB -> b45ahf3s5y_cv5hdgrwft [
localB -> i ] * localP -> P_87 [ 0 ] ) + localB -> b45ahf3s5y_cv5hdgrwft [
localB -> i + 6 ] * localP -> P_87 [ 2 ] ) ; } localB -> eqi4oxtzgi [ 0 ] = (
real32_T ) ( localP -> P_61 * localB -> bkymt1dvwc_g2mlkqadfk [ 0 ] ) * (
real32_T ) pcr4qjwuet * ( real32_T ) bhbb4hzefz ; localB -> eqi4oxtzgi [ 1 ]
= ( real32_T ) ( localP -> P_61 * localB -> bkymt1dvwc_g2mlkqadfk [ 1 ] ) * (
real32_T ) pcr4qjwuet * ( real32_T ) bhbb4hzefz ; if ( localP -> P_214 ) {
for ( localB -> i = 0 ; localB -> i < 4 ; localB -> i ++ ) { for ( localB ->
cff = 0 ; localB -> cff < 4 ; localB -> cff ++ ) { localB ->
a2yqbcqam0_cxarnvbvui [ localB -> i + ( localB -> cff << 2 ) ] = ( ( localB
-> fgvyovkpwf [ localB -> i + 4 ] * localB -> fgvyovkpwf [ localB -> cff + 4
] + localB -> fgvyovkpwf [ localB -> i ] * localB -> fgvyovkpwf [ localB ->
cff ] ) + localB -> fgvyovkpwf [ localB -> i + 8 ] * localB -> fgvyovkpwf [
localB -> cff + 8 ] ) + localB -> fgvyovkpwf [ localB -> i + 12 ] * localB ->
fgvyovkpwf [ localB -> cff + 12 ] ; } } } else { for ( localB -> i = 0 ;
localB -> i < 4 ; localB -> i ++ ) { for ( localB -> cff = 0 ; localB -> cff
< 4 ; localB -> cff ++ ) { localB -> a2yqbcqam0_cxarnvbvui [ localB -> i + (
localB -> cff << 2 ) ] = localB -> fgvyovkpwf [ ( localB -> cff << 2 ) +
localB -> i ] ; } } } localB -> mumoqxms2i_ppxrqq0gsf [ 0 ] = localB ->
fb2gutbykh_merlcviukg [ 0 ] ; localB -> mumoqxms2i_ppxrqq0gsf [ 1 ] = localB
-> fb2gutbykh_merlcviukg [ 1 ] ; localB -> mumoqxms2i_ppxrqq0gsf [ 2 ] =
localB -> fb2gutbykh_merlcviukg [ 2 ] ; localB -> mumoqxms2i_ppxrqq0gsf [ 3 ]
= localB -> fb2gutbykh_merlcviukg [ 3 ] ; for ( localB -> i = 0 ; localB -> i
< 4 ; localB -> i ++ ) { localB -> fb2gutbykh_merlcviukg [ localB -> i ] = (
( localP -> P_188 [ localB -> i + 4 ] * localB -> mumoqxms2i_ppxrqq0gsf [ 1 ]
+ localP -> P_188 [ localB -> i ] * localB -> mumoqxms2i_ppxrqq0gsf [ 0 ] ) +
localP -> P_188 [ localB -> i + 8 ] * localB -> mumoqxms2i_ppxrqq0gsf [ 2 ] )
+ localP -> P_188 [ localB -> i + 12 ] * localB -> mumoqxms2i_ppxrqq0gsf [ 3
] ; } localB -> amlu45g12u_idx_0 = localB -> eqi4oxtzgi [ 0 ] ; localB ->
amlu45g12u_idx_1 = localB -> eqi4oxtzgi [ 1 ] ; for ( localB -> i = 0 ;
localB -> i < 4 ; localB -> i ++ ) { localB -> giqydtq0ch_nz4o0shxby [ localB
-> i ] = localP -> P_189 [ localB -> i + 4 ] * localB -> eqi4oxtzgi [ 1 ] +
localP -> P_189 [ localB -> i ] * localB -> eqi4oxtzgi [ 0 ] ; } oljazbhpwg =
h2thm5amik ; if ( oljazbhpwg ) { if ( ! localDW -> be4ujsoocn ) { if (
rtmGetTaskTime ( accn4cnket , 0 ) != rtmGetTStart ( accn4cnket ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ; }
localDW -> be4ujsoocn = true ; } for ( localB -> i = 0 ; localB -> i < 2 ;
localB -> i ++ ) { localB -> jrif0eh3si_owjr1h1vqy [ localB -> i ] = ( (
localP -> P_190 [ localB -> i + 2 ] * localB -> mumoqxms2i_ppxrqq0gsf [ 1 ] +
localP -> P_190 [ localB -> i ] * localB -> mumoqxms2i_ppxrqq0gsf [ 0 ] ) +
localP -> P_190 [ localB -> i + 4 ] * localB -> mumoqxms2i_ppxrqq0gsf [ 2 ] )
+ localP -> P_190 [ localB -> i + 6 ] * localB -> mumoqxms2i_ppxrqq0gsf [ 3 ]
; } localB -> nz2ewbvzet_ezqlmfzvpq = localB -> fgsro4huaj_lxo5edjg3c [ 0 ] -
( ( localP -> P_191 [ 0 ] * localB -> amlu45g12u_idx_0 + localP -> P_191 [ 2
] * localB -> amlu45g12u_idx_1 ) + localB -> jrif0eh3si_owjr1h1vqy [ 0 ] ) ;
localB -> ai5impjpjd_idx_0 = localB -> fgsro4huaj_lxo5edjg3c [ 1 ] - ( (
localP -> P_191 [ 1 ] * localB -> amlu45g12u_idx_0 + localP -> P_191 [ 3 ] *
localB -> amlu45g12u_idx_1 ) + localB -> jrif0eh3si_owjr1h1vqy [ 1 ] ) ; for
( localB -> i = 0 ; localB -> i < 4 ; localB -> i ++ ) { localB -> j4i1uknzzt
[ localB -> i ] = 0.0F ; localB -> j4i1uknzzt [ localB -> i ] += localB ->
itfc501qfv [ localB -> i ] * localB -> nz2ewbvzet_ezqlmfzvpq ; localB ->
j4i1uknzzt [ localB -> i ] += localB -> itfc501qfv [ localB -> i + 4 ] *
localB -> ai5impjpjd_idx_0 ; } srUpdateBC ( localDW -> pqmuncbcz5 ) ; } else
if ( localDW -> be4ujsoocn ) { ssSetBlockStateForSolverChangedAtMajorStep (
accn4cnket -> _mdlRefSfcnS ) ; localB -> j4i1uknzzt [ 0 ] = localP -> P_97 ;
localB -> j4i1uknzzt [ 1 ] = localP -> P_97 ; localB -> j4i1uknzzt [ 2 ] =
localP -> P_97 ; localB -> j4i1uknzzt [ 3 ] = localP -> P_97 ; localDW ->
be4ujsoocn = false ; } localB -> gyjxisztxe [ 0 ] = ( localB ->
giqydtq0ch_nz4o0shxby [ 0 ] + localB -> fb2gutbykh_merlcviukg [ 0 ] ) +
localB -> j4i1uknzzt [ 0 ] ; localB -> gyjxisztxe [ 1 ] = ( localB ->
giqydtq0ch_nz4o0shxby [ 1 ] + localB -> fb2gutbykh_merlcviukg [ 1 ] ) +
localB -> j4i1uknzzt [ 1 ] ; localB -> gyjxisztxe [ 2 ] = ( localB ->
giqydtq0ch_nz4o0shxby [ 2 ] + localB -> fb2gutbykh_merlcviukg [ 2 ] ) +
localB -> j4i1uknzzt [ 2 ] ; localB -> gyjxisztxe [ 3 ] = ( localB ->
giqydtq0ch_nz4o0shxby [ 3 ] + localB -> fb2gutbykh_merlcviukg [ 3 ] ) +
localB -> j4i1uknzzt [ 3 ] ; euaesrb2hm = kmfks4hb13 + localP -> P_206 ; if (
euaesrb2hm > localP -> P_48 ) { localB -> of0nbo13v0 = localP -> P_207 ; }
else { localB -> of0nbo13v0 = euaesrb2hm ; } muSingleScalarSinCos ( localB ->
fi3vvh5454_bjvjhhzy4i , & localB -> nz2ewbvzet_ezqlmfzvpq , & localB ->
ai5impjpjd_idx_0 ) ; muSingleScalarSinCos ( localB -> ic244jc1gm_idx_1 , &
localB -> fi3vvh5454_bjvjhhzy4i , & localB -> ai5impjpjd_idx_1 ) ;
muSingleScalarSinCos ( localB -> ll554evhck_jzx3amusab , & localB ->
eviwwiatp3_idx_2 , & localB -> ai5impjpjd_idx_2 ) ; localB ->
b45ahf3s5y_cv5hdgrwft [ 0 ] = localB -> ai5impjpjd_idx_0 * localB ->
ai5impjpjd_idx_1 ; localB -> avl4esggii_ju13rw2h0m = localB ->
fi3vvh5454_bjvjhhzy4i * localB -> eviwwiatp3_idx_2 ; localB ->
b45ahf3s5y_cv5hdgrwft [ 1 ] = localB -> avl4esggii_ju13rw2h0m * localB ->
ai5impjpjd_idx_0 - localB -> nz2ewbvzet_ezqlmfzvpq * localB ->
ai5impjpjd_idx_2 ; localB -> b45ahf3s5y_tmp = localB -> fi3vvh5454_bjvjhhzy4i
* localB -> ai5impjpjd_idx_2 ; localB -> b45ahf3s5y_cv5hdgrwft [ 2 ] = localB
-> b45ahf3s5y_tmp * localB -> ai5impjpjd_idx_0 + localB ->
nz2ewbvzet_ezqlmfzvpq * localB -> eviwwiatp3_idx_2 ; localB ->
b45ahf3s5y_cv5hdgrwft [ 3 ] = localB -> nz2ewbvzet_ezqlmfzvpq * localB ->
ai5impjpjd_idx_1 ; localB -> b45ahf3s5y_cv5hdgrwft [ 4 ] = localB ->
avl4esggii_ju13rw2h0m * localB -> nz2ewbvzet_ezqlmfzvpq + localB ->
ai5impjpjd_idx_0 * localB -> ai5impjpjd_idx_2 ; localB ->
b45ahf3s5y_cv5hdgrwft [ 5 ] = localB -> b45ahf3s5y_tmp * localB ->
nz2ewbvzet_ezqlmfzvpq - localB -> ai5impjpjd_idx_0 * localB ->
eviwwiatp3_idx_2 ; localB -> b45ahf3s5y_cv5hdgrwft [ 6 ] = - localB ->
fi3vvh5454_bjvjhhzy4i ; localB -> b45ahf3s5y_cv5hdgrwft [ 7 ] = localB ->
ai5impjpjd_idx_1 * localB -> eviwwiatp3_idx_2 ; localB ->
b45ahf3s5y_cv5hdgrwft [ 8 ] = localB -> ai5impjpjd_idx_1 * localB ->
ai5impjpjd_idx_2 ; localB -> amlu45g12u_idx_0 = localB -> dz3nhptc13 [ 0 ] ;
localB -> amlu45g12u_idx_1 = localB -> dz3nhptc13 [ 1 ] ; for ( localB -> i =
0 ; localB -> i < 3 ; localB -> i ++ ) { localB -> abb5hsfzx0 [ localB -> i ]
= 0.0F ; localB -> abb5hsfzx0 [ localB -> i ] += localB ->
b45ahf3s5y_cv5hdgrwft [ 3 * localB -> i ] * localB -> amlu45g12u_idx_0 ;
localB -> abb5hsfzx0 [ localB -> i ] += localB -> b45ahf3s5y_cv5hdgrwft [ 3 *
localB -> i + 1 ] * localB -> amlu45g12u_idx_1 ; localB -> abb5hsfzx0 [
localB -> i ] += localB -> b45ahf3s5y_cv5hdgrwft [ 3 * localB -> i + 2 ] *
localB -> el1oeuwfff_idx_2 ; } } void kbyaroyowhTID2 ( mvrhhqav5d * localB ,
f1jw0s1fa5 * localP ) { int_T tid = 0 ; real_T mbr3enzskf ; real32_T
aui42zrdgy [ 4 ] ; real32_T dv1wsrv4wx ; real32_T kfhkxygkuq ; real32_T
dg2axrn5tf ; int32_T i ; memcpy ( & localB -> g3jppbwsml [ 0 ] , & localP ->
P_160 [ 0 ] , sizeof ( real32_T ) << 4U ) ; localB -> cwam1jmb4d [ 0 ] =
localP -> P_69 [ 0 ] ; localB -> cwam1jmb4d [ 1 ] = localP -> P_69 [ 1 ] ;
localB -> cibucofkti [ 0 ] = localP -> P_70 [ 0 ] ; localB -> cibucofkti [ 1
] = localP -> P_70 [ 1 ] ; mbr3enzskf = 0.0 ; localB -> mzt1uypci3 [ 0 ] =
localP -> P_68 [ 0 ] ; localB -> mzt1uypci3 [ 1 ] = localP -> P_68 [ 1 ] ;
localB -> mzt1uypci3 [ 2 ] = localP -> P_68 [ 2 ] ; localB -> mzt1uypci3 [ 3
] = localP -> P_68 [ 3 ] ; aui42zrdgy [ 0 ] = ( real32_T ) localP -> P_72 [ 0
] ; aui42zrdgy [ 1 ] = ( real32_T ) localP -> P_72 [ 1 ] ; aui42zrdgy [ 2 ] =
( real32_T ) localP -> P_72 [ 2 ] ; aui42zrdgy [ 3 ] = ( real32_T ) localP ->
P_72 [ 3 ] ; localB -> jrif0eh3si [ 0 ] = localP -> P_78 [ 0 ] ; localB ->
jrif0eh3si [ 1 ] = localP -> P_78 [ 1 ] ; localB -> j0pu4cjzeb [ 0 ] = (
real32_T ) localP -> P_81 [ 0 ] ; localB -> j0pu4cjzeb [ 1 ] = ( real32_T )
localP -> P_81 [ 1 ] ; localB -> hnpiwdpoj2_mbvzarwird [ 0 ] = ( real32_T )
localP -> P_82 [ 0 ] ; localB -> hnpiwdpoj2_mbvzarwird [ 1 ] = ( real32_T )
localP -> P_82 [ 1 ] ; dv1wsrv4wx = 0.0F ; localB -> dmkoj05idu [ 0 ] = (
real32_T ) localP -> P_80 [ 0 ] ; localB -> dmkoj05idu [ 1 ] = ( real32_T )
localP -> P_80 [ 1 ] ; localB -> dmkoj05idu [ 2 ] = ( real32_T ) localP ->
P_80 [ 2 ] ; localB -> dmkoj05idu [ 3 ] = ( real32_T ) localP -> P_80 [ 3 ] ;
localB -> orkhsyifkf [ 0 ] = localP -> P_174 [ 0 ] ; localB -> orkhsyifkf [ 1
] = localP -> P_174 [ 1 ] ; localB -> hxsoeyanux [ 0 ] = ( real32_T ) localP
-> P_84 [ 0 ] ; localB -> hxsoeyanux [ 1 ] = ( real32_T ) localP -> P_84 [ 1
] ; localB -> cy2qrqn1lj [ 0 ] = ( real32_T ) localP -> P_85 [ 0 ] ; localB
-> cy2qrqn1lj [ 1 ] = ( real32_T ) localP -> P_85 [ 1 ] ; kfhkxygkuq = 0.0F ;
localB -> lg5arpf5ue [ 0 ] = ( real32_T ) localP -> P_83 [ 0 ] ; localB ->
lg5arpf5ue [ 1 ] = ( real32_T ) localP -> P_83 [ 1 ] ; localB -> lg5arpf5ue [
2 ] = ( real32_T ) localP -> P_83 [ 2 ] ; localB -> lg5arpf5ue [ 3 ] = (
real32_T ) localP -> P_83 [ 3 ] ; localB -> djui0aicgi [ 0 ] = localP ->
P_185 [ 0 ] ; localB -> djui0aicgi [ 1 ] = localP -> P_185 [ 1 ] ; for ( i =
0 ; i < 8 ; i ++ ) { localB -> itfc501qfv [ i ] = ( real32_T ) localP -> P_89
[ i ] ; } for ( i = 0 ; i < 8 ; i ++ ) { localB -> lmcv44d02w [ i ] = (
real32_T ) localP -> P_90 [ i ] ; } dg2axrn5tf = 0.0F ; for ( i = 0 ; i < 16
; i ++ ) { localB -> fgvyovkpwf [ i ] = ( real32_T ) localP -> P_88 [ i ] ; }
memcpy ( & localB -> ibi2piagvt_bhxxfovxdy [ 0 ] , & localP -> P_192 [ 0 ] ,
sizeof ( real32_T ) << 4U ) ; localB -> ctthzagufv [ 0 ] = localP -> P_198 [
0 ] ; localB -> ctthzagufv [ 1 ] = localP -> P_198 [ 1 ] ; localB ->
ctthzagufv [ 2 ] = localP -> P_198 [ 2 ] ; localB -> ctthzagufv [ 3 ] =
localP -> P_198 [ 3 ] ; } void k1wwquvgrg ( mvrhhqav5d * localB , djfqfeyfr2
* localDW , f1jw0s1fa5 * localP ) { int32_T k ; int32_T memOffset ; localDW
-> ioroua40sf = ( int8_T ) localP -> P_215 ; localDW -> ggktuboh3w = localB
-> cb2kpcmxmf [ 0 ] ; localDW -> dfsxdbhpqk = false ; localDW -> n3c1i00bxy [
0 ] += localP -> P_101 * localB -> abb5hsfzx0 [ 0 ] ; localDW -> dudxvyaali [
0 ] = localB -> ejocj11n0h [ 0 ] ; localDW -> nbfzg3mofs [ 2 ] = localDW ->
nbfzg3mofs [ 1 ] ; localDW -> bgsd4hwxvl [ 2 ] = localDW -> bgsd4hwxvl [ 1 ]
; localDW -> n3c1i00bxy [ 1 ] += localP -> P_101 * localB -> abb5hsfzx0 [ 1 ]
; localDW -> dudxvyaali [ 1 ] = localB -> ejocj11n0h [ 1 ] ; localDW ->
nbfzg3mofs [ 1 ] = localDW -> nbfzg3mofs [ 0 ] ; localDW -> bgsd4hwxvl [ 1 ]
= localDW -> bgsd4hwxvl [ 0 ] ; localDW -> nbfzg3mofs [ 0 ] = localDW ->
j33klwenqs ; localDW -> bgsd4hwxvl [ 0 ] = localDW -> hydw3zxfzv ; localDW ->
dvmcgiwvlg += localP -> P_108 * localB -> hnpiwdpoj2 ; localDW -> nihxmtnwn0
-- ; if ( localDW -> nihxmtnwn0 < 0 ) { localDW -> nihxmtnwn0 = 4 ; } localDW
-> m3yo5bm0br [ localDW -> nihxmtnwn0 ] = localB -> pgvax4h34w [ 0 ] ;
localDW -> m3yo5bm0br [ localDW -> nihxmtnwn0 + 5 ] = localB -> pgvax4h34w [
1 ] ; localDW -> m3yo5bm0br [ localDW -> nihxmtnwn0 + 10 ] = localB ->
pgvax4h34w [ 2 ] ; localDW -> bbdsjay1cb = false ; localDW -> cyeg151nql =
false ; localDW -> johlzfhbo0 [ 0 ] = localB -> nzxxkteuhv [ 0 ] ; localDW ->
dpd1kuq4ti [ 0 ] = localB -> dnr1mtcc1t [ 0 ] ; localDW -> johlzfhbo0 [ 1 ] =
localB -> nzxxkteuhv [ 1 ] ; localDW -> dpd1kuq4ti [ 1 ] = localB ->
dnr1mtcc1t [ 1 ] ; localDW -> h0kguh0g04 = localB -> of0nbo13v0 ; localDW ->
bkpwlcggki = localDW -> ltcjlexrjv ; localDW -> mlypgyrlj0 = localDW ->
akyvzynr2c ; localDW -> mcs0s1fmhj = localB -> ba3p2jichr ; localDW ->
dtlx1df0zm = false ; localDW -> gawfgxhxnt [ 4 ] = localDW -> gawfgxhxnt [ 3
] ; localDW -> fytbq2ia43 [ 0 ] = localB -> gyjxisztxe [ 0 ] ; localDW ->
gawfgxhxnt [ 3 ] = localDW -> gawfgxhxnt [ 2 ] ; localDW -> fytbq2ia43 [ 1 ]
= localB -> gyjxisztxe [ 1 ] ; localDW -> gawfgxhxnt [ 2 ] = localDW ->
gawfgxhxnt [ 1 ] ; localDW -> fytbq2ia43 [ 2 ] = localB -> gyjxisztxe [ 2 ] ;
localDW -> gawfgxhxnt [ 1 ] = localDW -> gawfgxhxnt [ 0 ] ; localDW ->
fytbq2ia43 [ 3 ] = localB -> gyjxisztxe [ 3 ] ; localDW -> gawfgxhxnt [ 0 ] =
localDW -> cijvfuftv0 ; for ( k = 0 ; k < 2 ; k ++ ) { memOffset = k * 5 ;
localDW -> hwg5o53ida [ memOffset + 4 ] = localDW -> hwg5o53ida [ memOffset +
3 ] ; localDW -> hwg5o53ida [ memOffset + 3 ] = localDW -> hwg5o53ida [
memOffset + 2 ] ; localDW -> hwg5o53ida [ memOffset + 2 ] = localDW ->
hwg5o53ida [ memOffset + 1 ] ; localDW -> hwg5o53ida [ memOffset + 1 ] =
localDW -> hwg5o53ida [ memOffset ] ; localDW -> hwg5o53ida [ memOffset ] =
localDW -> khvqumkvsg [ k ] ; localDW -> opm4ouvgho [ k ] = localB ->
k20gadexm3 [ k ] ; localDW -> lbqu3u2lvu [ k ] = localB -> dz3nhptc13 [ k ] ;
localDW -> mar1fo4k2g [ k ] = localB -> dz3nhptc13 [ k ] ; } localDW ->
jbinyylhej = localB -> lmcv44d02w_cl54gopm0x ; localDW -> ic2lljdnru +=
localP -> P_131 * localB -> b45fpbx2d0 ; if ( localDW -> ic2lljdnru >= localP
-> P_133 ) { localDW -> ic2lljdnru = localP -> P_133 ; } else if ( localDW ->
ic2lljdnru <= localP -> P_134 ) { localDW -> ic2lljdnru = localP -> P_134 ; }
localDW -> ayxp4yzgmp = ( int8_T ) localB -> jg2mvzzkfu ; localDW ->
i2waz4wcdh [ 0 ] += localP -> P_139 * localB -> lxqm54wszc [ 0 ] ; localDW ->
jomzm1efxy [ 0 ] = localDW -> ebu51u4psc [ 0 ] ; localDW -> j1ya5i3lju [ 0 ]
+= localP -> P_143 * localB -> h54nqgl2zi [ 0 ] ; localDW -> fmgblzk1yx [ 0 ]
+= localP -> P_144 * localB -> aimulbgnv1 [ 0 ] ; localDW -> i2waz4wcdh [ 1 ]
+= localP -> P_139 * localB -> lxqm54wszc [ 1 ] ; localDW -> jomzm1efxy [ 1 ]
= localDW -> ebu51u4psc [ 1 ] ; localDW -> j1ya5i3lju [ 1 ] += localP ->
P_143 * localB -> h54nqgl2zi [ 1 ] ; localDW -> fmgblzk1yx [ 1 ] += localP ->
P_144 * localB -> aimulbgnv1 [ 1 ] ; localDW -> elivplttop += localP -> P_148
* localB -> msw4j1f5a5 ; localDW -> ltea43kayw = localB -> f3ad2542be ;
localDW -> fql4utazuo = localB -> injgfoez2n ; } void fhi0bdp14b ( ipf5ube4r0
* const accn4cnket , djfqfeyfr2 * localDW ) { if ( ( ssGetSimMode (
accn4cnket -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( accn4cnket ->
_mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> puq03cpvbg .
AQHandles ) { sdiTerminateStreaming ( & localDW -> puq03cpvbg . AQHandles ) ;
} } } void dw0zngvhyq ( void ) { ipf5ube4r0 * const accn4cnket = & (
lhjbdsj2rj . rtm ) ; kbhhz5squ3 ( accn4cnket , & dqykr4eggmg . kbyaroyowhq )
; } void ha1ipjbq54 ( uint8_T * kpu3cubhfr ) { dqykr4eggmg . ckpn2rcven =
b1hr2q0zjh . P_8 ; dqykr4eggmg . pqwhhdrmxf = b1hr2q0zjh . P_9 ; dqykr4eggmg
. h32dngvhjs = b1hr2q0zjh . P_10 ; dqykr4eggmg . ohjsr0fdmb = b1hr2q0zjh .
P_11 ; dqykr4eggmg . irila1varz = b1hr2q0zjh . P_12 ; isgzdh2vbt ( &
ksm0js2nhsy . kbyaroyowhq , & dqykr4eggmg . kbyaroyowhq , & b1hr2q0zjh .
kbyaroyowhq ) ; * kpu3cubhfr = ksm0js2nhsy . kbyaroyowhq . n3bu3yuc32 ; }
void gwlyno50ln ( void ) { dqykr4eggmg . ckpn2rcven = b1hr2q0zjh . P_8 ;
dqykr4eggmg . pqwhhdrmxf = b1hr2q0zjh . P_9 ; dqykr4eggmg . h32dngvhjs =
b1hr2q0zjh . P_10 ; dqykr4eggmg . ohjsr0fdmb = b1hr2q0zjh . P_11 ;
dqykr4eggmg . irila1varz = b1hr2q0zjh . P_12 ; juik4zosxw ( & ksm0js2nhsy .
kbyaroyowhq , & dqykr4eggmg . kbyaroyowhq , & b1hr2q0zjh . kbyaroyowhq ) ; }
void bog0frvixl ( void ) { fxr1m3qcll ( & ksm0js2nhsy . kbyaroyowhq , &
dqykr4eggmg . kbyaroyowhq , & b1hr2q0zjh . kbyaroyowhq ) ; } void k3yxem35zg
( void ) { dqykr4eggmg . fsrvgfz5zp = true ; dqykr4eggmg . pzwjftbl2i .
isInitialized = 1 ; } void flightControlSystemTID0 ( const SensorsBus *
js1rsjut1v , real32_T mfhybcoy2f [ 4 ] , uint8_T * kpu3cubhfr ) { ipf5ube4r0
* const accn4cnket = & ( lhjbdsj2rj . rtm ) ; boolean_T lipfoa0ibb ;
ksm0js2nhsy . keihx2tuyo_mbvzarwird = dqykr4eggmg . ckpn2rcven ; ksm0js2nhsy
. cmhtlqhfow_cl54gopm0x = dqykr4eggmg . pqwhhdrmxf ; ksm0js2nhsy .
kcdmr5avpw_kkiq3xxxve = dqykr4eggmg . h32dngvhjs ; ksm0js2nhsy .
dtfvk0dpxt_cxarnvbvui = dqykr4eggmg . ohjsr0fdmb ; lipfoa0ibb = dqykr4eggmg .
irila1varz ; kbyaroyowh ( accn4cnket , js1rsjut1v , ksm0js2nhsy .
keihx2tuyo_mbvzarwird , ksm0js2nhsy . dtfvk0dpxt_cxarnvbvui , ksm0js2nhsy .
cmhtlqhfow_cl54gopm0x , ksm0js2nhsy . kcdmr5avpw_kkiq3xxxve , lipfoa0ibb , &
ksm0js2nhsy . kbyaroyowhq , & dqykr4eggmg . kbyaroyowhq , & b1hr2q0zjh .
kbyaroyowhq , & f51itwtzkqf . kbyaroyowhq ) ; mfhybcoy2f [ 0 ] = ksm0js2nhsy
. kbyaroyowhq . e5n3bt555f [ 0 ] ; mfhybcoy2f [ 1 ] = ksm0js2nhsy .
kbyaroyowhq . e5n3bt555f [ 1 ] ; mfhybcoy2f [ 2 ] = ksm0js2nhsy . kbyaroyowhq
. e5n3bt555f [ 2 ] ; mfhybcoy2f [ 3 ] = ksm0js2nhsy . kbyaroyowhq .
e5n3bt555f [ 3 ] ; * kpu3cubhfr = ksm0js2nhsy . kbyaroyowhq . n3bu3yuc32 ; }
void flightControlSystemTID1 ( void ) { int32_T colIdx ; int32_T i ; int32_T
i_p ; int32_T loop ; int32_T yIdx ; boolean_T ej2y3xzpfr ; boolean_T
ktnv25ghtf ; boolean_T lrjt5uj2a4 ; boolean_T pruzcw1qd1 ; boolean_T
px4vhwnkc1 ; memset ( & ksm0js2nhsy . kj51cc3j3c [ 0 ] , 0 , 19200U * sizeof
( boolean_T ) ) ; yIdx = 0 ; for ( colIdx = 0 ; colIdx < 160 ; colIdx ++ ) {
for ( loop = 0 ; loop < 21 ; loop ++ ) { ksm0js2nhsy . l1rmalgpyz [ loop +
yIdx ] = ksm0js2nhsy . kj51cc3j3c [ ( colIdx * 120 + loop ) + 99 ] ; } yIdx
+= 21 ; } yIdx = 0 ; for ( colIdx = 0 ; colIdx < 55 ; colIdx ++ ) { for (
loop = 0 ; loop < 20 ; loop ++ ) { ksm0js2nhsy . cib04nqyrs [ loop + yIdx ] =
ksm0js2nhsy . kj51cc3j3c [ colIdx * 120 + loop ] ; } yIdx += 20 ; } yIdx = 0
; for ( colIdx = 0 ; colIdx < 50 ; colIdx ++ ) { memcpy ( & ksm0js2nhsy .
cvxmgartch [ yIdx ] , & ksm0js2nhsy . kj51cc3j3c [ colIdx * 120 ] , 120U *
sizeof ( boolean_T ) ) ; yIdx += 120 ; } yIdx = 0 ; for ( colIdx = 0 ; colIdx
< 160 ; colIdx ++ ) { for ( loop = 0 ; loop < 30 ; loop ++ ) { ksm0js2nhsy .
gnpdahoba0 [ loop + yIdx ] = ksm0js2nhsy . kj51cc3j3c [ colIdx * 120 + loop ]
; } yIdx += 30 ; } i_p = 0 ; for ( colIdx = 0 ; colIdx < 4800 ; colIdx ++ ) {
i_p = ( int32_T ) ( ( uint32_T ) i_p + ksm0js2nhsy . gnpdahoba0 [ colIdx ] )
; } yIdx = 0 ; for ( colIdx = 0 ; colIdx < 101 ; colIdx ++ ) { for ( loop = 0
; loop < 56 ; loop ++ ) { ksm0js2nhsy . kem5osnw54 [ loop + yIdx ] =
ksm0js2nhsy . kj51cc3j3c [ ( ( colIdx + 29 ) * 120 + loop ) + 34 ] ; } yIdx
+= 56 ; } colIdx = 0 ; for ( loop = 0 ; loop < 5656 ; loop ++ ) { colIdx = (
int32_T ) ( ( uint32_T ) colIdx + ksm0js2nhsy . kem5osnw54 [ loop ] ) ; }
loop = 0 ; for ( yIdx = 0 ; yIdx < 3360 ; yIdx ++ ) { loop = ( int32_T ) ( (
uint32_T ) loop + ksm0js2nhsy . l1rmalgpyz [ yIdx ] ) ; } pruzcw1qd1 = ( ( (
uint16_T ) i_p <= b1hr2q0zjh . P_3 ) && ( ( uint16_T ) colIdx > b1hr2q0zjh .
P_4 ) && ( ( uint16_T ) loop > b1hr2q0zjh . P_5 ) ) ; yIdx = 0 ; for ( colIdx
= 0 ; colIdx < 56 ; colIdx ++ ) { for ( loop = 0 ; loop < 20 ; loop ++ ) {
ksm0js2nhsy . ljs3oveq2v [ loop + yIdx ] = ksm0js2nhsy . kj51cc3j3c [ (
colIdx + 104 ) * 120 + loop ] ; } yIdx += 20 ; } i_p = 0 ; for ( colIdx = 0 ;
colIdx < 1120 ; colIdx ++ ) { i_p = ( int32_T ) ( ( uint32_T ) i_p +
ksm0js2nhsy . ljs3oveq2v [ colIdx ] ) ; } yIdx = 0 ; for ( colIdx = 0 ;
colIdx < 11 ; colIdx ++ ) { for ( loop = 0 ; loop < 30 ; loop ++ ) {
ksm0js2nhsy . ijcurvyrn3 [ loop + yIdx ] = ksm0js2nhsy . kj51cc3j3c [ (
colIdx + 74 ) * 120 + loop ] ; } yIdx += 30 ; } colIdx = 0 ; for ( loop = 0 ;
loop < 330 ; loop ++ ) { colIdx = ( int32_T ) ( ( uint32_T ) colIdx +
ksm0js2nhsy . ijcurvyrn3 [ loop ] ) ; } loop = 0 ; for ( yIdx = 0 ; yIdx <
1100 ; yIdx ++ ) { loop = ( int32_T ) ( ( uint32_T ) loop + ksm0js2nhsy .
cib04nqyrs [ yIdx ] ) ; } yIdx = 0 ; for ( i = 0 ; i < 6000 ; i ++ ) { yIdx =
( int32_T ) ( ( uint32_T ) yIdx + ksm0js2nhsy . cvxmgartch [ i ] ) ; }
ej2y3xzpfr = ( ( uint16_T ) i_p > b1hr2q0zjh . P_1 ) ; px4vhwnkc1 = ( (
uint16_T ) colIdx > b1hr2q0zjh . P_2 ) ; lrjt5uj2a4 = ( ( uint16_T ) loop >
b1hr2q0zjh . P_6 ) ; ktnv25ghtf = ( ( uint16_T ) yIdx > b1hr2q0zjh . P_7 ) ;
dqykr4eggmg . ckpn2rcven = ej2y3xzpfr ; dqykr4eggmg . pqwhhdrmxf = px4vhwnkc1
; dqykr4eggmg . h32dngvhjs = pruzcw1qd1 ; dqykr4eggmg . ohjsr0fdmb =
lrjt5uj2a4 ; dqykr4eggmg . irila1varz = ktnv25ghtf ; } void
flightControlSystemTID2 ( void ) { kbyaroyowhTID2 ( & ksm0js2nhsy .
kbyaroyowhq , & b1hr2q0zjh . kbyaroyowhq ) ; } void pyvd4pdf3iTID0 ( void ) {
k1wwquvgrg ( & ksm0js2nhsy . kbyaroyowhq , & dqykr4eggmg . kbyaroyowhq , &
b1hr2q0zjh . kbyaroyowhq ) ; } void pyvd4pdf3iTID1 ( void ) { } void
m0l5se3ogg ( void ) { ipf5ube4r0 * const accn4cnket = & ( lhjbdsj2rj . rtm )
; fhi0bdp14b ( accn4cnket , & dqykr4eggmg . kbyaroyowhq ) ; } void o2f5l50guo
( void ) { ipf5ube4r0 * const accn4cnket = & ( lhjbdsj2rj . rtm ) ; if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( accn4cnket ->
_mdlRefSfcnS , "flightControlSystem" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void f4qzdbbxmw (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo *
rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T
rt_CSTATEIdx ) { ipf5ube4r0 * const accn4cnket = & ( lhjbdsj2rj . rtm ) ;
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; b1hr2q0zjh . kbyaroyowhq . P_56 =
rtMinusInf ; ( void ) memset ( ( void * ) accn4cnket , 0 , sizeof (
ipf5ube4r0 ) ) ; nmtwkzsqud [ 0 ] = mdlref_TID0 ; nmtwkzsqud [ 1 ] =
mdlref_TID1 ; nmtwkzsqud [ 2 ] = mdlref_TID2 ; accn4cnket -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( accn4cnket -> _mdlRefSfcnS , "flightControlSystem" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } ( void ) memset ( ( ( void *
) & ksm0js2nhsy ) , 0 , sizeof ( ircitwx3zdm ) ) ; { int32_T i ; for ( i = 0
; i < 6 ; i ++ ) { ksm0js2nhsy . kbyaroyowhq . pgvax4h34w [ i ] = 0.0F ; }
for ( i = 0 ; i < 16 ; i ++ ) { ksm0js2nhsy . kbyaroyowhq . g3jppbwsml [ i ]
= 0.0F ; } for ( i = 0 ; i < 8 ; i ++ ) { ksm0js2nhsy . kbyaroyowhq .
itfc501qfv [ i ] = 0.0F ; } for ( i = 0 ; i < 8 ; i ++ ) { ksm0js2nhsy .
kbyaroyowhq . lmcv44d02w [ i ] = 0.0F ; } for ( i = 0 ; i < 16 ; i ++ ) {
ksm0js2nhsy . kbyaroyowhq . fgvyovkpwf [ i ] = 0.0F ; } ksm0js2nhsy .
kbyaroyowhq . fexzbbxkzn = 0.0 ; ksm0js2nhsy . kbyaroyowhq . cb2kpcmxmf [ 0 ]
= 0.0 ; ksm0js2nhsy . kbyaroyowhq . cb2kpcmxmf [ 1 ] = 0.0 ; ksm0js2nhsy .
kbyaroyowhq . injgfoez2n = 0.0 ; ksm0js2nhsy . kbyaroyowhq . lt2w3q5ili [ 0 ]
= 0.0 ; ksm0js2nhsy . kbyaroyowhq . lt2w3q5ili [ 1 ] = 0.0 ; ksm0js2nhsy .
kbyaroyowhq . lt2w3q5ili [ 2 ] = 0.0 ; ksm0js2nhsy . kbyaroyowhq . ejocj11n0h
[ 0 ] = 0.0 ; ksm0js2nhsy . kbyaroyowhq . ejocj11n0h [ 1 ] = 0.0 ;
ksm0js2nhsy . kbyaroyowhq . cwam1jmb4d [ 0 ] = 0.0 ; ksm0js2nhsy .
kbyaroyowhq . cwam1jmb4d [ 1 ] = 0.0 ; ksm0js2nhsy . kbyaroyowhq . cibucofkti
[ 0 ] = 0.0 ; ksm0js2nhsy . kbyaroyowhq . cibucofkti [ 1 ] = 0.0 ;
ksm0js2nhsy . kbyaroyowhq . mzt1uypci3 [ 0 ] = 0.0 ; ksm0js2nhsy .
kbyaroyowhq . mzt1uypci3 [ 1 ] = 0.0 ; ksm0js2nhsy . kbyaroyowhq . mzt1uypci3
[ 2 ] = 0.0 ; ksm0js2nhsy . kbyaroyowhq . mzt1uypci3 [ 3 ] = 0.0 ;
ksm0js2nhsy . kbyaroyowhq . jrif0eh3si [ 0 ] = 0.0 ; ksm0js2nhsy .
kbyaroyowhq . jrif0eh3si [ 1 ] = 0.0 ; ksm0js2nhsy . kbyaroyowhq . h1e4elx2mq
[ 0 ] = 0.0 ; ksm0js2nhsy . kbyaroyowhq . h1e4elx2mq [ 1 ] = 0.0 ;
ksm0js2nhsy . kbyaroyowhq . azpx0v1un2 [ 0 ] = 0.0 ; ksm0js2nhsy .
kbyaroyowhq . azpx0v1un2 [ 1 ] = 0.0 ; ksm0js2nhsy . kbyaroyowhq . amvrcq1fuc
= 0.0 ; ksm0js2nhsy . kbyaroyowhq . hcgu200vho = 0.0F ; ksm0js2nhsy .
kbyaroyowhq . ebf3llmkmq = 0.0F ; ksm0js2nhsy . kbyaroyowhq . jam0bbyqk0 =
0.0F ; ksm0js2nhsy . kbyaroyowhq . li0sey3j1t = 0.0F ; ksm0js2nhsy .
kbyaroyowhq . hnpiwdpoj2 = 0.0F ; ksm0js2nhsy . kbyaroyowhq . aiiueo1qke [ 0
] = 0.0F ; ksm0js2nhsy . kbyaroyowhq . aiiueo1qke [ 1 ] = 0.0F ; ksm0js2nhsy
. kbyaroyowhq . k20gadexm3 [ 0 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq .
k20gadexm3 [ 1 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq . dz3nhptc13 [ 0 ] = 0.0F
; ksm0js2nhsy . kbyaroyowhq . dz3nhptc13 [ 1 ] = 0.0F ; ksm0js2nhsy .
kbyaroyowhq . dz3nhptc13 [ 2 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq .
dz3nhptc13 [ 3 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq . b45fpbx2d0 = 0.0F ;
ksm0js2nhsy . kbyaroyowhq . aimulbgnv1 [ 0 ] = 0.0F ; ksm0js2nhsy .
kbyaroyowhq . aimulbgnv1 [ 1 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq .
h54nqgl2zi [ 0 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq . h54nqgl2zi [ 1 ] = 0.0F
; ksm0js2nhsy . kbyaroyowhq . lxqm54wszc [ 0 ] = 0.0F ; ksm0js2nhsy .
kbyaroyowhq . lxqm54wszc [ 1 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq .
msw4j1f5a5 = 0.0F ; ksm0js2nhsy . kbyaroyowhq . e5n3bt555f [ 0 ] = 0.0F ;
ksm0js2nhsy . kbyaroyowhq . e5n3bt555f [ 1 ] = 0.0F ; ksm0js2nhsy .
kbyaroyowhq . e5n3bt555f [ 2 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq .
e5n3bt555f [ 3 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq . nzxxkteuhv [ 0 ] = 0.0F
; ksm0js2nhsy . kbyaroyowhq . nzxxkteuhv [ 1 ] = 0.0F ; ksm0js2nhsy .
kbyaroyowhq . dnr1mtcc1t [ 0 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq .
dnr1mtcc1t [ 1 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq . eqi4oxtzgi [ 0 ] = 0.0F
; ksm0js2nhsy . kbyaroyowhq . eqi4oxtzgi [ 1 ] = 0.0F ; ksm0js2nhsy .
kbyaroyowhq . gyjxisztxe [ 0 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq .
gyjxisztxe [ 1 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq . gyjxisztxe [ 2 ] = 0.0F
; ksm0js2nhsy . kbyaroyowhq . gyjxisztxe [ 3 ] = 0.0F ; ksm0js2nhsy .
kbyaroyowhq . abb5hsfzx0 [ 0 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq .
abb5hsfzx0 [ 1 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq . abb5hsfzx0 [ 2 ] = 0.0F
; ksm0js2nhsy . kbyaroyowhq . j0pu4cjzeb [ 0 ] = 0.0F ; ksm0js2nhsy .
kbyaroyowhq . j0pu4cjzeb [ 1 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq .
hnpiwdpoj2_mbvzarwird [ 0 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq .
hnpiwdpoj2_mbvzarwird [ 1 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq . dmkoj05idu [
0 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq . dmkoj05idu [ 1 ] = 0.0F ;
ksm0js2nhsy . kbyaroyowhq . dmkoj05idu [ 2 ] = 0.0F ; ksm0js2nhsy .
kbyaroyowhq . dmkoj05idu [ 3 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq .
orkhsyifkf [ 0 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq . orkhsyifkf [ 1 ] = 0.0F
; ksm0js2nhsy . kbyaroyowhq . hxsoeyanux [ 0 ] = 0.0F ; ksm0js2nhsy .
kbyaroyowhq . hxsoeyanux [ 1 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq .
cy2qrqn1lj [ 0 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq . cy2qrqn1lj [ 1 ] = 0.0F
; ksm0js2nhsy . kbyaroyowhq . lg5arpf5ue [ 0 ] = 0.0F ; ksm0js2nhsy .
kbyaroyowhq . lg5arpf5ue [ 1 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq .
lg5arpf5ue [ 2 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq . lg5arpf5ue [ 3 ] = 0.0F
; ksm0js2nhsy . kbyaroyowhq . djui0aicgi [ 0 ] = 0.0F ; ksm0js2nhsy .
kbyaroyowhq . djui0aicgi [ 1 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq .
ctthzagufv [ 0 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq . ctthzagufv [ 1 ] = 0.0F
; ksm0js2nhsy . kbyaroyowhq . ctthzagufv [ 2 ] = 0.0F ; ksm0js2nhsy .
kbyaroyowhq . ctthzagufv [ 3 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq .
h33xcbk4xk [ 0 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq . h33xcbk4xk [ 1 ] = 0.0F
; ksm0js2nhsy . kbyaroyowhq . h33xcbk4xk [ 2 ] = 0.0F ; ksm0js2nhsy .
kbyaroyowhq . h33xcbk4xk [ 3 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq .
j4i1uknzzt [ 0 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq . j4i1uknzzt [ 1 ] = 0.0F
; ksm0js2nhsy . kbyaroyowhq . j4i1uknzzt [ 2 ] = 0.0F ; ksm0js2nhsy .
kbyaroyowhq . j4i1uknzzt [ 3 ] = 0.0F ; ksm0js2nhsy . kbyaroyowhq .
dzof3xbsea = 0.0F ; ksm0js2nhsy . kbyaroyowhq . l3w0kjjahz = 0.0F ;
ksm0js2nhsy . kbyaroyowhq . j0ff3qp1rt = 0.0F ; ksm0js2nhsy . kbyaroyowhq .
hapfqnwg0b = 0.0F ; ksm0js2nhsy . kbyaroyowhq . afkrtspz4r . fm0zbm30ze [ 0 ]
= 0.0F ; ksm0js2nhsy . kbyaroyowhq . afkrtspz4r . fm0zbm30ze [ 1 ] = 0.0F ;
ksm0js2nhsy . kbyaroyowhq . nyojmurzoq . cy3fygubmc [ 0 ] = 0.0F ;
ksm0js2nhsy . kbyaroyowhq . nyojmurzoq . cy3fygubmc [ 1 ] = 0.0F ;
ksm0js2nhsy . kbyaroyowhq . ojiyh5md2fp . fm0zbm30ze [ 0 ] = 0.0F ;
ksm0js2nhsy . kbyaroyowhq . ojiyh5md2fp . fm0zbm30ze [ 1 ] = 0.0F ;
ksm0js2nhsy . kbyaroyowhq . h4zka13z2ik . cy3fygubmc [ 0 ] = 0.0F ;
ksm0js2nhsy . kbyaroyowhq . h4zka13z2ik . cy3fygubmc [ 1 ] = 0.0F ; } ( void
) memset ( ( void * ) & dqykr4eggmg , 0 , sizeof ( nllkaxiwhzw ) ) ;
dqykr4eggmg . kbyaroyowhq . ggktuboh3w = 0.0 ; dqykr4eggmg . kbyaroyowhq .
dudxvyaali [ 0 ] = 0.0 ; dqykr4eggmg . kbyaroyowhq . dudxvyaali [ 1 ] = 0.0 ;
dqykr4eggmg . kbyaroyowhq . bgsd4hwxvl [ 0 ] = 0.0 ; dqykr4eggmg .
kbyaroyowhq . bgsd4hwxvl [ 1 ] = 0.0 ; dqykr4eggmg . kbyaroyowhq . bgsd4hwxvl
[ 2 ] = 0.0 ; dqykr4eggmg . kbyaroyowhq . fql4utazuo = 0.0 ; dqykr4eggmg .
kbyaroyowhq . hydw3zxfzv = 0.0 ; dqykr4eggmg . kbyaroyowhq . dfwvove5te = 0.0
; dqykr4eggmg . kbyaroyowhq . n3c1i00bxy [ 0 ] = 0.0F ; dqykr4eggmg .
kbyaroyowhq . n3c1i00bxy [ 1 ] = 0.0F ; dqykr4eggmg . kbyaroyowhq .
nbfzg3mofs [ 0 ] = 0.0F ; dqykr4eggmg . kbyaroyowhq . nbfzg3mofs [ 1 ] = 0.0F
; dqykr4eggmg . kbyaroyowhq . nbfzg3mofs [ 2 ] = 0.0F ; dqykr4eggmg .
kbyaroyowhq . dvmcgiwvlg = 0.0F ; { int32_T i ; for ( i = 0 ; i < 15 ; i ++ )
{ dqykr4eggmg . kbyaroyowhq . m3yo5bm0br [ i ] = 0.0F ; } } dqykr4eggmg .
kbyaroyowhq . johlzfhbo0 [ 0 ] = 0.0F ; dqykr4eggmg . kbyaroyowhq .
johlzfhbo0 [ 1 ] = 0.0F ; dqykr4eggmg . kbyaroyowhq . dpd1kuq4ti [ 0 ] = 0.0F
; dqykr4eggmg . kbyaroyowhq . dpd1kuq4ti [ 1 ] = 0.0F ; dqykr4eggmg .
kbyaroyowhq . bkpwlcggki = 0.0F ; dqykr4eggmg . kbyaroyowhq . mlypgyrlj0 =
0.0F ; { int32_T i ; for ( i = 0 ; i < 5 ; i ++ ) { dqykr4eggmg . kbyaroyowhq
. gawfgxhxnt [ i ] = 0.0F ; } } dqykr4eggmg . kbyaroyowhq . fytbq2ia43 [ 0 ]
= 0.0F ; dqykr4eggmg . kbyaroyowhq . fytbq2ia43 [ 1 ] = 0.0F ; dqykr4eggmg .
kbyaroyowhq . fytbq2ia43 [ 2 ] = 0.0F ; dqykr4eggmg . kbyaroyowhq .
fytbq2ia43 [ 3 ] = 0.0F ; { int32_T i ; for ( i = 0 ; i < 10 ; i ++ ) {
dqykr4eggmg . kbyaroyowhq . hwg5o53ida [ i ] = 0.0F ; } } dqykr4eggmg .
kbyaroyowhq . opm4ouvgho [ 0 ] = 0.0F ; dqykr4eggmg . kbyaroyowhq .
opm4ouvgho [ 1 ] = 0.0F ; dqykr4eggmg . kbyaroyowhq . lbqu3u2lvu [ 0 ] = 0.0F
; dqykr4eggmg . kbyaroyowhq . lbqu3u2lvu [ 1 ] = 0.0F ; dqykr4eggmg .
kbyaroyowhq . mar1fo4k2g [ 0 ] = 0.0F ; dqykr4eggmg . kbyaroyowhq .
mar1fo4k2g [ 1 ] = 0.0F ; dqykr4eggmg . kbyaroyowhq . ic2lljdnru = 0.0F ;
dqykr4eggmg . kbyaroyowhq . i2waz4wcdh [ 0 ] = 0.0F ; dqykr4eggmg .
kbyaroyowhq . i2waz4wcdh [ 1 ] = 0.0F ; dqykr4eggmg . kbyaroyowhq .
jomzm1efxy [ 0 ] = 0.0F ; dqykr4eggmg . kbyaroyowhq . jomzm1efxy [ 1 ] = 0.0F
; dqykr4eggmg . kbyaroyowhq . j1ya5i3lju [ 0 ] = 0.0F ; dqykr4eggmg .
kbyaroyowhq . j1ya5i3lju [ 1 ] = 0.0F ; dqykr4eggmg . kbyaroyowhq .
fmgblzk1yx [ 0 ] = 0.0F ; dqykr4eggmg . kbyaroyowhq . fmgblzk1yx [ 1 ] = 0.0F
; dqykr4eggmg . kbyaroyowhq . elivplttop = 0.0F ; dqykr4eggmg . kbyaroyowhq .
j33klwenqs = 0.0F ; dqykr4eggmg . kbyaroyowhq . ltcjlexrjv = 0.0F ;
dqykr4eggmg . kbyaroyowhq . akyvzynr2c = 0.0F ; dqykr4eggmg . kbyaroyowhq .
cijvfuftv0 = 0.0F ; dqykr4eggmg . kbyaroyowhq . khvqumkvsg [ 0 ] = 0.0F ;
dqykr4eggmg . kbyaroyowhq . khvqumkvsg [ 1 ] = 0.0F ; dqykr4eggmg .
kbyaroyowhq . ebu51u4psc [ 0 ] = 0.0F ; dqykr4eggmg . kbyaroyowhq .
ebu51u4psc [ 1 ] = 0.0F ; flightControlSystem_InitializeDataMapInfo (
accn4cnket , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) &&
( rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( accn4cnket -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
accn4cnket -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( accn4cnket -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } f51itwtzkqf . kbyaroyowhq . ogguxux3on =
UNINITIALIZED_ZCSIG ; } void mr_flightControlSystem_MdlInfoRegFcn ( SimStruct
* mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; {
boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_flightControlSystem , 206 ) ; * retVal = 1 ; } static void
mr_flightControlSystem_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) ; static void
mr_flightControlSystem_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_flightControlSystem_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ;
static void mr_flightControlSystem_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_flightControlSystem_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex
i , int j , uint_T bitVal ) ; static void
mr_flightControlSystem_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex
i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_flightControlSystem_extractBitFieldFromMxArray ( const mxArray * srcArray
, mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_flightControlSystem_extractBitFieldFromMxArray ( const mxArray * srcArray
, mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_flightControlSystem_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_flightControlSystem_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_flightControlSystem_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_flightControlSystem_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_flightControlSystem_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_flightControlSystem_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_flightControlSystem_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_flightControlSystem_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_flightControlSystem_GetDWork ( ) {
static const char * ssDWFieldNames [ 3 ] = { "ksm0js2nhsy" , "dqykr4eggmg" ,
"f51itwtzkqf" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 ,
ssDWFieldNames ) ; mr_flightControlSystem_cacheDataAsMxArray ( ssDW , 0 , 0 ,
( const void * ) & ( ksm0js2nhsy ) , sizeof ( ksm0js2nhsy ) ) ; { static
const char * rtdwDataFieldNames [ 75 ] = { "dqykr4eggmg.pzwjftbl2i" ,
"dqykr4eggmg.ckpn2rcven" , "dqykr4eggmg.pqwhhdrmxf" ,
"dqykr4eggmg.h32dngvhjs" , "dqykr4eggmg.ohjsr0fdmb" ,
"dqykr4eggmg.irila1varz" , "dqykr4eggmg.fsrvgfz5zp" ,
"dqykr4eggmg.kbyaroyowhq.ggktuboh3w" , "dqykr4eggmg.kbyaroyowhq.dudxvyaali" ,
"dqykr4eggmg.kbyaroyowhq.bgsd4hwxvl" , "dqykr4eggmg.kbyaroyowhq.fql4utazuo" ,
"dqykr4eggmg.kbyaroyowhq.hydw3zxfzv" , "dqykr4eggmg.kbyaroyowhq.dfwvove5te" ,
"dqykr4eggmg.kbyaroyowhq.n3c1i00bxy" , "dqykr4eggmg.kbyaroyowhq.nbfzg3mofs" ,
"dqykr4eggmg.kbyaroyowhq.dvmcgiwvlg" , "dqykr4eggmg.kbyaroyowhq.m3yo5bm0br" ,
"dqykr4eggmg.kbyaroyowhq.johlzfhbo0" , "dqykr4eggmg.kbyaroyowhq.dpd1kuq4ti" ,
"dqykr4eggmg.kbyaroyowhq.bkpwlcggki" , "dqykr4eggmg.kbyaroyowhq.mlypgyrlj0" ,
"dqykr4eggmg.kbyaroyowhq.gawfgxhxnt" , "dqykr4eggmg.kbyaroyowhq.fytbq2ia43" ,
"dqykr4eggmg.kbyaroyowhq.hwg5o53ida" , "dqykr4eggmg.kbyaroyowhq.opm4ouvgho" ,
"dqykr4eggmg.kbyaroyowhq.lbqu3u2lvu" , "dqykr4eggmg.kbyaroyowhq.mar1fo4k2g" ,
"dqykr4eggmg.kbyaroyowhq.ic2lljdnru" , "dqykr4eggmg.kbyaroyowhq.i2waz4wcdh" ,
"dqykr4eggmg.kbyaroyowhq.jomzm1efxy" , "dqykr4eggmg.kbyaroyowhq.j1ya5i3lju" ,
"dqykr4eggmg.kbyaroyowhq.fmgblzk1yx" , "dqykr4eggmg.kbyaroyowhq.elivplttop" ,
"dqykr4eggmg.kbyaroyowhq.nihxmtnwn0" , "dqykr4eggmg.kbyaroyowhq.h0kguh0g04" ,
"dqykr4eggmg.kbyaroyowhq.mcs0s1fmhj" , "dqykr4eggmg.kbyaroyowhq.ltea43kayw" ,
"dqykr4eggmg.kbyaroyowhq.j33klwenqs" , "dqykr4eggmg.kbyaroyowhq.ltcjlexrjv" ,
"dqykr4eggmg.kbyaroyowhq.akyvzynr2c" , "dqykr4eggmg.kbyaroyowhq.cijvfuftv0" ,
"dqykr4eggmg.kbyaroyowhq.khvqumkvsg" , "dqykr4eggmg.kbyaroyowhq.ebu51u4psc" ,
"dqykr4eggmg.kbyaroyowhq.jbinyylhej" , "dqykr4eggmg.kbyaroyowhq.brlttosllt" ,
"dqykr4eggmg.kbyaroyowhq.ioroua40sf" , "dqykr4eggmg.kbyaroyowhq.ayxp4yzgmp" ,
"dqykr4eggmg.kbyaroyowhq.cpmhds2jl3" , "dqykr4eggmg.kbyaroyowhq.pqmuncbcz5" ,
"dqykr4eggmg.kbyaroyowhq.pkieznpv5v" , "dqykr4eggmg.kbyaroyowhq.cebxw1ejuv" ,
"dqykr4eggmg.kbyaroyowhq.l0d3hv0vie" , "dqykr4eggmg.kbyaroyowhq.gmlzgvyimo" ,
"dqykr4eggmg.kbyaroyowhq.kewexujuqg" , "dqykr4eggmg.kbyaroyowhq.dfsxdbhpqk" ,
"dqykr4eggmg.kbyaroyowhq.bbdsjay1cb" , "dqykr4eggmg.kbyaroyowhq.cyeg151nql" ,
"dqykr4eggmg.kbyaroyowhq.dtlx1df0zm" , "dqykr4eggmg.kbyaroyowhq.lmmiwr5usb" ,
"dqykr4eggmg.kbyaroyowhq.be4ujsoocn" , "dqykr4eggmg.kbyaroyowhq.l0khpg0k3s" ,
"dqykr4eggmg.kbyaroyowhq.ozswztjljh" ,
"dqykr4eggmg.kbyaroyowhq.afkrtspz4r.bm4eggndai" ,
"dqykr4eggmg.kbyaroyowhq.afkrtspz4r.c4xm4qcxri" ,
"dqykr4eggmg.kbyaroyowhq.nyojmurzoq.pekexl3321" ,
"dqykr4eggmg.kbyaroyowhq.nyojmurzoq.olq2d0vjz1" ,
"dqykr4eggmg.kbyaroyowhq.ojiyh5md2fp.bm4eggndai" ,
"dqykr4eggmg.kbyaroyowhq.ojiyh5md2fp.c4xm4qcxri" ,
"dqykr4eggmg.kbyaroyowhq.h4zka13z2ik.pekexl3321" ,
"dqykr4eggmg.kbyaroyowhq.h4zka13z2ik.olq2d0vjz1" ,
"dqykr4eggmg.kbyaroyowhq.p443cxznfl.l1m15tfakw" ,
"dqykr4eggmg.kbyaroyowhq.lj1nf2ykx4.l1m15tfakw" ,
"dqykr4eggmg.kbyaroyowhq.aiusdqgq1o.l1m15tfakw" ,
"dqykr4eggmg.kbyaroyowhq.actjduhucg.l1m15tfakw" ,
"dqykr4eggmg.kbyaroyowhq.o0uasibb2vq.l1m15tfakw" , } ; mxArray * rtdwData =
mxCreateStructMatrix ( 1 , 1 , 75 , rtdwDataFieldNames ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void *
) & ( dqykr4eggmg . pzwjftbl2i ) , sizeof ( dqykr4eggmg . pzwjftbl2i ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void *
) & ( dqykr4eggmg . ckpn2rcven ) , sizeof ( dqykr4eggmg . ckpn2rcven ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void *
) & ( dqykr4eggmg . pqwhhdrmxf ) , sizeof ( dqykr4eggmg . pqwhhdrmxf ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void *
) & ( dqykr4eggmg . h32dngvhjs ) , sizeof ( dqykr4eggmg . h32dngvhjs ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void *
) & ( dqykr4eggmg . ohjsr0fdmb ) , sizeof ( dqykr4eggmg . ohjsr0fdmb ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void *
) & ( dqykr4eggmg . irila1varz ) , sizeof ( dqykr4eggmg . irila1varz ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void *
) & ( dqykr4eggmg . fsrvgfz5zp ) , sizeof ( dqykr4eggmg . fsrvgfz5zp ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void *
) & ( dqykr4eggmg . kbyaroyowhq . ggktuboh3w ) , sizeof ( dqykr4eggmg .
kbyaroyowhq . ggktuboh3w ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 8 , ( const void * ) & ( dqykr4eggmg . kbyaroyowhq .
dudxvyaali ) , sizeof ( dqykr4eggmg . kbyaroyowhq . dudxvyaali ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void *
) & ( dqykr4eggmg . kbyaroyowhq . bgsd4hwxvl ) , sizeof ( dqykr4eggmg .
kbyaroyowhq . bgsd4hwxvl ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 10 , ( const void * ) & ( dqykr4eggmg . kbyaroyowhq .
fql4utazuo ) , sizeof ( dqykr4eggmg . kbyaroyowhq . fql4utazuo ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . hydw3zxfzv ) , sizeof ( dqykr4eggmg .
kbyaroyowhq . hydw3zxfzv ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 12 , ( const void * ) & ( dqykr4eggmg . kbyaroyowhq .
dfwvove5te ) , sizeof ( dqykr4eggmg . kbyaroyowhq . dfwvove5te ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . n3c1i00bxy ) , sizeof ( dqykr4eggmg .
kbyaroyowhq . n3c1i00bxy ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 14 , ( const void * ) & ( dqykr4eggmg . kbyaroyowhq .
nbfzg3mofs ) , sizeof ( dqykr4eggmg . kbyaroyowhq . nbfzg3mofs ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . dvmcgiwvlg ) , sizeof ( dqykr4eggmg .
kbyaroyowhq . dvmcgiwvlg ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 16 , ( const void * ) & ( dqykr4eggmg . kbyaroyowhq .
m3yo5bm0br ) , sizeof ( dqykr4eggmg . kbyaroyowhq . m3yo5bm0br ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . johlzfhbo0 ) , sizeof ( dqykr4eggmg .
kbyaroyowhq . johlzfhbo0 ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 18 , ( const void * ) & ( dqykr4eggmg . kbyaroyowhq .
dpd1kuq4ti ) , sizeof ( dqykr4eggmg . kbyaroyowhq . dpd1kuq4ti ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . bkpwlcggki ) , sizeof ( dqykr4eggmg .
kbyaroyowhq . bkpwlcggki ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 20 , ( const void * ) & ( dqykr4eggmg . kbyaroyowhq .
mlypgyrlj0 ) , sizeof ( dqykr4eggmg . kbyaroyowhq . mlypgyrlj0 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . gawfgxhxnt ) , sizeof ( dqykr4eggmg .
kbyaroyowhq . gawfgxhxnt ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 22 , ( const void * ) & ( dqykr4eggmg . kbyaroyowhq .
fytbq2ia43 ) , sizeof ( dqykr4eggmg . kbyaroyowhq . fytbq2ia43 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . hwg5o53ida ) , sizeof ( dqykr4eggmg .
kbyaroyowhq . hwg5o53ida ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 24 , ( const void * ) & ( dqykr4eggmg . kbyaroyowhq .
opm4ouvgho ) , sizeof ( dqykr4eggmg . kbyaroyowhq . opm4ouvgho ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . lbqu3u2lvu ) , sizeof ( dqykr4eggmg .
kbyaroyowhq . lbqu3u2lvu ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 26 , ( const void * ) & ( dqykr4eggmg . kbyaroyowhq .
mar1fo4k2g ) , sizeof ( dqykr4eggmg . kbyaroyowhq . mar1fo4k2g ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . ic2lljdnru ) , sizeof ( dqykr4eggmg .
kbyaroyowhq . ic2lljdnru ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 28 , ( const void * ) & ( dqykr4eggmg . kbyaroyowhq .
i2waz4wcdh ) , sizeof ( dqykr4eggmg . kbyaroyowhq . i2waz4wcdh ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 29 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . jomzm1efxy ) , sizeof ( dqykr4eggmg .
kbyaroyowhq . jomzm1efxy ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 30 , ( const void * ) & ( dqykr4eggmg . kbyaroyowhq .
j1ya5i3lju ) , sizeof ( dqykr4eggmg . kbyaroyowhq . j1ya5i3lju ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 31 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . fmgblzk1yx ) , sizeof ( dqykr4eggmg .
kbyaroyowhq . fmgblzk1yx ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 32 , ( const void * ) & ( dqykr4eggmg . kbyaroyowhq .
elivplttop ) , sizeof ( dqykr4eggmg . kbyaroyowhq . elivplttop ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 33 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . nihxmtnwn0 ) , sizeof ( dqykr4eggmg .
kbyaroyowhq . nihxmtnwn0 ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 34 , ( const void * ) & ( dqykr4eggmg . kbyaroyowhq .
h0kguh0g04 ) , sizeof ( dqykr4eggmg . kbyaroyowhq . h0kguh0g04 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 35 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . mcs0s1fmhj ) , sizeof ( dqykr4eggmg .
kbyaroyowhq . mcs0s1fmhj ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 36 , ( const void * ) & ( dqykr4eggmg . kbyaroyowhq .
ltea43kayw ) , sizeof ( dqykr4eggmg . kbyaroyowhq . ltea43kayw ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 37 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . j33klwenqs ) , sizeof ( dqykr4eggmg .
kbyaroyowhq . j33klwenqs ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 38 , ( const void * ) & ( dqykr4eggmg . kbyaroyowhq .
ltcjlexrjv ) , sizeof ( dqykr4eggmg . kbyaroyowhq . ltcjlexrjv ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 39 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . akyvzynr2c ) , sizeof ( dqykr4eggmg .
kbyaroyowhq . akyvzynr2c ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 40 , ( const void * ) & ( dqykr4eggmg . kbyaroyowhq .
cijvfuftv0 ) , sizeof ( dqykr4eggmg . kbyaroyowhq . cijvfuftv0 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 41 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . khvqumkvsg ) , sizeof ( dqykr4eggmg .
kbyaroyowhq . khvqumkvsg ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 42 , ( const void * ) & ( dqykr4eggmg . kbyaroyowhq .
ebu51u4psc ) , sizeof ( dqykr4eggmg . kbyaroyowhq . ebu51u4psc ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 43 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . jbinyylhej ) , sizeof ( dqykr4eggmg .
kbyaroyowhq . jbinyylhej ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 44 , ( const void * ) & ( dqykr4eggmg . kbyaroyowhq .
brlttosllt ) , sizeof ( dqykr4eggmg . kbyaroyowhq . brlttosllt ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 45 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . ioroua40sf ) , sizeof ( dqykr4eggmg .
kbyaroyowhq . ioroua40sf ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 46 , ( const void * ) & ( dqykr4eggmg . kbyaroyowhq .
ayxp4yzgmp ) , sizeof ( dqykr4eggmg . kbyaroyowhq . ayxp4yzgmp ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 47 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . cpmhds2jl3 ) , sizeof ( dqykr4eggmg .
kbyaroyowhq . cpmhds2jl3 ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 48 , ( const void * ) & ( dqykr4eggmg . kbyaroyowhq .
pqmuncbcz5 ) , sizeof ( dqykr4eggmg . kbyaroyowhq . pqmuncbcz5 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 49 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . pkieznpv5v ) , sizeof ( dqykr4eggmg .
kbyaroyowhq . pkieznpv5v ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 50 , ( const void * ) & ( dqykr4eggmg . kbyaroyowhq .
cebxw1ejuv ) , sizeof ( dqykr4eggmg . kbyaroyowhq . cebxw1ejuv ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 51 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . l0d3hv0vie ) , sizeof ( dqykr4eggmg .
kbyaroyowhq . l0d3hv0vie ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 52 , ( const void * ) & ( dqykr4eggmg . kbyaroyowhq .
gmlzgvyimo ) , sizeof ( dqykr4eggmg . kbyaroyowhq . gmlzgvyimo ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 53 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . kewexujuqg ) , sizeof ( dqykr4eggmg .
kbyaroyowhq . kewexujuqg ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 54 , ( const void * ) & ( dqykr4eggmg . kbyaroyowhq .
dfsxdbhpqk ) , sizeof ( dqykr4eggmg . kbyaroyowhq . dfsxdbhpqk ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 55 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . bbdsjay1cb ) , sizeof ( dqykr4eggmg .
kbyaroyowhq . bbdsjay1cb ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 56 , ( const void * ) & ( dqykr4eggmg . kbyaroyowhq .
cyeg151nql ) , sizeof ( dqykr4eggmg . kbyaroyowhq . cyeg151nql ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 57 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . dtlx1df0zm ) , sizeof ( dqykr4eggmg .
kbyaroyowhq . dtlx1df0zm ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 58 , ( const void * ) & ( dqykr4eggmg . kbyaroyowhq .
lmmiwr5usb ) , sizeof ( dqykr4eggmg . kbyaroyowhq . lmmiwr5usb ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 59 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . be4ujsoocn ) , sizeof ( dqykr4eggmg .
kbyaroyowhq . be4ujsoocn ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 60 , ( const void * ) & ( dqykr4eggmg . kbyaroyowhq .
l0khpg0k3s ) , sizeof ( dqykr4eggmg . kbyaroyowhq . l0khpg0k3s ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 61 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . ozswztjljh ) , sizeof ( dqykr4eggmg .
kbyaroyowhq . ozswztjljh ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 62 , ( const void * ) & ( dqykr4eggmg . kbyaroyowhq .
afkrtspz4r . bm4eggndai ) , sizeof ( dqykr4eggmg . kbyaroyowhq . afkrtspz4r .
bm4eggndai ) ) ; mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 ,
63 , ( const void * ) & ( dqykr4eggmg . kbyaroyowhq . afkrtspz4r . c4xm4qcxri
) , sizeof ( dqykr4eggmg . kbyaroyowhq . afkrtspz4r . c4xm4qcxri ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 64 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . nyojmurzoq . pekexl3321 ) , sizeof (
dqykr4eggmg . kbyaroyowhq . nyojmurzoq . pekexl3321 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 65 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . nyojmurzoq . olq2d0vjz1 ) , sizeof (
dqykr4eggmg . kbyaroyowhq . nyojmurzoq . olq2d0vjz1 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 66 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . ojiyh5md2fp . bm4eggndai ) , sizeof (
dqykr4eggmg . kbyaroyowhq . ojiyh5md2fp . bm4eggndai ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 67 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . ojiyh5md2fp . c4xm4qcxri ) , sizeof (
dqykr4eggmg . kbyaroyowhq . ojiyh5md2fp . c4xm4qcxri ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 68 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . h4zka13z2ik . pekexl3321 ) , sizeof (
dqykr4eggmg . kbyaroyowhq . h4zka13z2ik . pekexl3321 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 69 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . h4zka13z2ik . olq2d0vjz1 ) , sizeof (
dqykr4eggmg . kbyaroyowhq . h4zka13z2ik . olq2d0vjz1 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 70 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . p443cxznfl . l1m15tfakw ) , sizeof (
dqykr4eggmg . kbyaroyowhq . p443cxznfl . l1m15tfakw ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 71 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . lj1nf2ykx4 . l1m15tfakw ) , sizeof (
dqykr4eggmg . kbyaroyowhq . lj1nf2ykx4 . l1m15tfakw ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 72 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . aiusdqgq1o . l1m15tfakw ) , sizeof (
dqykr4eggmg . kbyaroyowhq . aiusdqgq1o . l1m15tfakw ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 73 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . actjduhucg . l1m15tfakw ) , sizeof (
dqykr4eggmg . kbyaroyowhq . actjduhucg . l1m15tfakw ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 74 , ( const void
* ) & ( dqykr4eggmg . kbyaroyowhq . o0uasibb2vq . l1m15tfakw ) , sizeof (
dqykr4eggmg . kbyaroyowhq . o0uasibb2vq . l1m15tfakw ) ) ; mxSetFieldByNumber
( ssDW , 0 , 1 , rtdwData ) ; } mr_flightControlSystem_cacheDataAsMxArray (
ssDW , 0 , 2 , ( const void * ) & ( f51itwtzkqf ) , sizeof ( f51itwtzkqf ) )
; return ssDW ; } void mr_flightControlSystem_SetDWork ( const mxArray * ssDW
) { ( void ) ssDW ; mr_flightControlSystem_restoreDataFromMxArray ( ( void *
) & ( ksm0js2nhsy ) , ssDW , 0 , 0 , sizeof ( ksm0js2nhsy ) ) ; { const
mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
pzwjftbl2i ) , rtdwData , 0 , 0 , sizeof ( dqykr4eggmg . pzwjftbl2i ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
ckpn2rcven ) , rtdwData , 0 , 1 , sizeof ( dqykr4eggmg . ckpn2rcven ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
pqwhhdrmxf ) , rtdwData , 0 , 2 , sizeof ( dqykr4eggmg . pqwhhdrmxf ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
h32dngvhjs ) , rtdwData , 0 , 3 , sizeof ( dqykr4eggmg . h32dngvhjs ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
ohjsr0fdmb ) , rtdwData , 0 , 4 , sizeof ( dqykr4eggmg . ohjsr0fdmb ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
irila1varz ) , rtdwData , 0 , 5 , sizeof ( dqykr4eggmg . irila1varz ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
fsrvgfz5zp ) , rtdwData , 0 , 6 , sizeof ( dqykr4eggmg . fsrvgfz5zp ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . ggktuboh3w ) , rtdwData , 0 , 7 , sizeof ( dqykr4eggmg .
kbyaroyowhq . ggktuboh3w ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . kbyaroyowhq . dudxvyaali ) , rtdwData , 0 , 8
, sizeof ( dqykr4eggmg . kbyaroyowhq . dudxvyaali ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . bgsd4hwxvl ) , rtdwData , 0 , 9 , sizeof ( dqykr4eggmg .
kbyaroyowhq . bgsd4hwxvl ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . kbyaroyowhq . fql4utazuo ) , rtdwData , 0 , 10
, sizeof ( dqykr4eggmg . kbyaroyowhq . fql4utazuo ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . hydw3zxfzv ) , rtdwData , 0 , 11 , sizeof ( dqykr4eggmg .
kbyaroyowhq . hydw3zxfzv ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . kbyaroyowhq . dfwvove5te ) , rtdwData , 0 , 12
, sizeof ( dqykr4eggmg . kbyaroyowhq . dfwvove5te ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . n3c1i00bxy ) , rtdwData , 0 , 13 , sizeof ( dqykr4eggmg .
kbyaroyowhq . n3c1i00bxy ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . kbyaroyowhq . nbfzg3mofs ) , rtdwData , 0 , 14
, sizeof ( dqykr4eggmg . kbyaroyowhq . nbfzg3mofs ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . dvmcgiwvlg ) , rtdwData , 0 , 15 , sizeof ( dqykr4eggmg .
kbyaroyowhq . dvmcgiwvlg ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . kbyaroyowhq . m3yo5bm0br ) , rtdwData , 0 , 16
, sizeof ( dqykr4eggmg . kbyaroyowhq . m3yo5bm0br ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . johlzfhbo0 ) , rtdwData , 0 , 17 , sizeof ( dqykr4eggmg .
kbyaroyowhq . johlzfhbo0 ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . kbyaroyowhq . dpd1kuq4ti ) , rtdwData , 0 , 18
, sizeof ( dqykr4eggmg . kbyaroyowhq . dpd1kuq4ti ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . bkpwlcggki ) , rtdwData , 0 , 19 , sizeof ( dqykr4eggmg .
kbyaroyowhq . bkpwlcggki ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . kbyaroyowhq . mlypgyrlj0 ) , rtdwData , 0 , 20
, sizeof ( dqykr4eggmg . kbyaroyowhq . mlypgyrlj0 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . gawfgxhxnt ) , rtdwData , 0 , 21 , sizeof ( dqykr4eggmg .
kbyaroyowhq . gawfgxhxnt ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . kbyaroyowhq . fytbq2ia43 ) , rtdwData , 0 , 22
, sizeof ( dqykr4eggmg . kbyaroyowhq . fytbq2ia43 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . hwg5o53ida ) , rtdwData , 0 , 23 , sizeof ( dqykr4eggmg .
kbyaroyowhq . hwg5o53ida ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . kbyaroyowhq . opm4ouvgho ) , rtdwData , 0 , 24
, sizeof ( dqykr4eggmg . kbyaroyowhq . opm4ouvgho ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . lbqu3u2lvu ) , rtdwData , 0 , 25 , sizeof ( dqykr4eggmg .
kbyaroyowhq . lbqu3u2lvu ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . kbyaroyowhq . mar1fo4k2g ) , rtdwData , 0 , 26
, sizeof ( dqykr4eggmg . kbyaroyowhq . mar1fo4k2g ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . ic2lljdnru ) , rtdwData , 0 , 27 , sizeof ( dqykr4eggmg .
kbyaroyowhq . ic2lljdnru ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . kbyaroyowhq . i2waz4wcdh ) , rtdwData , 0 , 28
, sizeof ( dqykr4eggmg . kbyaroyowhq . i2waz4wcdh ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . jomzm1efxy ) , rtdwData , 0 , 29 , sizeof ( dqykr4eggmg .
kbyaroyowhq . jomzm1efxy ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . kbyaroyowhq . j1ya5i3lju ) , rtdwData , 0 , 30
, sizeof ( dqykr4eggmg . kbyaroyowhq . j1ya5i3lju ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . fmgblzk1yx ) , rtdwData , 0 , 31 , sizeof ( dqykr4eggmg .
kbyaroyowhq . fmgblzk1yx ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . kbyaroyowhq . elivplttop ) , rtdwData , 0 , 32
, sizeof ( dqykr4eggmg . kbyaroyowhq . elivplttop ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . nihxmtnwn0 ) , rtdwData , 0 , 33 , sizeof ( dqykr4eggmg .
kbyaroyowhq . nihxmtnwn0 ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . kbyaroyowhq . h0kguh0g04 ) , rtdwData , 0 , 34
, sizeof ( dqykr4eggmg . kbyaroyowhq . h0kguh0g04 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . mcs0s1fmhj ) , rtdwData , 0 , 35 , sizeof ( dqykr4eggmg .
kbyaroyowhq . mcs0s1fmhj ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . kbyaroyowhq . ltea43kayw ) , rtdwData , 0 , 36
, sizeof ( dqykr4eggmg . kbyaroyowhq . ltea43kayw ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . j33klwenqs ) , rtdwData , 0 , 37 , sizeof ( dqykr4eggmg .
kbyaroyowhq . j33klwenqs ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . kbyaroyowhq . ltcjlexrjv ) , rtdwData , 0 , 38
, sizeof ( dqykr4eggmg . kbyaroyowhq . ltcjlexrjv ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . akyvzynr2c ) , rtdwData , 0 , 39 , sizeof ( dqykr4eggmg .
kbyaroyowhq . akyvzynr2c ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . kbyaroyowhq . cijvfuftv0 ) , rtdwData , 0 , 40
, sizeof ( dqykr4eggmg . kbyaroyowhq . cijvfuftv0 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . khvqumkvsg ) , rtdwData , 0 , 41 , sizeof ( dqykr4eggmg .
kbyaroyowhq . khvqumkvsg ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . kbyaroyowhq . ebu51u4psc ) , rtdwData , 0 , 42
, sizeof ( dqykr4eggmg . kbyaroyowhq . ebu51u4psc ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . jbinyylhej ) , rtdwData , 0 , 43 , sizeof ( dqykr4eggmg .
kbyaroyowhq . jbinyylhej ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . kbyaroyowhq . brlttosllt ) , rtdwData , 0 , 44
, sizeof ( dqykr4eggmg . kbyaroyowhq . brlttosllt ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . ioroua40sf ) , rtdwData , 0 , 45 , sizeof ( dqykr4eggmg .
kbyaroyowhq . ioroua40sf ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . kbyaroyowhq . ayxp4yzgmp ) , rtdwData , 0 , 46
, sizeof ( dqykr4eggmg . kbyaroyowhq . ayxp4yzgmp ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . cpmhds2jl3 ) , rtdwData , 0 , 47 , sizeof ( dqykr4eggmg .
kbyaroyowhq . cpmhds2jl3 ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . kbyaroyowhq . pqmuncbcz5 ) , rtdwData , 0 , 48
, sizeof ( dqykr4eggmg . kbyaroyowhq . pqmuncbcz5 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . pkieznpv5v ) , rtdwData , 0 , 49 , sizeof ( dqykr4eggmg .
kbyaroyowhq . pkieznpv5v ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . kbyaroyowhq . cebxw1ejuv ) , rtdwData , 0 , 50
, sizeof ( dqykr4eggmg . kbyaroyowhq . cebxw1ejuv ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . l0d3hv0vie ) , rtdwData , 0 , 51 , sizeof ( dqykr4eggmg .
kbyaroyowhq . l0d3hv0vie ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . kbyaroyowhq . gmlzgvyimo ) , rtdwData , 0 , 52
, sizeof ( dqykr4eggmg . kbyaroyowhq . gmlzgvyimo ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . kewexujuqg ) , rtdwData , 0 , 53 , sizeof ( dqykr4eggmg .
kbyaroyowhq . kewexujuqg ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . kbyaroyowhq . dfsxdbhpqk ) , rtdwData , 0 , 54
, sizeof ( dqykr4eggmg . kbyaroyowhq . dfsxdbhpqk ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . bbdsjay1cb ) , rtdwData , 0 , 55 , sizeof ( dqykr4eggmg .
kbyaroyowhq . bbdsjay1cb ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . kbyaroyowhq . cyeg151nql ) , rtdwData , 0 , 56
, sizeof ( dqykr4eggmg . kbyaroyowhq . cyeg151nql ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . dtlx1df0zm ) , rtdwData , 0 , 57 , sizeof ( dqykr4eggmg .
kbyaroyowhq . dtlx1df0zm ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . kbyaroyowhq . lmmiwr5usb ) , rtdwData , 0 , 58
, sizeof ( dqykr4eggmg . kbyaroyowhq . lmmiwr5usb ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . be4ujsoocn ) , rtdwData , 0 , 59 , sizeof ( dqykr4eggmg .
kbyaroyowhq . be4ujsoocn ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . kbyaroyowhq . l0khpg0k3s ) , rtdwData , 0 , 60
, sizeof ( dqykr4eggmg . kbyaroyowhq . l0khpg0k3s ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . ozswztjljh ) , rtdwData , 0 , 61 , sizeof ( dqykr4eggmg .
kbyaroyowhq . ozswztjljh ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . kbyaroyowhq . afkrtspz4r . bm4eggndai ) ,
rtdwData , 0 , 62 , sizeof ( dqykr4eggmg . kbyaroyowhq . afkrtspz4r .
bm4eggndai ) ) ; mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) &
( dqykr4eggmg . kbyaroyowhq . afkrtspz4r . c4xm4qcxri ) , rtdwData , 0 , 63 ,
sizeof ( dqykr4eggmg . kbyaroyowhq . afkrtspz4r . c4xm4qcxri ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . nyojmurzoq . pekexl3321 ) , rtdwData , 0 , 64 , sizeof (
dqykr4eggmg . kbyaroyowhq . nyojmurzoq . pekexl3321 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . nyojmurzoq . olq2d0vjz1 ) , rtdwData , 0 , 65 , sizeof (
dqykr4eggmg . kbyaroyowhq . nyojmurzoq . olq2d0vjz1 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . ojiyh5md2fp . bm4eggndai ) , rtdwData , 0 , 66 , sizeof (
dqykr4eggmg . kbyaroyowhq . ojiyh5md2fp . bm4eggndai ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . ojiyh5md2fp . c4xm4qcxri ) , rtdwData , 0 , 67 , sizeof (
dqykr4eggmg . kbyaroyowhq . ojiyh5md2fp . c4xm4qcxri ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . h4zka13z2ik . pekexl3321 ) , rtdwData , 0 , 68 , sizeof (
dqykr4eggmg . kbyaroyowhq . h4zka13z2ik . pekexl3321 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . h4zka13z2ik . olq2d0vjz1 ) , rtdwData , 0 , 69 , sizeof (
dqykr4eggmg . kbyaroyowhq . h4zka13z2ik . olq2d0vjz1 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . p443cxznfl . l1m15tfakw ) , rtdwData , 0 , 70 , sizeof (
dqykr4eggmg . kbyaroyowhq . p443cxznfl . l1m15tfakw ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . lj1nf2ykx4 . l1m15tfakw ) , rtdwData , 0 , 71 , sizeof (
dqykr4eggmg . kbyaroyowhq . lj1nf2ykx4 . l1m15tfakw ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . aiusdqgq1o . l1m15tfakw ) , rtdwData , 0 , 72 , sizeof (
dqykr4eggmg . kbyaroyowhq . aiusdqgq1o . l1m15tfakw ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . actjduhucg . l1m15tfakw ) , rtdwData , 0 , 73 , sizeof (
dqykr4eggmg . kbyaroyowhq . actjduhucg . l1m15tfakw ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kbyaroyowhq . o0uasibb2vq . l1m15tfakw ) , rtdwData , 0 , 74 , sizeof (
dqykr4eggmg . kbyaroyowhq . o0uasibb2vq . l1m15tfakw ) ) ; }
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( f51itwtzkqf )
, ssDW , 0 , 2 , sizeof ( f51itwtzkqf ) ) ; } void
mr_flightControlSystem_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 2751382247U , 1852597422U , 3060048964U ,
280528680U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"flightControlSystem" , & chksum [ 0 ] ) ; } mxArray *
mr_flightControlSystem_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 1 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char * blockType [ 1 ] = { "MATLABSystem" , } ; static const char * blockPath
[ 1 ] = {
"flightControlSystem/Image Processing System1/PARROT Image Conversion" , } ;
static const int reason [ 1 ] = { 6 , } ; for ( subs [ 0 ] = 0 ; subs [ 0 ] <
1 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset = mxCalcSingleSubscript (
data , 2 , subs ) ; mxSetCell ( data , offset , mxCreateString ( blockType [
subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset = mxCalcSingleSubscript ( data , 2
, subs ) ; mxSetCell ( data , offset , mxCreateString ( blockPath [ subs [ 0
] ] ) ) ; subs [ 1 ] = 2 ; offset = mxCalcSingleSubscript ( data , 2 , subs )
; mxSetCell ( data , offset , mxCreateDoubleScalar ( ( double ) reason [ subs
[ 0 ] ] ) ) ; } } return data ; } static void *
flightControlSystem_InitRestoreDataPtr = ( NULL ) ; void
mr_flightControlSystem_CreateInitRestoreData ( ) {
flightControlSystem_InitRestoreDataPtr = utMalloc ( sizeof ( dqykr4eggmg ) )
; memcpy ( flightControlSystem_InitRestoreDataPtr , ( void * ) & (
dqykr4eggmg ) , sizeof ( dqykr4eggmg ) ) ; } void
mr_flightControlSystem_CopyFromInitRestoreData ( ) { memcpy ( ( void * ) & (
dqykr4eggmg ) , flightControlSystem_InitRestoreDataPtr , sizeof ( dqykr4eggmg
) ) ; } void mr_flightControlSystem_DestroyInitRestoreData ( ) { utFree (
flightControlSystem_InitRestoreDataPtr ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
