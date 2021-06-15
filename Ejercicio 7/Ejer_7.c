#include <stdio.h>


int main(){
	struct cliente {
		char apellido[15];
		char nombre[15];
		char numeroCliente[10];
		struct{
			char numeroTelefono[11];
			char direccion[50];
			char ciudad[15];
			char estado[3];
			char codigoPostal[6];
		}personal;
	}registroCliente, *ptrCliente;
	
	ptrCliente = &registroCliente; 
	
	printf("Ingrese su apellido\n"); scanf("%s", registroCliente.apellido); printf("Su apellido es: %s\n", registroCliente.apellido); //A
	
	printf("Ingrese su apellido\n"); scanf("%s", ptrCliente->apellido); printf("Su apellido es: %s\n", ptrCliente->apellido); //B
	
	printf("\n");
	
	printf("Ingrese su nombre\n"); scanf("%s", registroCliente.nombre); printf("Su nombre es: %s\n", registroCliente.nombre); //C
	
	printf("Ingrese su nombre\n"); scanf("%s", ptrCliente->nombre); printf("Su nombre es: %s\n", ptrCliente->nombre); //D
	
	printf("\n");
	
	printf("Ingrese su numero de cliente\n"); scanf("%s", registroCliente.numeroCliente); printf("Su numero de cliente es: %s\n", registroCliente.numeroCliente); //E
	
	printf("Ingrese su numero de cliente\n"); scanf("%s", ptrCliente->numeroCliente); printf("Su numero de cliente es: %s\n", ptrCliente->numeroCliente); //F
	
	printf("\n");
	
	printf("Ingrese su numero de telefono\n"); scanf("%s", registroCliente.personal.numeroTelefono); printf("Su numero de telefono es: %s\n", registroCliente.personal.numeroTelefono); //G
	
	printf("Ingrese su numero de telefono\n"); scanf("%s", ptrCliente->personal.numeroTelefono); printf("Su numero de telefono es: %s\n", ptrCliente->personal.numeroTelefono); //H
	
	printf("\n");
	
	printf("Ingrese su direccion\n"); gets(registroCliente.personal.direccion); gets(registroCliente.personal.direccion); printf("Su direccion es: %s\n", registroCliente.personal.direccion); //I   tiene dobe gets porque si no me salta un error y el primer gets lo ignora
	
	printf("Ingrese su direccion\n"); gets(ptrCliente->personal.direccion); printf("Su direccion es: %s\n", ptrCliente->personal.direccion); //J
	
	printf("\n");
	
	printf("Ingrese su ciudad\n"); gets(registroCliente.personal.ciudad); printf("Su ciudad es: %s\n", registroCliente.personal.ciudad); //K
	
	printf("Ingrese su ciudad\n"); gets(ptrCliente->personal.ciudad); printf("Su ciudad es: %s\n", ptrCliente->personal.ciudad); //L
	
	printf("\n");
	
	printf("Ingrese su estado\n"); scanf("%s", registroCliente.personal.estado); printf("Su estado es: %s\n", registroCliente.personal.estado); //M
	
	printf("Ingrese su estado\n"); scanf("%s", ptrCliente->personal.estado); printf("Su estado es: %s\n", ptrCliente->personal.estado); //N
	
	printf("\n");
	
	printf("Ingrese su codigo postal\n"); scanf("%s", registroCliente.personal.codigoPostal); printf("Su codigo postal es: %s\n", registroCliente.personal.codigoPostal); //O
	
	printf("Ingrese su codigo postal\n"); scanf("%s", ptrCliente->personal.codigoPostal); printf("Su codigo postal es: %s\n", ptrCliente->personal.codigoPostal); //P
}