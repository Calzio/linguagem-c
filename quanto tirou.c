#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho () {
	system("cls || clear");
}

int main () {
	setlocale(LC_ALL, "");
	
	int nota1, nota2, media;
	
	printf("Digite sua primeira nota: ");
	scanf("%i",&nota1);
	
	printf("Digite sua segunda nota: ");
	scanf("%i",&nota2);
	
	media=(nota1+nota2)/ (float) 2;
	
	if (media >= 9 ) {
	  printf("Voc� tirou A, parabens, voc� foi explendido, est� aprovado!")	;
	} else if (media >= 7.5 && media <= 9 ) {
	  printf("Voc� tirou B, parabens foi muito bom, est� aprovado!");
	} else if (media >= 6 && media <= 7.5 ) {
	  printf("Voc� tirou C, parabens, est� aprovado!");
	} else if (media >= 4 && media < 6 ) {
	  printf("Voc� tirou D, �, n�o foi dessa vez, reprovado.");
	} else if (media < 4 ) {
	  printf("Voc� tirou C, muito burro, REPROVADO!");
	}
	  
	  return 0;
	  
}
