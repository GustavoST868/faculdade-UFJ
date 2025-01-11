#include<stdio.h>
#include<locale.h>
#include<string.h>
struct aluno
{
char nome[100];
int n_matricula;
char curso[100];
};
int main(){
setlocale(LC_ALL,"Portuguese");
struct aluno aluno[5];
int i;
for(i=0;i<5;i++){
printf("Informe o nome :");
scanf("%s",&aluno[i].nome);
printf("Informe o número da matrícula:");
scanf("%d",&aluno[i].n_matricula);
printf("Informe o curso : ");
scanf("%s",&aluno[i].curso);
printf("\n\n");
}
for(i=0;i<5;i++){
printf("Aluno: %d\n",(i+1));
printf("Nome: %s\n",aluno[i].nome);
printf("Númemero da matrícula :
%d\n",aluno[i].n_matricula);
printf("Curso: %s",aluno[i].curso);
printf("\n\n");
}
}