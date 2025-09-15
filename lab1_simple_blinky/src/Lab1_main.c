#include "stm32l432xx.h"
#include "lib_ee152.h"
#include "stm32l4xx_hal.h"

// int main(void){
//     //clock_setup_16MHz();		// 16 MHz, AHB and APH1/2 prescale=1x
//     clock_setup_80MHz();		// 80 MHz, AHB and APH1/2 prescale=1x

//     // The green LED is at Nano D13, or PB3. We'll use D12 for the red LED.

//     /* PART 1 OF LAB: BLINK 1 LED */
//     pinMode(D13, "OUTPUT");
//     pinMode(D12, "OUTPUT");

// //     bool value=0;
// //     while (1) {
// // 	// The LED is at PB3, or Nano D13.
// // 	digitalWrite (D13, value);
// // 	digitalWrite (D12, value);

// // 	value = !value;
// // 	delay (500);
// //     }

//     /* PART 2 OF LAB: 2 LEDS */


//         bool valueRed = 0;
//         bool valueGreen = 0;
//         enum Pin red = D13;
//         enum Pin green = D12;
//         digitalWrite(green, valueGreen);
//         digitalWrite(red, valueRed);
//         while (1) {
//             /* Alternate Them */
//             digitalWrite (red, valueRed);
//             digitalWrite (green, valueGreen);

//             valueRed = !valueRed;
//             valueGreen = !valueGreen;
//             delay(500);

//             /* 2-3 Dance */

//             // // Turn green on 1st time at 167ms
//             // delay(167);
//             // digitalWrite(green, 1);

//             // //turn red on 1st time at 250ms
//             // delay(83);
//             // digitalWrite(red, 1);

//             // //turn green off 1st time at 334ms
//             // delay(84);
//             // digitalWrite(green, 0);

//             // //turn red off 1st time at 500ms
//             // delay(166);
//             // digitalWrite(red, 0);

//             // //turn green on 2nd time at 501ms
//             // delay(1);
//             // digitalWrite(green, 1);

//             // //turn green off 2nd time at 668ms
//             // delay(167);
//             // digitalWrite(green, 0);

//             // //turn red on 2nd time at 750ms
//             // delay(82);
//             // digitalWrite(red, 1);

//             // //turn green on 3rd time at 835ms
//             // delay(85);
//             // digitalWrite(green, 1);

//             // //turn both off at 1 second
//             // delay(165);
//             // digitalWrite(green, 0);
//             // digitalWrite(red, 0);

//         }

// }