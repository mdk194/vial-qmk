// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌────────────┬───┬───┬───┬───┬───┐          ┌───┬───┬───┬───┬───┬──────────┐
      * │LT(2, Tab)  │ Q │ W │ E │ R │ T │          │ Y │ U │ I │ O │ P │     |    │
      * ├────────────┼───┼───┼───┼───┼───┤          ├───┼───┼───┼───┼───┼──────────┤
      * │LAlt_T(Esc) │ A │ S │ D │ F │ G │          │ H │ J │ K │ L │ ; │     '    │
      * ├────────────┼───┼───┼───┼───┼───┤          ├───┼───┼───┼───┼───┼──────────┤
      * │LS (        │ Z │ X │ C │ V │ B │          │ N │ M │ , │ . │ / │    RS )  │
      * └────────────┴───┴───┴───┴───┴───┘          └───┴───┴───┴───┴───┴──────────┘
      *    ┌─────────┐                                               ┌────────────┐
      *    │LGui_T(`)├──────────┐                         ┌──────────┤RGui_T(BSPC)│
      *    └─────────┤LCtl_T([) ├──────────┐   ┌──────────┤RCtl_T(]) ├────────────┘
      *              └──────────┤LT(1, Spc)│   │LT(1, ENT)├──────────┘
      *                         └──────────┘   └──────────┘
      *
      * ┌────────────┬───┬───┬───┬───┬───┐          ┌───┬───┬───┬───┬───┬──────────┐
      * │    ~       │ ! │ @ │ # │ $ │ % │          │ ^ │ & │ * │ ( │ ) │     -    │
      * ├────────────┼───┼───┼───┼───┼───┤          ├───┼───┼───┼───┼───┼──────────┤
      * │   _______  │ 1 │ 2 │ 3 │ 4 │ 5 │          │ 6 │ 7 │ 8 │ 9 │ 0 │     =    │
      * ├────────────┼───┼───┼───┼───┼───┤          ├───┼───┼───┼───┼───┼──────────┤
      * │   _______  │F1 │F2 │F3 │F4 │F5 │          │F6 │F7 │F8 │F9 │F10│ ______   │
      * └────────────┴───┴───┴───┴───┴───┘          └───┴───┴───┴───┴───┴──────────┘
      *    ┌─────────┐                                               ┌────────────┐
      *    │ _______ ├──────────┐                         ┌──────────┤ _______    │
      *    └─────────┤ _______  ├──────────┐   ┌──────────┤ _______  ├────────────┘
      *              └──────────┤ _______  │   │ _______  ├──────────┘
      *                         └──────────┘   └──────────┘
      *
      * ┌────────────┬─────────┬─────────┬──────────┬──────────┬────────┐                          ┌────────────┬─────────┬─────────┬──────────┬──────────┬────────┐
      * │ _______    │ _______ │ KC_WSCH │ MS_BTN5  │ MS_BTN4  │ _______│                          │ MS_WHLL    │ MS_WHLD │ MS_WHLU │ MS_WHLR  │ MS_BTN1  │ KC_PGUP│
      * ├────────────┼─────────┼─────────┼──────────┼──────────┼────────┤                          ├────────────┼─────────┼─────────┼──────────┼──────────┼────────┤
      * │ _______    │ _______ │ MS_BTN2 │ MS_BTN3  │ MS_BTN1  │ _______│                          │ KC_LEFT    │ KC_DOWN │ KC_UP   │ KC_RGHT  │ MS_BTN3  │ KC_PGDN│
      * ├────────────┼─────────┼─────────┼──────────┼──────────┼────────┤                          ├────────────┼─────────┼─────────┼──────────┼──────────┼────────┤
      * │ _______    │ _______ │ KC_UNDO │ KC_PSTE  │ KC_COPY  │ KC_CUT │                          │ MS_LEFT    │ MS_DOWN │ MS_UP   │ MS_RGHT  │ MS_BTN2  │ KC_DEL │
      * └────────────┴─────────┴─────────┴──────────┴──────────┴────────┘                          └────────────┴─────────┴─────────┴──────────┴──────────┴────────┘
      *                                             ┌─────────┐                                               ┌────────────┐
      *                                             │ _______ ├──────────┐                         ┌──────────┤ _______    │
      *                                             └─────────┤ _______  ├──────────┐   ┌──────────┤ _______  ├────────────┘
      *                                                       └──────────┤ _______  │   │ _______  ├──────────┘
      *                                                                  └──────────┘   └──────────┘
      */
    [0] = LAYOUT_split_3x6_3(
        LT(2, KC_TAB),  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        LALT_T(KC_ESC), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        SC_LSPO,        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, SC_RSPC,
                                 LGUI_T(KC_GRV), LCTL_T(KC_LBRC), LT(1, KC_SPC),  LT(1, KC_ENT), RCTL_T(KC_RBRC), RGUI_T(KC_BSPC)
    ),
    [1] = LAYOUT_split_3x6_3(
        KC_TILD,        KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_MINS,
        _______,        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQL,
        _______,        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
                                                  _______, _______, _______,          _______, _______, _______
    ),
    [2] = LAYOUT_split_3x6_3(
        _______,     _______,  KC_WSCH,  MS_BTN5, MS_BTN4, _______,                            MS_WHLL,  MS_WHLD, MS_WHLU, MS_WHLR, MS_BTN1, KC_PGUP,
        _______,     _______,  MS_BTN2,  MS_BTN3, MS_BTN1, _______,                            KC_LEFT,  KC_DOWN, KC_UP,   KC_RGHT, MS_BTN3, KC_PGDN,
        _______,     _______,  KC_UNDO,  KC_PSTE, KC_COPY, KC_CUT ,                            MS_LEFT,  MS_DOWN, MS_UP,   MS_RGHT, MS_BTN2, KC_DEL,
                                                 _______, _______, _______,           _______, _______, _______
    )
};

#ifdef RGBLIGHT_ENABLE

const rgblight_segment_t PROGMEM layer0_colors[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, 85, 255, 75}
);
const rgblight_segment_t PROGMEM layer1_colors[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, 170, 255, 75}
);
const rgblight_segment_t PROGMEM layer2_colors[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, 0, 255, 75}
);
const rgblight_segment_t PROGMEM layer3_colors[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, 191, 255, 75}
);
const rgblight_segment_t PROGMEM layer4_colors[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, 30, 218, 75}
);
const rgblight_segment_t PROGMEM layer5_colors[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, 11, 176, 75}
);
const rgblight_segment_t PROGMEM layer6_colors[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, 106, 255, 75}
);

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    layer0_colors,
    layer1_colors,
    layer2_colors,
    layer3_colors,
    layer4_colors,
    layer5_colors,
    layer6_colors
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = rgb_layers;
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, 0));
    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, 0));
    rgblight_set_layer_state(1, layer_state_cmp(state, 1));
    rgblight_set_layer_state(2, layer_state_cmp(state, 2));
    rgblight_set_layer_state(3, layer_state_cmp(state, 3));
    rgblight_set_layer_state(4, layer_state_cmp(state, 4));
    rgblight_set_layer_state(5, layer_state_cmp(state, 5));
    rgblight_set_layer_state(6, layer_state_cmp(state, 6));
    return state;
}

#endif
