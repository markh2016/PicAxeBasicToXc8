/*
 * File:   test2.c
 * Author: mark
 *
 * Created on 30 August 2023, 16:40
 */


// PIC12F675 Configuration Bit Settings

// 'C' source line config statements

// CONFIG
#pragma config FOSC = INTRCIO   // Oscillator Selection bits (INTOSC oscillator: I/O function on GP4/OSC2/CLKOUT pin, I/O function on GP5/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-Up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = OFF      // GP3/MCLR pin function select (GP3/MCLR pin function is digital I/O, MCLR internally tied to VDD)
#pragma config BOREN = ON       // Brown-out Detect Enable bit (BOD enabled)
#pragma config CP = OFF         // Code Protection bit (Program Memory code protection is disabled)
#pragma config CPD = OFF        // Data Code Protection bit (Data memory code protection is disabled)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>
#define _XTAL_FREQ 4000000  // Assuming a 4MHz oscillator frequency

#define RED GP4
#define GOLD GP2

unsigned char counter1;
unsigned char counter2;
unsigned char counter4;
unsigned char counter5;
unsigned char math;

void pause(unsigned int ms) {
    for (unsigned int i = 0; i < ms; i++) {
        __delay_ms(1);
    }
}

void main(void) {
    TRISIO = 0b000010; // Set GP3 as input, others as output

    while (1) {
        if (GP3 == 0) {
            pause(3000);
        } else {
            for (counter5 = 255; counter5 != 255u; counter5--) {
                RED = 0;
                GOLD = 0;
                math = 255u - counter5;
                pause(math);
                RED = 1;
                GOLD = 1;
                pause(math);
                if (GP3 == 0) {
                    break;
                }
            }

            for (counter5 = 255; counter5 !=255 ; counter5--) {
                RED = 0;
                GOLD = 0;
                math = (unsigned)math + 1;
                pause(math);
                RED = 1;
                GOLD = 1;
                pause(math);
                if (GP3 == 0) {
                    break;
                }
            }
        }

//game
        for (counter1 = 1; (unsigned)counter1 <= 25; counter1++) {
            RED = 1;
            GOLD = 0;
            pause(100);
            GOLD = 1;
            RED = 0;
            pause(100);
        }

        for (counter2 = 1; (unsigned)counter2 <= 59; counter2++) {
            RED = 0;
            GOLD = 0;
            pause(58000);
            for (counter4 = 1; (unsigned)counter4 <= 50; counter4++) {
                RED = 1;
                GOLD = 0;
                pause(50);
                GOLD = 1;
                RED = 0;
                pause(50);
            }
        }

        while (1) {
            RED = 1;
            GOLD = 0;
            pause(750);
            GOLD = 1;
            RED = 0;
            pause(750);
        }

        RED = 0;
        GOLD = 0;
    }
}

