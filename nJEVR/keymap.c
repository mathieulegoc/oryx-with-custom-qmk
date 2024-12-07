#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_moonlander(
        KC_EQUAL, KC_1, KC_2, KC_3, KC_4, KC_5, KC_F12, KC_NO, KC_6, KC_7, KC_8,
        KC_9, KC_0, KC_MINUS, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,
        LALT(LCTL(LSFT(KC_X))), KC_NO, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS,
        KC_ESCAPE, KC_A, MT(MOD_LCTL, KC_S), MT(MOD_LALT, KC_D),
        MT(MOD_LGUI, KC_F), KC_G, KC_LBRC, KC_RBRC, KC_H, MT(MOD_RGUI, KC_J),
        MT(MOD_RALT, KC_K), MT(MOD_RCTL, KC_L), KC_SCLN, KC_QUOTE,
        KC_LEFT_SHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA,
        KC_DOT, KC_SLASH, KC_RIGHT_SHIFT, KC_GRAVE, MO(1), MO(2), KC_LEFT,
        KC_RIGHT, KC_NO, LALT(LCTL(LSFT(KC_C))), KC_UP, KC_DOWN, KC_NO, KC_PSCR,
        MO(3), KC_SPACE, KC_BSPC, KC_NO, KC_NO, KC_DELETE, KC_ENTER),
    [1] = LAYOUT_moonlander(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, QK_BOOT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_W),
        KC_TRANSPARENT, LCTL(KC_R), LCTL(KC_T), KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_A), LCTL(KC_S),
        KC_TRANSPARENT, LCTL(KC_F), KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), LCTL(KC_B),
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_MEDIA_PLAY_PAUSE, KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT),
    [2] = LAYOUT_moonlander(
        KC_TRANSPARENT, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_F12, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_PAGE_UP, KC_PGDN, KC_HOME, KC_END,
        KC_TRANSPARENT, RGB_VAI, RGB_VAD, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT),
    [3] = LAYOUT_moonlander(
        KC_ESCAPE, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_SHIFT, KC_Z,
        KC_X, KC_C, KC_B, KC_B, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_CTRL, QK_LLCK,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_SPACE, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) { rgb_matrix_enable(); }

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = {{0, 0, 0},     {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
           {0, 0, 0},     {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {41, 255, 255},
           {0, 0, 0},     {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {74, 255, 255},
           {0, 0, 0},     {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
           {0, 0, 0},     {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
           {0, 0, 0},     {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
           {0, 0, 0},     {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
           {0, 0, 0},     {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
           {0, 245, 245}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
           {0, 0, 0},     {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
           {0, 0, 0},     {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
           {0, 0, 0},     {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
           {0, 0, 0},     {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
           {0, 0, 0},     {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
           {0, 0, 0},     {0, 0, 0}},

    [1] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
           {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
           {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {41, 255, 255},
           {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {41, 255, 255},
           {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {41, 255, 255},
           {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
           {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
           {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
           {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
           {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
           {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
           {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
           {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
           {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
           {0, 0, 0}, {0, 0, 0}},

    [2] = {{0, 0, 0},      {0, 0, 0},      {0, 0, 0},      {0, 0, 0},
           {0, 0, 0},      {74, 255, 255}, {0, 0, 0},      {0, 0, 0},
           {0, 0, 0},      {0, 0, 0},      {74, 255, 255}, {0, 0, 0},
           {0, 0, 0},      {0, 0, 0},      {0, 0, 0},      {74, 255, 255},
           {0, 0, 0},      {0, 0, 0},      {0, 0, 0},      {74, 255, 255},
           {74, 255, 255}, {0, 0, 0},      {0, 0, 0},      {0, 0, 0},
           {74, 255, 255}, {74, 255, 255}, {0, 0, 0},      {0, 0, 0},
           {0, 0, 0},      {0, 0, 0},      {0, 0, 0},      {0, 0, 0},
           {0, 0, 0},      {0, 0, 0},      {0, 0, 0},      {0, 0, 0},
           {74, 255, 255}, {74, 255, 255}, {0, 0, 0},      {0, 0, 0},
           {0, 0, 0},      {74, 255, 255}, {0, 0, 0},      {0, 0, 0},
           {0, 0, 0},      {74, 255, 255}, {74, 255, 255}, {0, 0, 0},
           {0, 0, 0},      {0, 0, 0},      {74, 255, 255}, {74, 255, 255},
           {0, 0, 0},      {0, 0, 0},      {0, 0, 0},      {74, 255, 255},
           {74, 255, 255}, {0, 0, 0},      {0, 0, 0},      {0, 0, 0},
           {74, 255, 255}, {74, 255, 255}, {0, 0, 0},      {0, 0, 0},
           {0, 0, 0},      {0, 0, 0},      {0, 0, 0},      {0, 0, 0},
           {0, 0, 0},      {0, 0, 0},      {0, 0, 0},      {0, 0, 0}},

    [3] = {{0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245},
           {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245},
           {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245},
           {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245},
           {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245},
           {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245},
           {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245},
           {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245},
           {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245},
           {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245},
           {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245},
           {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245},
           {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245},
           {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245},
           {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245},
           {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245},
           {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245},
           {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}},

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
        .h = pgm_read_byte(&ledmap[layer][i][0]),
        .s = pgm_read_byte(&ledmap[layer][i][1]),
        .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
      rgb_matrix_set_color(i, 0, 0, 0);
    } else {
      RGB rgb = hsv_to_rgb(hsv);
      float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
      rgb_matrix_set_color(i, f * rgb.r, f * rgb.g, f * rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
    return false;
  }
  if (keyboard_config.disable_layer_led) {
    return false;
  }
  switch (biton32(layer_state)) {
  case 0:
    set_layer_color(0);
    break;
  case 1:
    set_layer_color(1);
    break;
  case 2:
    set_layer_color(2);
    break;
  case 3:
    set_layer_color(3);
    break;
  default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

  case RGB_SLD:
    if (rawhid_state.rgb_control) {
      return false;
    }
    if (record->event.pressed) {
      rgblight_mode(1);
    }
    return false;
  }
  return true;
}

