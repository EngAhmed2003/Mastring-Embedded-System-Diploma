#include "Uart.h"

unsigned char string_name[100]= "Ahmed AL-Qasabi" ;
unsigned char const string_name_2[100]= "Ahmed AL-Qasabi" ;
void main(){
	UART_Send_String(string_name);
}