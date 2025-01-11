#include <stdio.h>
#include<locale.h>
#include <string.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int i=0,j=0;
char a[50],invertida[50];
scanf("%s[^\n]",a);
for(i=strlen(a)-1;i>=0;i--){
invertida[j]=a[i];
j++;
}
invertida[j]='\0';
printf("%s",invertida);
if(strcmp(a,invertida)==0){
printf("\nÉ um palindromo");
}else{
printf("\nNão é um palíndromo");
}
return 0;
}
