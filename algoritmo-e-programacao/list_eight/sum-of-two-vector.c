
#include <stdio.h>
int main() {
float vet1[3],vet2[3];
int a;
float soma=0,soma2=0;
struct Vetor
{
float x;
float y;
float z;
};
struct Vetor v;
struct vetor
{
float q;
float w;
float e;
};
struct vetor vet;
v.x=3;
v.y=2;
v.z=1;
vet1[0]=v.x;
vet1[1]=v.y;
vet1[2]=v.z;
vet.q=1;
vet.w=2;
vet.e=3;
vet2[0]=vet.q;
vet2[1]=vet.w;
vet2[2]=vet.e;
for(a=0;a<3;a++){
soma = soma+vet1[a];
}
for(a=0;a<3;a++){
soma2 = soma2+vet2[a];
}
printf("Soma dos dois vetores = %2.f",(soma+soma2));
return 0;
}