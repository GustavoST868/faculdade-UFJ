#include <stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int ni,d;//numero inteiro
printf("Informe um numero inteiro:");
scanf("%d",&ni);
ni=ni/10;
d=ni%10;//divide e obtem o valor da dezena
printf("%d",d);
}