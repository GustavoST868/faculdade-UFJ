#include <stdio.h>
#include<locale.h>
int main() {
setlocale(LC_ALL,"Portuguese");
int c,opcao,pessimo,regular,excelente;
float mediareular,mediaexcelente,mediapessima;
mediaexcelente=0;
mediareular=0;
mediapessima=0;
pessimo = 0;
regular = 0;
excelente = 0;
printf("Caso a opção receba -1,o programa encerrará.");
do{//Repete a pesquiza coletando os dados.
printf("\nQual é a opinião relacionada a refeição servida ?");
printf("\nOpições:");
printf("\n0 –Péssimo");
printf("\n5 – Regular");
printf("\n10 – Excelente");
printf("\nOpção escolhida : ");
scanf("%d",&opcao);
if(opcao==0){//Utilizado para depois fazer a média
pessimo++;
}
if(opcao==5){//Utilizado para depois fazer a média
regular++;
}
if(opcao==10){//Utilizado para depois fazer a média
excelente++;
}
}while(opcao!=-1);
mediapessima=((100*pessimo)/(pessimo+regular+excelente));
printf("\nPercentual da opção pessima : [%.2f]",mediapessima);
mediareular=((100*regular)/(pessimo+regular+excelente));
printf("\nPercentual da opção regular : [%.2f]",mediareular);
mediaexcelente=((100*excelente)/(pessimo+regular+excelente));
printf("\nPercentual da opção excelente : [%.2f]",mediaexcelente);
return 0;
}