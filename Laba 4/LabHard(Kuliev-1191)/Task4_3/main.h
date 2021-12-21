#include "stm32f0xx.h"									//Подключение библиотеки с моделью stm32f0xx															
void InitUSART1(void);									//Декларация функции инициализации USART1																		
void USART1_IRQHandler(void); 					//Декларация функции обработки прерывания от USART1													
uint32_t pov(int32_t, int32_t);       	//Декларация функции вычисления степени (в открытом доступе)	  					
int32_t geometric_progressive(int32_t, int32_t, int32_t);//Декларация функции геометрической прогрессии							
void numToArray(int32_t);								//Декларация функции вывода числа в терминал PuTTy													
void debug(void);												//Декларация функции отладчика																							
