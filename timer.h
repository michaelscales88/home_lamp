#include <avr/pgmspace.h>
#include <stdlib.h>
#include <inttypes.h>
#include "types.h"

#pragma once

#define PIN_TO_TIMER(PIN) (Timer*)pgm_read_word(&pin_to_timer_map[PIN])

typedef struct
{
  volatile uint16_t *output;
  volatile byte     *register_a;
  volatile byte     *register_b;
} Timer;

extern const Timer * const pin_to_timer_map[];
