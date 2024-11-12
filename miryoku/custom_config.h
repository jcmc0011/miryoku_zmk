// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYOUTMAPPING_LILY58( \
  K00, K01, K02, K03, K04, K05,              K06, K07, K08, K09, K10, K11, \
  K12, K13, K14, K15, K16, K17,              K18, K19, K20, K21, K22, K23, \
  K24, K25, K26, K27, K28, K29,              K30, N31, K32, K33, K34, K35, \
  K36, K37, N38, N39, K40, K41,              K42, K43, K44, K45, K46, K47, \
  N48, N49, N50, K51, K52, K53,              K54, K55, K56, N57, N58, N59, \
) \
K00  K01  K02  K03  K04  K05                 K06  K07  K08  K09  K10  K11 \
K12  K13  K14  K15  K16  K17                 K18  K19  K20  K21  K22  K23 \    
K24  K25  K26  K27  K28  K29                 K30  N31  K32  K33  K34  K35 \
K36  K37  N38  N39  K40  K41  XXX       XXX  K42  K43  K44  K45  K46  K47 \
               XXX  K51  K52  K53       K54  K55  K56  XXX

#define MIRYOKU_LAYER_BASE \
&kp ESC,        &kp N1,       &kp N2,       &kp N3,          &kp N4,             &kp N5,             &kp N6,           &kp N7,            &kp N8,           &kp N9,       &kp N0,         &kp MINUS,     \
&kp TAB,        &kp Q,        &kp W,        &kp E,           &kp R,              &kp T,              &kp Y,            &kp U,             &kp I,            &kp O,        &kp P,          &kp GRAVE,     \
&kp LSHIFT,     &kp A,        &kp S,        &kp D,           &kp F,              &kp G,              &kp H,            &kp J,             &kp K,            &kp L,        &kp SEMI,       &kp LSHFT,     \
&kp LCTRL,      &kp Z,        &kp X,        &kp C,           &kp V,              &kp B,              &kp N,            &kp M,             &kp COMMA,        &kp DOT,      &kp SLASH,      &kp LCTRL,     \
                U_NP,         U_NP,         U_LT(LGUI, ESC), U_LT(U_NAV, SPACE), U_LT(U_MEDIA, TAB), U_LT(U_SYM, RET), U_LT(U_NUM, SPACE), U_LT(U_FUN, DEL), U_NP,         U_NP

#define MIRYOKU_LAYER_NUM \
U_NP,         U_NP,           U_NP,         U_NP,            U_NP,              U_NP,                U_NP,              U_NP,              U_NP,              U_NP,       U_NP, \
U_NP,         &kp LBKT,       &kp N7,       &kp N8,          &kp N9,            &kp RBKT,            &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,     U_NP, \
U_NP,         &kp DQT,        &kp N4,       &kp N5,          &kp N6,            &kp EQUAL,           &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,   U_NP, \
U_NP,         &kp GRAVE,      &kp N1,       &kp N2,          &kp N3,            &kp BSLH,            &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NP,       U_NP, \
U_NA,         U_NA,           U_NA,         &kp DOT,         &kp N0,            &kp MINUS,           U_NP,              U_NP,              U_NP,              U_NA,       U_NA

,#define MIRYOKU_LAYER_SYM \
U_NP,         U_NP,           U_NP,         U_NP,            U_NP,              U_NP,                U_NP,              U_NP,              U_NP,              U_NP,       U_NP, \
U_NP,         &kp LBRC,     &kp AMPS,       &kp ASTRK,       &kp LPAR,          &kp RBRC,            &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,     U_NP, \
U_NP,         &kp SQT,      &kp DLLR,       &kp PRCNT,       &kp CARET,         &kp PLUS,            &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,   U_NP, \
U_NP,         &kp TILDE,    &kp EXCL,       &kp AT,          &kp HASH,          &kp PIPE,            &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,       U_NP, \
U_NA,         U_NA,         U_NA,           &kp LPAR,        &kp RPAR,          &kp UNDER,           U_NA,              U_NA,              U_NP,              U_NP,       U_NA
