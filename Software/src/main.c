/*******************************************************************************
Microwave PIC


VALERIAN GREGOIRE--BEGRANGER - 2024
*******************************************************************************/

#include "base.h"
#include "led_display.h"
#include "pic.h"

int main(int argc, char *argv[])
{

    uint8_t d1, d2, d3, d4;
    uint32_t time = 55805;

    hour_min(&time, &d1, &d2, &d3, &d4);
    printf("\n");
    min_sec(&time, &d1, &d2, &d3, &d4);
}