#include <stdio.h>
#include<locale.h>
int main() {
setlocale(LC_ALL,"Portuguese");
float salario,imposto;
printf("Informe o salário : R$");
scanf("%f",&salario);
if(salario<=2000){
printf("\nImposto:[Isento]");
}
if((salario>=2000.01)&&(salario<=3000)){
imposto=((salario-2000)*0.08);//Fórmula que calcula o imposto de 8%
printf("\nImposto:[%.2f]",imposto);
}
if((salario>=3000.01)&&(salario<=4500)){
imposto=(salario-2000)*0.18;//Fórmula que calcula o imposto de 18%
printf("\nImposto:[%.2f]",imposto);
}
if(salario>4500){
imposto=((salario-2000)*0.28);//Fórmula que calcula o imposto de 28%
printf("\nImposto:[%.2f]",imposto);
}
return 0;
}