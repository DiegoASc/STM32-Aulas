//Aulas: Arquivo contendo o código fonte.
//Aulas: Aqui deve conter as definições das funções, variáveis e constantes.

#include "main.h"//Aulas: Configuração gerais do microcontrolador inclusive de pinos.
//Aulas: "HAL - Hardware Abstraction Layer", camada de abstração de hardware.
#include "stm32f1xx_hal.h"//Aulas: Camada entre o hardware físico (registradores) e o software.
#include "gpio.h"//Aulas: Configurações e funções das portas e pinos.
#include "Aulas.h"//Aulas: Arquivo de cabeçalho contendo os protótipos de funções usadas externamente.

void setup(void)//Configurações iniciais do código e de seus periféricos.
{
}
void loop(void)//Aulas: Função chamada a cada ciclo em um looping infinito.
{
  HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_RESET);
	HAL_Delay(50);	
	HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_SET);
	HAL_Delay(50);	
}

