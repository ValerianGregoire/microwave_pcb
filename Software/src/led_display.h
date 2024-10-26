#ifndef __LED_DISPLAY
#define __LED_DISPLAY

#include "base.h"

/*  @brief Converts a time value to hours and minutes as display
    @param time: Moment of the day in seconds
    @param d1-4: Digit of the display from left to right */
uint8_t hour_min(const uint32_t *time, uint8_t *d1, uint8_t *d2, uint8_t *d3, uint8_t *d4);

/*  @brief Converts a time value to minutes and seconds as display
    @param time: Time in seconds
    @param d1-4: Digit of the display from left to right */
uint8_t min_sec(const uint32_t *time, uint8_t *d1, uint8_t *d2, uint8_t *d3, uint8_t *d4);


uint8_t set_led_state(uint8_t num, uint8_t *display);

#endif