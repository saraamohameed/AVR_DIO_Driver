/*
 * main.c
 *
 *  Created on: Nov 20, 2022
 *      Author: hp
 */
#include "BIT_CALC.h"
#include "STD_Types.h"
#include "DIO_Interface.h"
#include "avr\delay.h"


void main(void){

	DIO_Set_Port_dir(GROUP_A, 0b11111111);
	while(1){
	DIO_Set_Port_value (GROUP_A,0b11111111);
	_delay_ms(1000);
	}
}

