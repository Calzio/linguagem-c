#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	
	int numeros[2][2];
	
	numeros[0][0] = 5;
	numeros[0][1] = 2;
	numeros[1][0] = 3;
	numeros[1][1] = 4;
	
	printf("Elemento 1: %i\n", numeros[0][0]);
	printf("Elemento 2: %i\n", numeros[0][1]);
	printf("Elemento 3: %i\n", numeros[1][0]);
	printf("Elemento 4: %i\n", numeros[1][1]);
	return 0;
}
