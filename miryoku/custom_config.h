// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun")

#define U_BASE   0
#define U_NAV    1
#define U_MEDIA  2
#define U_NUM    3
#define U_SYM    4
#define U_FUN    5

#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_LILY58( \
  K00, K01, K02, K03, K04, K05,              K06, K07, K08, K09, K10, K11, \
  K12, K13, K14, K15, K16, K17,              K18, K19, K20, K21, K22, K23, \
  K24, K25, K26, K27, K28, K29,              K30, N31, K32, K33, K34, K35, \
  K36, K37, N38, N39, K40, K41,              K42, K43, K44, K45, K46, K47, \
  N48, N49, N50, K51, K52, K53,              K54, K55, K56, N57, N58, N59 \
) \
K00  K01  K02  K03  K04  K05                 K06  K07  K08  K09  K10  K11 \
K12  K13  K14  K15  K16  K17                 K18  K19  K20  K21  K22  K23 \
K24  K25  K26  K27  K28  K29                 K30  N31  K32  K33  K34  K35 \
K36  K37  N38  N39  K40  K41  XXX       XXX  K42  K43  K44  K45  K46  K47 \
               XXX  K51  K52  K53       K54  K55  K56  XXX

#define MIRYOKU_LAYER_BASE \
&kp ESC,        &kp N1,       &kp N2,       &kp N3,          &kp N4,             &kp N5,             &kp N6,           &kp N7,             &kp N8,            &kp N9,       &kp N0,        U_LT(U_FUN, GRAVE), \
&kp TAB,        &kp Q,        &kp W,        &kp E,           &kp R,              &kp T,              &kp Y,            &kp U,              &kp I,             &kp O,        &kp P,         &kp MINUS, \
&kp LSHIFT,     &kp A,        &kp S,        &kp D,           &kp F,              &kp G,              &kp H,            &kp J,              &kp K,             &kp L,        &kp SEMI,      &kp LSHFT, \
&kp LCTRL,      &kp Z,        &kp X,        &kp C,           &kp V,              &kp B,              &kp N,            &kp M,              &kp COMMA,         &kp DOT,      &kp SLASH,     &kp LCTRL, \
U_NA,           U_NA,         U_NA,         &kp LGUI,        U_LT(U_NAV, SPACE), U_LT(U_MEDIA, TAB)  U_LT(U_SYM, RET), U_LT(U_NUM, SPACE), BSPC,              U_NA,         U_NA,          U_NA

#define MIRYOKU_LAYER_NAV \
U_NP,         U_NP,           U_NP,         U_NP,            U_NP,              U_NP,                U_NP,              U_NP,              U_NP,              U_NP,         U_NP,          U_NP, \
U_NP,         U_NP,           U_NP,         U_NP,            U_NP,              U_RDO,               U_PST,             U_CPY,             U_CUT,             U_UND,        U_NP,          U_NP, \
U_NP,         U_NP,           U_NP,         U_NP,            U_NP,              U_NP,                &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,    U_NP,          U_NP, \
U_NP,         U_NA,           U_NP,         U_NP,            U_NP,              U_NP,                U_NP,              U_NP,              U_NP,              U_NP,         U_NP,          U_NP, \
U_NA,         U_NA,           U_NA,         U_NP,            U_NP,              U_NP,                U_NP,              U_NP,              U_NP,              U_NA,         U_NA,          U_NA

#define MIRYOKU_LAYER_MEDIA \
U_NP,         U_NP,           U_NP,         U_NP,            U_NP,              U_NP,                U_NP,              U_NP,              U_NP,              U_NP,         U_NP,          U_NP, \
U_NP,         U_NP,           U_NP,         U_NP,            U_NP,              U_NP,                U_NP,              U_NP,              U_NP,              U_NP,         U_NP,          U_NP, \
U_NP,         U_NP,           U_NP,         U_NP,            U_NP,              U_NP,                &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,   U_NP,          U_NP, \
U_NP,         U_NA,           U_NP,         U_NP,            U_NP,              U_NP,                &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,  U_NP,          U_NP, \
U_NA,         U_NA,           U_NA,         U_NP,            U_NP,              U_NP,                U_NP,              U_NP,              U_NP,              U_NA,         U_NA,          U_NA

#define MIRYOKU_LAYER_NUM \
U_NP,         U_NP,           U_NP,         U_NP,            U_NP,              U_NP,                U_NP,              U_NP,              U_NP,              U_NP,         U_NP,          U_NP, \
U_NP,         &kp LBKT,       &kp N7,       &kp N8,          &kp N9,            &kp RBKT,            U_NP,              U_NP,              U_NP,              U_NP,         U_NP,          U_NP, \
U_NP,         &kp DQT,        &kp N4,       &kp N5,          &kp N6,            &kp EQUAL,           U_NP,              U_NP,              U_NP,              U_NP,         U_NP,          U_NP, \
U_NP,         &kp GRAVE,      &kp N1,       &kp N2,          &kp N3,            &kp BSLH,            U_NP,              U_NP,              U_NP,              U_NP,         U_NP,          U_NP, \
U_NA,         U_NA,           U_NA,         U_NP,            U_NP,              &kp MINUS,           U_NP,              U_NP,              U_NP,              U_NA,         U_NA,          U_NA

#define MIRYOKU_LAYER_SYM \
U_NP,         U_NP,           U_NP,         U_NP,            U_NP,              U_NP,                U_NP,              U_NP,              U_NP,              U_NP,         U_NP,          U_NP, \
U_NP,         &kp LBRC,       &kp AMPS,     &kp ASTRK,       &kp LPAR,          &kp RBRC,            U_NP,              U_NP,              U_NP,              U_NP,         U_NP,          U_NP, \
U_NP,         &kp SQT,        &kp DLLR,     &kp PRCNT,       &kp CARET,         &kp PLUS,            U_NP,              U_NP,              U_NP,              U_NP,         U_NP,          U_NP, \
U_NP,         &kp TILDE,      &kp EXCL,     &kp AT,          &kp HASH,          &kp PIPE,            U_NP,              U_NP,              U_NP,              U_NP,         U_NP,          U_NP, \
U_NA,         U_NA,           U_NA,         &kp LPAR,        &kp RPAR,          &kp UNDER,           U_NP,              U_NP,              U_NP,              U_NA,         U_NA,          U_NA

#define MIRYOKU_LAYER_FUN \
U_NP,         U_NP,           U_NP,         U_NP,            U_NP,              U_NP,                U_NP,              U_NP,              U_NP,              U_NP,         U_NP,          U_NP, \
U_NP,         &kp F12,        &kp F7,       &kp F8,          &kp F9,            U_NP,                U_NP,              U_NP,              U_NP,              U_NP,         U_NP,          U_NP, \
U_NP,         &kp F11,        &kp F4,       &kp F5,          &kp F6,            U_NP,                U_NP,              U_NP,              U_NP,              U_NP,         U_NP,          U_NP, \
U_NP,         &kp F10,        &kp F1,       &kp F2,          &kp F3,            U_NP,                U_NP,              U_NP,              U_NP,              U_NP,         U_NP,          U_NP, \
U_NA,         U_NA,           U_NA,         U_NP,            U_NP,              U_NP,                U_NP,              U_NP,              U_NP,              U_NA,         U_NA,          U_NA
