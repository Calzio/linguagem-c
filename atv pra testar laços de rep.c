#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define Val 6

int main () {
	
	setlocale(LC_ALL,"");
	
	int valor[Val], resultado = 0, valorPar = 0, valorImp = 0, valorNeg = 0, valorPos = 0, quantidade = 0; 
	int i;
	
		for (i = 0; i < Val; i++){
			printf("Digite o %iº número: ", i + 1);
			scanf("%i",&valor[i]);
		
		if (valor[i] % 2 == 0) {
			valorPar++;
		} else {
			valorImp++;
		}
		
		if (valor[i] > 0) {
			valorPos++;
		} else if (valor < 0){ 
			valorNeg++;
		}
		if (valor[i]==0){
			break;
			system("cls ||clear");
		}
		quantidade++;
	}
		system("cls ||clear");
	printf("\n== Exibindo Resultados ==\n");
	printf("Quantidade de números positivos: %d\n", valorPos);
	printf("Quantidade de números negativos: %d\n", valorNeg);
	printf("Quantidade de números pares: %d\n", valorPar);
	printf("Quantidade de números ímpares: %d\n", valorImp);
	printf("quantidade de números inseridos: %d\n", quantidade);
	return 0;
}
