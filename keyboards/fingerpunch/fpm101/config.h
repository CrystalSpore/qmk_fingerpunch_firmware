/*
Copyright 2021 Sadek Baroudi <sadekbaroudi@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once


#pragma once

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* key matrix size */
/* Rows are doubled up */
#define MATRIX_ROWS 9
#define MATRIX_COLS 8

// SHIFT REGISTER
// Only needed for matrix_74hc595_spi.c
#define SHIFTREG_MATRIX_COL_CS B6
#define SHIFTREG_DIVISOR 8 // needs to be the same as the PMW33XX_CS_DIVISOR below
#define MATRIX_ROW_PINS_SR { D4, C6, D7, E6, B4, F4, F5, F6, F7 }

#define RGB_DI_PIN D3
#ifdef RGBLIGHT_ENABLE
  #define RGBLED_NUM 65
  #define RGBLIGHT_HUE_STEP 16
  #define RGBLIGHT_SAT_STEP 16
  #define RGBLIGHT_VAL_STEP 16
  #define RGBLIGHT_LIMIT_VAL 150 /* The maximum brightness level for RGBLIGHT_ENABLE */
  #define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
  #define RGBLIGHT_EFFECT_ALTERNATING
  #define RGBLIGHT_EFFECT_BREATHING
  #define RGBLIGHT_EFFECT_CHRISTMAS
  #define RGBLIGHT_EFFECT_KNIGHT
  #define RGBLIGHT_EFFECT_RAINBOW_MOOD
  #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
  #define RGBLIGHT_EFFECT_SNAKE
  #define RGBLIGHT_EFFECT_STATIC_GRADIENT
  #define RGBLIGHT_EFFECT_TWINKLE
#endif

#ifdef RGB_MATRIX_ENABLE
  #define RGB_MATRIX_LED_COUNT 65
  #define RGB_MATRIX_CENTER {100, 32}
  #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150  /* The maximum brightness level for RGB_MATRIX */
  #define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS // Sets the default brightness value, if none has been set
  #define RGB_MATRIX_KEYPRESSES
  #define RGB_MATRIX_FRAMEBUFFER_EFFECTS
  #define RGB_MATRIX_KEYREACTIVE_ENABLED
  #define ENABLE_RGB_MATRIX_ALPHAS_MODS
  #define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
  #define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
  #define ENABLE_RGB_MATRIX_BREATHING
  #define ENABLE_RGB_MATRIX_BAND_SAT
  #define ENABLE_RGB_MATRIX_BAND_VAL
  #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
  #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
  #define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
  #define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
  #define ENABLE_RGB_MATRIX_CYCLE_ALL
  #define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
  #define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
  #define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
  #define ENABLE_RGB_MATRIX_DUAL_BEACON
  #define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
  #define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
  #define ENABLE_RGB_MATRIX_RAINBOW_BEACON
  #define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
  #define ENABLE_RGB_MATRIX_RAINDROPS
  #define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
  #define ENABLE_RGB_MATRIX_DIGITAL_RAIN
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
  #define ENABLE_RGB_MATRIX_SPLASH
  #define ENABLE_RGB_MATRIX_MULTISPLASH
  #define ENABLE_RGB_MATRIX_SOLID_SPLASH
  #define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#endif

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

// SPI config for shift register (and trackball if enabled)
#define SPI_DRIVER SPID1
#define SPI_SCK_PIN B1
#define SPI_SCK_PAL_MODE 5
#define SPI_MOSI_PIN B2
#define SPI_MOSI_PAL_MODE 5
#define SPI_MISO_PIN B3
#define SPI_MISO_PAL_MODE 5

// If we have audio enabled, that means we're not using the left encoder, as they share a pin on the controller
// Note that you need to solder the jumper on the pcb to use the audio buzzer on the pcb if you are not using the left encoder
#ifdef AUDIO_ENABLE
    #define ENCODERS_PAD_A {F1, B7}
    #define ENCODERS_PAD_B {F0, D5}
    #define ENCODER_RESOLUTIONS { 2, 1 }
#else
    #define ENCODERS_PAD_A {C7, F1, B7}
    #define ENCODERS_PAD_B {D2, F0, D5}
    #define ENCODER_RESOLUTIONS { 2, 2, 1 }
#endif

// #define MOUSEKEY_WHEEL_DELAY 0
// #define MOUSEKEY_WHEEL_INTERVAL 10
// #define MK_W_OFFSET_UNMOD 4
// #define MK_W_INTERVAL_UNMOD 10
// #define MOUSEKEY_WHEEL_INITIAL_MOVEMENTS 32


#ifdef AUDIO_ENABLE
    #define AUDIO_VOICES
    #define AUDIO_PIN F1
    #define AUDIO_PWM_DRIVER PWMD2
    #define AUDIO_PWM_CHANNEL 1
    #define AUDIO_STATE_TIMER GPTD4
    #define AUDIO_VOICES
    // #define AUDIO_PWM_PAL_MODE 42 // only if using AUDIO_DRIVER = pwm_hardware
    // #define NO_MUSIC_MODE
    #define AUDIO_ENABLE_TONE_MULTIPLEXING
    #define AUDIO_TONE_MULTIPLEXING_RATE_DEFAULT 10
    #define FP_AUDIO_MOUSE_BUTTONS
    #define FP_AUDIO_CUT_COPY_PASTE
    #define FP_AUDIO_SAVE
    #define STARTUP_SONG SONG(STARTUP_SOUND)
    #define DEFAULT_LAYER_SONGS \
        { SONG(QWERTY_SOUND), SONG(COLEMAK_SOUND) }
#endif

#ifdef HAPTIC_ENABLE
    #define FB_ERM_LRA 1
    #define FB_BRAKEFACTOR 3 // For 1x:0, 2x:1, 3x:2, 4x:3, 6x:4, 8x:5, 16x:6, Disable Braking:7
    #define FB_LOOPGAIN 1 // For  Low:0, Medium:1, High:2, Very High:3
    #define RATED_VOLTAGE 2
    #define V_PEAK 2.8
    #define V_RMS 2.0
    #define F_LRA 150 // resonance freq
    #define DRV_GREETING  alert_750ms
    #define FP_HAPTIC_MOUSE_BUTTONS
    #define FP_HAPTIC_CUT_COPY_PASTE
    #define FP_HAPTIC_SAVE
#endif

#ifdef CIRQUE_ENABLE
  // cirque trackpad config
  #define CIRQUE_PINNACLE_ADDR 0x2A
  #define POINTING_DEVICE_ROTATION_90
  #define CIRQUE_PINNACLE_TAP_ENABLE
  #define POINTING_DEVICE_TASK_THROTTLE_MS 5
  #define I2C1_CLOCK_SPEED  400000
  #define I2C1_DUTY_CYCLE FAST_DUTY_CYCLE_2
#endif

#ifdef FP_TRACKBALL_ENABLE
  // Trackball config
  #define FP_POINTING_DEFAULT_DPI 800
  #define PMW33XX_CS_PIN B5
  #define PMW33XX_CPI FP_POINTING_DEFAULT_DPI
  #define PMW33XX_CS_DIVISOR 8 // needs to be the same as the SHIFTREG_DIVISOR above
  #define POINTING_DEVICE_INVERT_Y
#endif

