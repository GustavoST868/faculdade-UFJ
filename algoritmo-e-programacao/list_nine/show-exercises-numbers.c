#include <stdio.h>
#include<locale.h>
int main() {
setlocale(LC_ALL,"Portuguese");
int exercicio;
printf("Informe qual o exercício da lista você deseja:");
scanf("%d",&exercicio);
switch(exercicio){  //Mostra o exercícios
case 1:
printf("\nExercício 1");
break;
case 2:
printf("\nExercício 2");
break;
case 3:
printf("\nExercício 3");
break;
case 4:
printf("\nExercício 4");
break;
case 5:
printf("\nExercício 5");
break;
case 6:
printf("\nExercício 6");
break;
case 7:
printf("\nExercício 7");
break;
case 8:
printf("\nExercício 8");
break;
case 9:
printf("\nExercício 9");
break;
case 10:
printf("\nExercício 10");
break;
default:
printf("\nEsse exercício não existe");
} return 0;
}