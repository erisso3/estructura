#include <stdio.h>

void orden(void);
int main(int argc, char *argv[]) {
	orden();
}

void orden()
{
	int a,b,c;
	printf("Ingresa un numero:");
	scanf("%i",&a);
	printf("Ingresa un numero:");
	scanf("%i",&b);
	printf("Ingresa un numero:");
	scanf("%i",&c);
	a<b && b<c ? printf("Estan ordenadas\a"):printf("No estan ordenadas");
}
