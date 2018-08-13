#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define c 5

void numerol (int v[]);
void imprimir (int v[]);

int main (int argc, char *argv[])
{
	int v[c];
	int v1[c];
	int i,j;
	
	printf("Ingrese 5 valores para la lista\n");
	
	for (i = 0; i < c; i++) v1[i]=0;
	srand(time(NULL));
	numerol (v);
	
	puts ("Lista:\n");
	imprimir (v);
	
	for (i = 0; i < c-1; i++)
		for (j = i + 1; j < c; j++)
			if (v[j] == v[i])
				v1[j]++;
	
	for (i = 0; i < c; i++)
		if (v1[i]+1 > 1)
			printf ("\nEl numero %d se repite %d veces\n", v[i], v1[i]+1);
	
	return 0;
}

void numerol (int v[])
{
	int i;
	for (i = 0; i <c; i++){
		printf("Valor numero %d\n",i+1);
		scanf("%d",&v[i]);
	}
}

void imprimir (int v[])
{
	int i;
	
	for (i = 0; i< c; i++)
		printf ("  %d ", v[i]);
	
	printf("\n");
}
