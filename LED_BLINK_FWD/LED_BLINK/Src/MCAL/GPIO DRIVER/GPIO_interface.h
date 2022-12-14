/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  GPIO_interface.h
 *       Module:  -
 *
 *  Description:  THIS IS THE HEADER FILE FOR GPIO DRIVER   
 *  
 *********************************************************************************************************************/
#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "GPIO_private.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'
#define PORT_F 'F'

#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7
/* Direction defines */
#define IN 0
#define OUT 1

/* Value defines */
#define LOW 0
#define HIGH 1

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

void GPIOD_init(void);                 /* Initialize General Purpose Digital Input/Output */
void GPIOD_write(uint8_t value);       /* Write General Purpose Digital Input/Output */

#endif  /* GPIO_H */

/**********************************************************************************************************************
 *  END OF FILE: GPIO.h
 *********************************************************************************************************************/
