#include <stdio.h>
#include <stdlib.h>
int contador(int a,int b,int c,int v[100]);
int main(int argc, char *argv[]) {
	int i,n,c=0;
	int bv;
	printf("Ingrese el tamaño del la lista: ");
	scanf("%i",&n);
	int *vector=calloc(n,sizeof(int));
	printf("\nIngrese los valores para rellenar la lista\n");
	for(i=0;i<n;i++)
	{
		do
		{
			printf("valor %i: \n",i+1);
			scanf("%i",&vector[i]);
			if(	vector[i]<=0)
			{
				printf("Los valores deben ser mayores a 0\nIntentelo de nuevo:");
			}
		} while(vector[i]<=0);
		
	}
	printf("\nCual es el valor que deseas buscar: ");
	scanf("%i",&bv);
	if(contador(bv,n,c,vector)>0){
		printf("El numero %i si esta en la lista\n",bv);
	}else{
		printf("El numero %i no esta en la lista\n",bv);
	}
	return 0;
}

int contador(int a,int b,int c, int v[100])
{
	for(int i=0;i<b;i++)
	{
		if(v[i]==a)
		{
			c++;
		}
	}
	return c;
}

