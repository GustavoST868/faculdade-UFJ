#include<stdio.h>
#include<locale.h>
#include<string.h>
struct Ficha_Cliente
{
int nome[100];
char endereco[100];
char email[100];
int idade;
int cpf;
char sexo[100];
char data_nascimento[100];
int altura;
float peso;
float imc;
}
int main(){
setlocale(LC_ALL,"Portuguese");
struct Ficha_Cliente f_c;
int id;
printf("Informe o nome : ");
scanf("%d",&f_c.nome);
printf("Informe o endereço : ");
scanf("%c",f_c.endereco);
printf("Informe o email : ");
scanf("%c",f_c.email);
printf("Informe a idade : ");
scanf("%d",&f_c.idade);
printf("Informe o cpf : ");
scanf("%d",&f_c.cpf);
printf("Informe o sexo : ");
scanf("%c",f_c.sexo);
printf("Informe a data de nacimento");
scanf("%c",f_c.data_nascimento);
printf("Informe a altura :");
scanf("%f",&f_c.altura);
printf("Informe o peso : ");
scanf("%f",&f_c.peso);
f_c.imc=((f_c.peso)/((f_c.altura)^2));
printf("nome : %c\n",f_c.nome);
printf("endereço : %c \n",f_c.endereco);
printf("email : %c",f_c.email);
printf("idade : %d",f_c.idade);
printf("cpf : %d",f_c.cpf);
printf("sexo : %c",f_c.sexo);
printf("data de nacimento
:%d",f_c.data_nascimento);
printf("altura :%d",f_c.altura);
printf("peso : %f",f_c.peso);
printf("imc: %f",f_c.imc );
printf("informe o id:");
scanf("%d",&id);
if(id==f_c.nome){
printf("Iguais");
}else{
printf("Diferentes");
}
return 0;
}