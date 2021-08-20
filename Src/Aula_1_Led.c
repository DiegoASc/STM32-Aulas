//Aulas: Arquivo contendo o c�digo fonte.
//Aulas: Aqui deve conter as defini��es das fun��es, vari�veis e constantes.

#include "main.h"//Aulas: Configura��o gerais do microcontrolador inclusive de pinos.
//Aulas: "HAL - Hardware Abstraction Layer", camada de abstra��o de hardware.
#include "stm32f1xx_hal.h"//Aulas: Camada entre o hardware f�sico (registradores) e o software.
#include "gpio.h"//Aulas: Configura��es e fun��es das portas e pinos.
#include "Aulas.h"//Aulas: Arquivo de cabe�alho contendo os prot�tipos de fun��es usadas externamente.

void setup(void)//Configura��es iniciais do c�digo e de seus perif�ricos.
{
}
void loop(void)//Aulas: Fun��o chamada a cada ciclo em um looping infinito.
{
  HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_RESET);
	HAL_Delay(50);	
	HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_SET);
	HAL_Delay(50);	
}

