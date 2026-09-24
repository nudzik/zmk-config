#ifndef UNICODE_H
#define UNICODE_H

#include <dt-bindings/zmk/keys.h>

/*
 * Windows Unicode Helper Macro (Hex Numpad method)
 * Holds LALT, taps Keypad Plus, taps 4 hex digits, and releases LALT.
 */
#define UC_WIN(name, c1, c2, c3, c4) \
    name: name { \
        compatible = "zmk,behavior-macro"; \
        #binding-cells = <0>; \
        wait-ms = <30>; \
        tap-ms = <30>; \
        bindings = <&macro_press &kp LALT>, \
                   <&macro_tap &kp KP_PLUS>, \
                   <&macro_tap &kp c1 &kp c2 &kp c3 &kp c4>, \
                   <&macro_release &kp LALT>; \
    };

#endif // UNICODE_H
