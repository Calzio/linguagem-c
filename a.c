#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	
		setlocale(LC_ALL,"");

	char disciplinas[3][200];
	float notas[3][2], media[3];
	int i, j, soma = 0;

printf("== Solicitando dados ==\n");
for(i=0; i<3; i++){
	printf("Digite o nome da %iº matéria: ", i+1);
	scanf("%s", &disciplinas[i]);

	for(j=0; j<2; j++){
		printf("Digite a %iª nota: ", j+1);
		scanf("%f",&notas[i][j]);
	
	soma += notas[i][j];
}
	media[i]= soma/(float)2;
	soma = 0;
	
	printf("\n");

}
sleep(5);

	printf("\n== Exibindo resultados ==\n");
			for (i=0; i<3; i++) {
		printf("%iº disciplina: %s \n", i+1, disciplinas[i]);
			for(j=0; j<2; j++){
		printf("%iª nota: %.1f \n", j+i, notas[i][j]);
	}
		printf("Média: %.1f \n", media[i]);
}
	
	return 0;
}
