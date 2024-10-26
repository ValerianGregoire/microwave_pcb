#ifndef __PIC
#define __PIC

#include "base.h"

/*******************************************************************************
Vectored Interrupt Controller Module - Datasheet 118
*******************************************************************************/

#define INTCON1 *(uint32_t *)0x461
#define INTCON2 *(uint32_t *)0x462
#define SHADCON *(uint32_t *)0x376

#define IVTLOCK *(uint32_t *)0x460
#define IVTAD *(uint32_t *)0x463
#define IVTBASE *(uint32_t *)0x466

// PERIPHERAL INTERRUPT ENABLE REGISTERS

#define PIE0 *(uint32_t *)0x473
#define PIE1 *(uint32_t *)0x474
#define PIE2 *(uint32_t *)0x475
#define PIE3 *(uint32_t *)0x476
#define PIE4 *(uint32_t *)0x477
#define PIE5 *(uint32_t *)0x478
#define PIE6 *(uint32_t *)0x479
#define PIE7 *(uint32_t *)0x47A
#define PIE8 *(uint32_t *)0x47B
#define PIE9 *(uint32_t *)0x47C

// PERIPHERAL INTERRUPT REQUEST REGISTERS

#define PIR0 *(uint32_t *)0x469
#define PIR1 *(uint32_t *)0x46A
#define PIR2 *(uint32_t *)0x46B
#define PIR3 *(uint32_t *)0x46C
#define PIR4 *(uint32_t *)0x46D
#define PIR5 *(uint32_t *)0x46E
#define PIR6 *(uint32_t *)0x46F
#define PIR7 *(uint32_t *)0x470
#define PIR8 *(uint32_t *)0x471
#define PIR9 *(uint32_t *)0x472

#define IPR0 *(uint32_t *)0x47D
#define IPR1 *(uint32_t *)0x47E
#define IPR2 *(uint32_t *)0x47F
#define IPR3 *(uint32_t *)0x480
#define IPR4 *(uint32_t *)0x481
#define IPR5 *(uint32_t *)0x482
#define IPR6 *(uint32_t *)0x483
#define IPR7 *(uint32_t *)0x484
#define IPR8 *(uint32_t *)0x485
#define IPR9 *(uint32_t *)0x486

// REG SUMMARY FOR INTERRUPTS P175

/*******************************************************************************
Oscillator Module - Datasheet 176
*******************************************************************************/

#define INTCON1 *(uint32_t *)0x461

#endif