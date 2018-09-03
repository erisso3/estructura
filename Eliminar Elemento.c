#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo{
	int dato;
	struct Nodo *siguiente;
	struct Nodo *anterior;
}Nodo;

Nodo *inicio=NULL;
Nodo *fin=NULL;

void agregar(Nodo *nodo){
	nodo -> siguiente=NULL;
	if(inicio==NULL){
		inicio=nodo;
		fin=nodo;
	}
	else{
		fin -> siguiente=nodo;
		fin=nodo;
	}
}
void eliminar_elemento(int elemento){
	Nodo *aux=inicio;
	Nodo *anterior=NULL;
	while((aux!=NULL)&&(aux->dato!=elemento)){
		anterior=aux;
		aux=aux->siguiente;
	}
	if(aux!=NULL){
		if(anterior==NULL){
			inicio=aux->siguiente;
		}
		else{
			anterior->siguiente=aux->siguiente;
			aux->siguiente=NULL;
			free(aux);
		}
	}
}
int main(int argc, char *argv[]) {
	int elemento;
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
	}
	
	printf("\nSeleccione el elemento que desea remover:\n");
	scanf("%d",&elemento);
	eliminar_elemento(elemento);
	i=inicio;
	printf("\n\n");
	while(i!=NULL){
		printf("%i\n",i->dato);
		i = i -> siguiente;
	}
	free(inicio);
	free(fin);
	free(primero);
	free(segundo);
	free(tercero);
	free(cuarto);
	free(quinto);
	free(i);
	return 0;
}

