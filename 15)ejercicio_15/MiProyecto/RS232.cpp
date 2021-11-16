#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>
#include "rs232.h"

#define LONG_BUFFER 4096

int main(){
	int COM = 4;
	int baudios = 115200;
	char modo[]={'8','N','1',0};
	
	unsigned char bufferRecepcion[LONG_BUFFER];
	int cantidadBytes;
	
	if(RS232_OpenComport(COM, baudios, modo, 0)){
		printf("No se puede abrir el puerto COM\n");
		return 0;
	}
	
	while(1){
		RS232_SendByte(COM, 'E');
		Sleep(1000);
		
		cantidadBytes = RS232_PollComport(COM, bufferRecepcion, LONG_BUFFER-1);
		
		if(cantidadBytes > 0)
		{
			bufferRecepcion[cantidadBytes] = 0;
			
			printf("Se recibieron %i bytes: %s\n", cantidadBytes, (char *)bufferRecepcion);
		}
		
		RS232_SendByte(COM, 'A');
		Sleep(1000);
		
		cantidadBytes = RS232_PollComport(COM, bufferRecepcion, LONG_BUFFER-1);
		
		if(cantidadBytes > 0)
		{
			bufferRecepcion[cantidadBytes] = 0;   // Poner un NULL al final del string
			
			printf("Se recibieron %i bytes: %s\n", cantidadBytes, (char *)bufferRecepcion);
		}
		
	}
}
