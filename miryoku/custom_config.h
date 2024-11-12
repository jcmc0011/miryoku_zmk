// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku


#define MIRYOKU_LAYER_BASE \
&kp ESC,        &kp N1,       &kp N2,       &kp N3,              &kp N4,             &kp N5,             &kp N6,           &kp N7,            &kp N8,           &kp N9,       &kp N0,         &kp MINUS,     \
&kp TAB,        &kp Q,        &kp W,        &kp E,               &kp R,              &kp T,              &kp Y,            &kp U,             &kp I,            &kp O,        &kp P,          &kp GRA4V,     \
&kp LSHIFT,     &kp A,        &kp S,        &kp D,               &kp F,              &kp G,              &kp H,            &kp J,             &kp K,            &kp L,        &kp SEMI,       &kp LSHFT,     \
&kp LCTRL,      &kp Z,        &kp X,        &kp C,               &kp V,              &kp B,              &kp N,            &kp M,             &kp COMMA,        &kp DOT,      &kp SLASH,      &kp LCTRL,     \
                U_NP,         U_NP,         U_LT(LGUI, ESC), U_LT(U_NAV, SPACE), U_LT(U_MEDIA, TAB), U_LT(U_SYM, RET), U_LT(U_NUM, SPACE), U_LT(U_FUN, DEL), U_NP,         U_NP

#define MIRYOKU_LAYER_NUM \
&kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp DQT,           &kp N4,            &kp N5,            &kp N6,            &kp EQUAL,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp BSLH,          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
&kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp SQT,           &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp PLUS,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP
