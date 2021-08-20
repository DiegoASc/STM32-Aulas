#include "main.h"
#include "stm32f1xx_hal.h"
#include "gpio.h"
#include "Aulas.h"
#include "OLED_Hal_I2C.h"

int variavel;

void setup(void) {
	Oled_Printf(1," STM32F103C8T6 ");
}
void loop(void) {
	Oled_Printf(3,"Variavel %i   ",variavel);
	variavel++;	
	HAL_Delay(1000);
}
