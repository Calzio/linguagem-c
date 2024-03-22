#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho () {
	system("cls || clear");
}

int main () {
	setlocale(LC_ALL, "");
	float quantidadeDeMacas, precoDaMaca, totalAPagar;
	char continua;
	
	system("cls || clear");
	
	do { 
	printf ("Digite a quantidade de maças que deseja: ");
	scanf("%f",&quantidadeDeMacas);
	
	if (quantidadeDeMacas <= 12) {
	   precoDaMaca = 1.30;
	} else {
	   precoDaMaca = 1.0;
	}
    
	totalAPagar = quantidadeDeMacas * precoDaMaca;
	
	printf("Quantidade de maças:%.1f \n", quantidadeDeMacas);
	printf("Preço das maças:%.1f \n", precoDaMaca);
	printf("Total a pagar: R$%.2f \n", totalAPagar);	
	
	fflush(stdin);
	
	printf("\nTecle 's' se deseja continuar \n");
	scanf("%c",&continua);
	
	} while (continua == 's');
		
	return 9;
}
