#include<stdio.h>
#include<string.h>
int main(){
char normal[50],invertido[50];
int b,i=0,c=0;
printf("Informe uma texto : ");
scanf("%s[^\n]",normal);
printf("Tamanho = 1\nInvetida = 2\n");
scanf("%d",&b);
switch(b){
case 1:
printf("Tamanho do texto = [%d]",strlen(normal));
break;
case 2:
for(i=0;i<strlen(normal),i--;){
invertido[c]=normal[i];
c++;
}
break;
}
printf("%s",invertido);
}
