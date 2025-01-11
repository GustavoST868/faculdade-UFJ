#include <stdio.h>
#include<locale.h>
int main() {
setlocale(LC_ALL,"Portuguese");
float primeironumero,segundonumero,terceironumero;
printf("Informe três valores positivos : \n");
printf("\nPrimeiro: ");
scanf("%f",&primeironumero);
printf("\nSegundo: ");
scanf("%f",&segundonumero);
printf("\nTerceiro: ");
scanf("%f",&terceironumero);
if((primeironumero<(segundonumero+terceironumero)) &&
(segundonumero<(primeironumero+terceironumero)) &&
(terceironumero<(primeironumero+segundonumero))){
printf("\nÉ possível formar triângulo.");
if(primeironumero==segundonumero){
if(segundonumero==terceironumero){
printf("\nTriângulo equilátero");//Verifica a condição de existência de um triângulo
}
}
if((primeironumero==segundonumero)&&(primeironumero!=terceironumero)){
printf("\nTriângulo isóceles");//Compara os lados para ver se é isóceles
}
if((primeironumero==terceironumero)&&(primeironumero!=segundonumero)){
printf("\nTriângulo isóceles");//Compara os lados para ver se é isóceles
}
if((segundonumero==terceironumero)&&(segundonumero!=primeironumero)){
printf("\nTriângulo isóceles");//Compara os lados para ver se é isóceles
}
if((primeironumero!=segundonumero)&&(primeironumero!=terceironumero)&&(segundonum
ero!=primeironumero)&&(segundonumero!=terceironumero)&&(terceironumero!=primeironu
mero)&&(terceironumero!=segundonumero)){
printf("\nTriângulo escaleno");//Compara os lados para ver se é escaleno.
}
}else{
printf("\nNão é possivel formar um triângulo");
}
return 0;
}