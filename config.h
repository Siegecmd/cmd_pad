// Copyright 2023 SiegeCMD (@SiegeCMD)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT


//encoder define
#define ENCODERS_PAD_A { F7 }
#define ENCODERS_PAD_B { F6 }
#define ENCODER_RESOLUTION 4

//rgb define
#define WS2812_DI_PIN D1 // LED pin
#undef RGBLED_NUM // remove previous def
#define RGBLED_NUM 8 // set to 8 leds
#define RGBLIGHT_DEFAULT_SPD 100 // set speed
#undef RGBLIGHT_DEFAULT_MODE // remove def
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL // set mode
#define RGBLIGHT_LAYERS // for layering later

//bootmagic (EZ flash)
#define BOOTMAGIC_LITE_ROW 0 // hold top left key when plugging in usb
#define BOOTMAGIC_LITE_COLUMN 0 // hold top left key when plugging in usb