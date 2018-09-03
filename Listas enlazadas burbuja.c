#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo{
	int dato;
	struct Nodo *siguiente;
	struct Nodo *anterior;
}Nodo;//Aquí se definen los tipos de datos

Nodo *inicio=NULL;
Nodo *ultimo=NULL;//Se inicializan variables


void agregar(Nodo *nodo){
	nodo -> siguiente = NULL;
	if(inicio==NULL){
		inicio=nodo;
		ultimo=nodo;
	}
	else{
		ultimo -> siguiente = nodo;
		ultimo = nodo;
	}
}//Esta función sirve para agregar datos

void ordenar(){
	Nodo *externo=inicio;
	while(externo!=NULL){
		Nodo *interno=externo->siguiente;
		while(interno!=NULL){
			if((externo->dato)<(interno->dato)){
				int aux=externo->dato;
				externo->dato=interno->dato;
				interno->dato=aux;
			}
			interno=interno->siguiente;
		}
		externo=externo->siguiente;
	}
}//Esta función ordena los datos mediante burbuja
int main(int argc, char *argv[]) {

	
	Nodo *primero=malloc(sizeof(Nodo));
	primero -> dato = 2;
	
	Nodo *segundo=malloc(sizeof(Nodo));
	segundo -> dato= 3;
	
	Nodo *tercero=malloc(sizeof(Nodo));
	tercero -> dato=4;
	
	Nodo *cuarto=malloc(sizeof(Nodo));
	cuarto -> dato=6;
	
	Nodo *quinto=malloc(sizeof(Nodo));
	quinto -> dato=1;
	
	Nodo *sexto=malloc(sizeof(Nodo));
	sexto -> dato=9;
	
	agregar(primero);
	agregar(segundo);
	agregar(tercero);
	agregar(cuarto);
	agregar(quinto);
	agregar(sexto);
	
	Nodo *i=inicio;
	
	while(i!=NULL){
		printf("%i\n",i->dato);
		i = i -> siguiente;
	}//Aquí se imprimen los datos tal como se ingresaron
	ordenar();//Se llama la función de ordenar datos
	
	i=inicio;
	printf("\n\n");
	
	while(i!=NULL){
		printf("%i\n",i->dato);
		i = i -> siguiente;
	}//Aquí se imprimen los datos ya ordenados
	return 0;
}

