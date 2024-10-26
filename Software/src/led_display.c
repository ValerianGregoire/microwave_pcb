#include "led_display.h"

uint8_t hour_min(const uint32_t *time, uint8_t *d1, uint8_t *d2, uint8_t *d3, uint8_t *d4)
{
    uint8_t out = ERROR;

    uint8_t hour = *time / 3600;
    uint8_t minute = (*time / 3600.0 - floor(*time / 3600.0)) * 60;

    *d1 = hour / 10;
    *d2 = floor(hour % 10);
    
    *d3 = floor(minute / 10);
    *d4 = minute % 10;

    out = SUCCESS;

#ifdef DEBUG_STATE
    printf("Time: %lu\nHour: %d\nMinute: %d\nd1: %d\nd2: %d\nd3: %d\nd4: %d\n", *time, hour, minute, *d1, *d2, *d3, *d4);
#endif

    return out;
}

uint8_t min_sec(const uint32_t *time, uint8_t *d1, uint8_t *d2, uint8_t *d3, uint8_t *d4)
{
    uint8_t out = ERROR;

    uint8_t minute = (*time / 60) % 100;
    uint8_t second = *time % 60;

    *d1 = minute / 10;
    *d2 = floor(minute % 10);
    
    *d3 = floor(second / 10);
    *d4 = second % 10;

    out = SUCCESS;

#ifdef DEBUG_STATE
    printf("Time: %lu\nMinute: %d\nSecond: %d\nd1: %d\nd2: %d\nd3: %d\nd4: %d\n"
    ,*time, minute, second, *d1, *d2, *d3, *d4);
#endif

    return out;
}



uint8_t set_led_state(uint8_t num, uint8_t *display)
{
    uint8_t out = ERROR;

    // Set the LEDs on/off to match with numbers to display
    switch (num)
    {
    case 0:
        display[0] = 1; // a
        display[1] = 1; // b
        display[2] = 1; // c
        display[3] = 1; // d
        display[4] = 1; // e
        display[5] = 1; // f
        display[6] = 0; // g
        out = SUCCESS;
        break;
    case 1:
        display[0] = 1; // a
        display[1] = 1; // b
        display[2] = 0; // c
        display[3] = 0; // d
        display[4] = 0; // e
        display[5] = 0; // f
        display[6] = 0; // g
        out = SUCCESS;
        break;
    case 2:
        display[0] = 1; // a
        display[1] = 0; // b
        display[2] = 1; // c
        display[3] = 1; // d
        display[4] = 0; // e
        display[5] = 1; // f
        display[6] = 1; // g
        out = SUCCESS;
        break;
    case 3:
        display[0] = 1; // a
        display[1] = 1; // b
        display[2] = 1; // c
        display[3] = 0; // d
        display[4] = 0; // e
        display[5] = 1; // f
        display[6] = 1; // g
        out = SUCCESS;
        break;
    case 4:
        display[0] = 1; // a
        display[1] = 1; // b
        display[2] = 0; // c
        display[3] = 0; // d
        display[4] = 1; // e
        display[5] = 0; // f
        display[6] = 1; // g
        out = SUCCESS;
        break;
    case 5:
        display[0] = 0; // a
        display[1] = 1; // b
        display[2] = 1; // c
        display[3] = 0; // d
        display[4] = 1; // e
        display[5] = 1; // f
        display[6] = 1; // g
        out = SUCCESS;
        break;
    case 6:
        display[0] = 0; // a
        display[1] = 1; // b
        display[2] = 1; // c
        display[3] = 1; // d
        display[4] = 1; // e
        display[5] = 1; // f
        display[6] = 1; // g
        out = SUCCESS;
        break;
    case 7:
        display[0] = 1; // a
        display[1] = 1; // b
        display[2] = 0; // c
        display[3] = 0; // d
        display[4] = 0; // e
        display[5] = 1; // f
        display[6] = 0; // g
        out = SUCCESS;
        break;
    case 8:
        display[0] = 1; // a
        display[1] = 1; // b
        display[2] = 1; // c
        display[3] = 1; // d
        display[4] = 1; // e
        display[5] = 1; // f
        display[6] = 1; // g
        out = SUCCESS;
        break;
    case 9:
        display[0] = 1; // a
        display[1] = 1; // b
        display[2] = 1; // c
        display[3] = 0; // d
        display[4] = 1; // e
        display[5] = 1; // f
        display[6] = 1; // g
        out = SUCCESS;
        break;
    default:
        break;
    }
    return out;
}