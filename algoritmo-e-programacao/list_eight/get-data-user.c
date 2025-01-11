#include<stdio.h>
#include<string.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int nome2[100];
char rua1[100];
struct dados
{
char rua[100];
int numero;
int cpf[100];
};
struct dados da={{"caçu"},{248},{1313123123}};
struct dados_d
{
char nome[100];
float saldo;
};
struct dados_d da_d={{"Gustavo"},{1200}};
printf("Rua =[%s]",da.rua);
printf("Numero = [%d]",da.numero);
printf("Cpf = [%d]",da.cpf);
printf("Nome : [%s]",da_d.nome);
printf("Saldo : [%f]",da_d.saldo);
printf("Informe a rua para atualizar : ");
scanf("%s",rua1);
strcpy(da.rua,rua1);
da.numero=100;
da.cpf=12121212;
printf("Informe o nome para atualizar : \n");
scanf("%s",nome2);
strcpy(da_d.nome,nome2);
da_d.saldo=3000;
printf("Rua =[%s]",da.rua);
printf("Numero = [%d]",da.numero);
printf("Cpf = [%d]",da.cpf);
printf("Nome : [%s]",da_d.nome);
printf("Saldo : [%f]",da_d.saldo);
}