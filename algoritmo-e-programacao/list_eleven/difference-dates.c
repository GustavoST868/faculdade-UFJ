#include <stdio.h>
int dd,dm,da;
struct dimean{
int dia;
int mes;
int ano;
};
struct dimean d1;
struct dimean2{
int dia;
int mes;
int ano;
};
int main() {
struct dimean d2;
printf("dia = ");
scanf("%d",&d1.dia);
printf("mes = ");
scanf("%d",&d1.mes);
printf("ano = ");
scanf("%d",&d1.ano);
printf("dia = ");
scanf("%d",&d2.dia);
printf("mes = ");
scanf("%d",&d2.mes);
printf("ano = ");
scanf("%d",&d2.ano);
if((d1.dia)>d2.dia){
dd=d1.dia-d2.dia;
}
if((d2.dia)>d1.dia){
dd=d2.dia-d1.dia;
}
if((d2.dia)==d1.dia){
dd=0;
}
if((d1.mes)>d2.mes){
dm=d1.mes-d2.mes;
}
if((d2.mes)>d1.mes){
dm=d2.mes-d1.mes;
}
if((d2.mes)==d1.mes){
dm=0;
}
if((d1.ano)>d2.ano){
da=d1.ano-d2.ano;
}
if((d2.ano)>d1.ano){
da=d2.ano-d1.ano;
}
if((d2.ano)==d1.ano){
da=0;
}
printf("Diferença de dias entre as datas
:\n[%s]",(dd+(dm*30)+(da*365)));
}