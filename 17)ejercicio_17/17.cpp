#include <stdio.h>
#include <stdlib.h>

void cargar(int *cant);
void listado(int *cant);
void busqueda(int *cant);

struct info{
	char des[20];
	int cod;
	float precio;
}*producto,*productol;

int main() {
	int cant, m;
	do{
		printf("¿Que desea hacer?\n");
		printf("1- Cargar nuevo producto\n");
		printf("2- Mostrar listado de productos\n");
		printf("3- Buscar producto por su codigo\n");
		scanf("%d",&m);
		printf("\n");
		switch(m){
		case 1:
			cargar(&cant);
			break;
		case 2:
			listado(&cant);
			break;
		case 3:
			busqueda(&cant);
			break;
		}
		printf("\n");
	} while( (0<=m) && (m<=3) );
	return 0;
}

void cargar(int *cant){
	printf("¿Cuantos productos va a ingresar?");
	scanf("%d",cant);
	printf("\n");
	
	for(int i=1; i<=(*cant); i++){
		producto=( struct info*) malloc (sizeof(struct info) );                                                                                    
		printf("Decripcion: ");scanf("%s",producto->des);
		printf("Codigo: ");scanf("%d",&producto->cod);
		printf("Precio: "); scanf("%f",&producto->precio);
		
		FILE *ptr;                                                                    
		if( (ptr=fopen("producto.dat","ab") ) == NULL){
			printf("\nError al abrir el archivo para escritura");
		}
		else{
			fwrite(producto, sizeof (struct info), 1, ptr);                   
			fclose(ptr);
		}                                                              
		free(producto);                                                             
		producto=NULL;                                                       
	}  
}
void listado(int *cant){                                                      
	productol=( struct info*) calloc ((*cant),sizeof(struct info) );     
	FILE *ptr;
	
	if( (ptr=fopen("producto.dat","rb") ) == NULL){
		printf("Error al abrir el archivo de lectura");
	}
	else{
		fread(productol,sizeof(struct info),1,ptr);                      
		while ( !feof(ptr)) {                                                     
			printf("Productos: %s\n", productol->des);
			printf("Codigo: %i\n", productol->cod);
			printf("Precio: %f\n",productol->precio);
			fread(productol,sizeof(struct info),1,ptr);                                  
		}
	}
	fclose(ptr);
	free(productol);
	productol=NULL;
}

void busqueda(int *cant){
	int codi;	
	FILE *ptr;
	productol=( struct info*) calloc ((*cant),sizeof(struct info) );
	printf("Ingrese el codigo del producto que desea buscar: ");
	scanf("%d",&codi);
	printf("\n");
	if( (ptr=fopen("producto.dat","r") ) == NULL){
		printf("Error al abrir el archivo de lectura");
	}
	else{
	fread(productol,sizeof(struct info),1,ptr);                   
	
	while ( !feof(ptr)) {
		if(codi==(productol->cod)){                                  
			printf("Productos: %s\n",productol->des);
			printf("Codigo: %i\n",productol->cod);
			printf("Precio: %f\n",productol->precio);
		}
		fread(productol,sizeof(struct info),1,ptr);	                
	}
	}
	fclose(ptr);
	free(productol);
	productol=NULL;
}
