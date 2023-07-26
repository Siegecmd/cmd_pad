// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
        0      1      2      3
    +------+------+------+------+ 
    |   D0  |  C6  |  B3  |  F5  |   0
    +------+------+------+------+ 
    |   D4  |  D7  |  B2  |  B1  |   1
    +------+------+------+------+ 
     */
    [0] = LAYOUT_ortho_4x2(
        KC_F13,   KC_F14,   KC_F15,   KC_MUTE,
        KC_F16,   KC_F17,   KC_F18,   KC_F19
    )
};

//encoder 
bool encoder_update_user(uint8_t index, bool clockwise) {
  if (clockwise) {
    tap_code(KC_VOLU); // volume up CW
  } else {
    tap_code(KC_VOLD); // volume down CCW
  }
      return(0);
};

void keyboard_post_init_user(void) {
    rgblight_enable_noeeprom(); // enables Rgb, without saving settings
    rgblight_increase_speed_noeeprom(); // increase speed
    rgblight_mode_noeeprom(RGBLIGHT_MODE_RAINBOW_SWIRL + 4); // set mode + type (edit these for more settings)
}