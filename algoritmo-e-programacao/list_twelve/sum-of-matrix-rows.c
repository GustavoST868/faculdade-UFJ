#include <stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int matriz[3][3];
int a,b,sp,ss,st,sd,sc1,sc2,sc3;
sc1=0;
sc2=0;
sc3=0;
sd=0;
sp=0;
ss=0;
st=0;
printf("\nComplete a matriz 3x3\n :");
for(a=0;a<3;a++){
for(b=0;b<3;b++){
printf("\nLinha %d espaço %d:",a,b);
scanf("%d",&matriz[a][b]);
}
}
sp=matriz[0][0]+matriz[0][1]+matriz[0][2];
printf("\nSoma da primeira linha = [%d]",sp);
ss=matriz[1][0]+matriz[1][1]+matriz[1][2];
printf("\nSoma da segunda linha = [%d]",ss);
st=matriz[2][0]+matriz[2][1]+matriz[2][2];
printf("\nSoma da primeira linha = [%d]",st);
sd=matriz[0][0]+matriz[1][1]+matriz[2][2];
printf("\nSoma da diagonal = [%d]",sd);
sc1=matriz[0][0]+matriz[1][0]+matriz[2][0];
printf("\nSoma da primeira coluna = [%d]",sc1);
sc2=matriz[0][1]+matriz[1][1]+matriz[2][1];
printf("\nSoma da seguda coluna = [%d]",sc2);
sc3=matriz[0][2]+matriz[1][2]+matriz[2][2];
printf("\nSoma da terceira coluna = [%d]",sc3);
if((sp==ss)&&(sp==st)&&(sp==sd)&&(sp==sc1)&&(sp==sc1)&&(sp==sc3)){
printf("\nÉ um quadrado mágico");
}else{
printf("\nNão é um quadrado mágico");}
}