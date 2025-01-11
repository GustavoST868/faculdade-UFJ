#include<stdio.h>
#include<string.h>
#include<locale.h>
int main()
{
setlocale(LC_ALL,"Portuguese");
int i;
float m_n1;
float m_n2;
float m_n3;
float s_1=0,s_2=0,s_3=0,s_4=0,s_5=0;
float mg1=0,mg2=0,mg3=0,mg4=0,mg5=0;
struct dados_alunos
{
int matricula[100];
char nome[100];
float p1;
float p2;
float p3;
};
struct dados_alunos d_a[5];
for(i=0;i<5;i++)
{
printf("Aluno [%d]\n",(i+1));
printf("Matrícula : \n");
scanf("%d",d_a[i].matricula);
printf("Nome : \n");
scanf("%s",d_a[i].nome);
printf("Nota da primeira prova : \n");
scanf("%f",&d_a[i].p1);
printf("Nota da segunda prova : \n");
scanf("%f",&d_a[i].p2);
printf("Nota da terceita  prova : \n");
scanf("%f",&d_a[i].p3);
}
for(i=0;i<5;i++){
if(m_n1<d_a[i].p1)
{
m_n1=d_a[i].p1;
}
}
for(i=0;i<5;i++){
if(m_n2<d_a[i].p2)
{
m_n2=d_a[i].p2;
}
}
for(i=0;i<5;i++){
if(m_n3<d_a[i].p3)
{
m_n3=d_a[i].p3;
}
}
printf("Maior nota 1 = [%f]\n",m_n1);
printf("Maior nota 2 = [%f]\n",m_n2);
printf("Maior nota 3 = [%f]\n",m_n3);
for(i=0;i<5;i++)
{
if(m_n1==d_a[i].p1)
{
printf("A maior nota na primeira prova for
de [%s]\n",d_a[i].nome);
}
if(m_n2==d_a[i].p2)
{
printf("A maior nota na segunda prova for
de [%s]\n",d_a[i].nome);
}
if(m_n3==d_a[i].p3)
{
printf("A maior nota na segunda prova for
de [%s]\n",d_a[i].nome);
}
}
s_1=d_a[0].p1+d_a[0].p2+d_a[0].p3;
s_2=d_a[1].p1+d_a[1].p2+d_a[1].p3;
s_3=d_a[2].p1+d_a[2].p2+d_a[2].p3;
s_4=d_a[3].p1+d_a[3].p2+d_a[3].p3;
s_5=d_a[4].p1+d_a[4].p2+d_a[4].p3;
mg1=s_1/3;
mg2=s_2/3;
mg3=s_3/3;
mg4=s_4/3;
mg5=s_5/3;
printf("Soma das notas 1 = [%f]\n",s_1);
printf("Soma das notas 2 = [%f]\n",s_2);
printf("Soma das notas 3 = [%f]\n",s_3);
printf("Soma das notas 4 = [%f]\n",s_4);
printf("Soma das notas 5 = [%f]\n",s_5);
printf("Media geral 1 = [%f]\n",mg1);
printf("Media geral 2 = [%f]\n",mg2);
printf("Media geral 3 = [%f]\n",mg3);
printf("Media geral 4 = [%f]\n",mg4);
printf("Media geral 5 = [%f]\n",mg5);
if(mg1>6)
{
printf("%s APROVADO",d_a[0].nome);
}
else
{
printf("%s REPROVADO",d_a[0].nome);
}
if(mg2>6)
{
printf("%s APROVADO",d_a[1].nome);
}
else
{
printf("%s REPROVADO",d_a[1].nome);
}
if(mg3>6)
{
printf("%s APROVADO",d_a[2].nome);
}
else
{
printf("%s REPROVADO",d_a[2].nome);
}
if(mg4>6)
{
printf("%s APROVADO",d_a[3].nome);
}
else
{
printf("%s REPROVADO",d_a[3].nome);
}
if(mg5>6)
{
printf("%s APROVADO",d_a[4].nome);
}
else
{
printf("%s REPROVADO",d_a[4].nome);
}
return 0;
}