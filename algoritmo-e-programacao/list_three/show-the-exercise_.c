#include <stdio.h>
int main (){
int b;
do{
printf("Informe a atividade que voce deseja : 4 a 8\n");
scanf("%d",&b);
switch(b){
case 4:
printf("Usando switch case, faça um menu");
printf("iterativo para selecionar os exercícios");
printf("em linguagem c.");
printf("O programa encerra quando o usuario 0");
break;
case 5:
printf("Usando laço de repetição (do while) ");
printf("escreva um programa que imprime a ");
printf("(notação: decimal e hexadecimal e ");
printf("caractere) para os valores de 0 a 127");
printf("A saida sera da forma:");
break;
case 6:
printf("Escreva um programa, que usando o laço");
printf("de repetição do tipo (do while), receba ");
printf("cinco números inteiros quaisquer e ");
printf("r e imprima a quantidade de números ");
printf("primos que foram digitados");
break;
case 7:
printf("Faça um programa, que usando o laço ");
printf("de repetição do tipo (do while), receba");
printf("a idade e a altura de seis pessoas");
printf(".Calcule e imprima as médias das alturas");
printf(" das pessoas com mais de 50 anos.");
break;
case 8:
printf("Dado um número N, inteiro e positivo, ");
printf("fazer um programa para obter os N ");
printf("primeiros termos da seguinte sequência:");
printf(" 1 1 2 3 5 8 13. (Série de Fibonacci).");
printf("Use um laço do tipo do while.");
break;
defaut:
printf("\nErro");
break;
}
}while(b!=0);
}
