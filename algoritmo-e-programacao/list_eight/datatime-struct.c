#include <stdio.h>
#include<locale.h>
int main() {
setlocale(LC_ALL,"Portuguese");
struct h{
int horas;
int minutos;
int segundos;
};
struct h horario;
struct d{
int dia;
int mes;
int ano;
};
struct d data;
struct a{
int data;
int horario;
char text[100];
};
struct a agenda;
return 0;
}