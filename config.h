// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25

#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1
// #define SERIAL_USART_PIN_SWAP
// #define SELECT_SOFT_SERIAL_SPEED 1

#include_next <mcuconf.h>
#undef RP_I2C_USE_I2C0
#define RP_I2C_USE_I2C0 TRUE
#undef RP_I2C_USE_I2C1
#define RP_I2C_USE_I2C1 FALSE
#define HAL_USE_I2C TRUE
#include_next <halconf.h>
#undef I2C_DRIVER
#define I2C_DRIVER I2CD0
#undef I2C1_SCL_PIN
#define I2C1_SCL_PIN GP1
#undef I2C1_SDA_PIN
#define I2C1_SDA_PIN GP0
#define OLED_DISPLAY_128X64
#define OLED_DISPLAY_WIDTH 128
#define OLED_DISPLAY_HEIGHT 64


#define USB_VBUS_PIN GP19

// #define SPLIT_HAND_PIN GP17
// #define SPLIT_HAND_PIN_LOW_IS_LEFT

// #define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_GRB
// #define RGBLIGHT_ANIMATIONS
// #define RGBLIGHT_EFFECT_BREATHE_CENTER 1.2
// #define RGBLIGHT_EFFECT_RGB_TEST
#ifdef RGBLIGHT_ENABLE
#    define RGBLIGHT_EFFECT_BREATHING
#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#    define RGBLIGHT_EFFECT_KNIGHT
#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
#    define RGBLIGHT_EFFECT_TWINKLE
#endif
// RGB Modes
// 1 = Static
// 2-5 = Breathing
// 6-8 = Rainbow mood
// 9-14 = Rainbow WAVES
// 15-17 = Snake
// 18-27 = Static Gradient
// 28-33 = Waves

#define RGBLIGHT_LED_COUNT 16    // Number of LEDs
// #define RGBLED_NUM 16
// #define RGBLIGHT_SPLIT      // sync split halfs
// #define RGBLIGHT_SLEEP      //  the RGB lighting will be switched off when the host goes to sleep
#define RGBLIGHT_HUE_STEP 2
#define RGBLIGHT_SAT_STEP 51
#define RGBLIGHT_VAL_STEP 51

#define TAPPING_TERM 100
