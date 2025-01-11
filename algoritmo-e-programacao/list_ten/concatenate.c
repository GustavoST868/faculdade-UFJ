#include<stdio.h>
#include<string.h>
int  main(){
char a[20];//Declaração de dois vetores.
char b[20];
printf("Informe uma palavra :");
scanf("%s[^\n]",a);//Vai ler até o espaço.
strcat(b,a);
printf(b);
}