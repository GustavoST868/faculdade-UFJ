#include <stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int a,b;
int matriz[4][4];
for(a=0;a<4;a++){//Usado para preencher a matriz.
for(b=0;b<4;b++){
printf("\n\ncoluna %d espaco %d: ", a + 1, b);
scanf("%d",&matriz[a][b]);
}
if((matriz[1][0]==0)&&(matriz[2][0]==0)&&(matriz[2][1]==0)){
if((matriz[3][0]==0)&&(matriz[3][1]==0)&&(matriz[3][2]==0)){
printf("É uma matriz triangular superior.");
}
}
}
}