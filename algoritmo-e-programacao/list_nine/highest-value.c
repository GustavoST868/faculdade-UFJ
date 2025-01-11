#include <stdio.h>
#include<locale.h>
int main() {
setlocale(LC_ALL,"Portuguese");
int maiorvalor,c,a;
maiorvalor=0;
c=0;
int vet[5]={1,3,5,6,7};
for(a=0;a<=4;a++){
printf("t");
if(maiorvalor>vet[c]){//Caso o vetor seja maior que a variavel,ela é atribuida a
variavel
maiorvalor= vet[c];
}
c++;
}
printf("O maior valor é [%d]",maiorvalor);
}