#include <stdio.h>
#include<locale.h>
int main() {
setlocale(LC_ALL,"Portuguese");
float temperaturacelcios,fahrenheit,kelvin;
printf("\nInforme uma temperatura em Célcios : ");
scanf("%f",&temperaturacelcios);
fahrenheit= (((temperaturacelcios*9)+160)/5);//conversão para fahrenheit
printf("\nA temperatura em Fahrenheit é %.2f",fahrenheit);
kelvin= (temperaturacelcios+273);//Conversão para célcios
printf("\nA temperatura em Kelvin é %.2f",kelvin);
return 0;
}