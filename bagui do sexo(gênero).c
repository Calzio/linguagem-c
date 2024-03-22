#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
   char sexo;
   float pesoIdeal, altura;
   
   printf("Digite seu sexo: ");
   scanf("%s",&sexo);
   
   printf("Digite sua altura: ");
   scanf("%f",&altura);
   
   
switch(sexo){
case 'M':
pesoIdeal = (72.7 * altura) - 58;
break;
case 'm':
pesoIdeal = (72.7 * altura) - 58;
break;
case 'F':
pesoIdeal = (62.1 * altura) - 44.7;
break;
case 'f':
pesoIdeal = (62.1 * altura) - 44.7;
break;
}
printf("Seu peso é: %.1f ", pesoIdeal);

}
