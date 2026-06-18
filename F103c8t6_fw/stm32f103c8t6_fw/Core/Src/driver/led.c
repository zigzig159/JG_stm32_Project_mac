/*
 * led.c
 *
 *  Created on: Feb 14, 2026
 *      Author: junggil
 */

#include "led.h"

/*Driver 함수 ----------------------*/

//Led gpio 초기화
void Led_Init(void){

}

//Led 점등 함수, gpio가 Low 일때 점등 됨
void Led_On(void){
	HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_RESET);
}

//Led 소등 함, gpio가 high 일때 소등 됨
void Led_Off(void){
	HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_SET);
}

//Led 토글 함
void Led_Toggle(void){
	HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
}
