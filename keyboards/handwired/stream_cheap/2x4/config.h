#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0x7363  // Stream Cheap
#define PRODUCT_ID 0x1214
#define DEVICE_VER 0x0001
#define MANUFACTURER Stream Cheap
#define PRODUCT 2x4

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 4

/* define direct pins used */
#define DIRECT_PINS                          \
    {                                        \
        {E6, D7, B6, B2}, {B5, B4, B3, B1} \
    }

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
