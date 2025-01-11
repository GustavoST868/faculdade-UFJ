#include <stdio.h>
#include<stdlib.h>
#define pi 3,14159
int main(){
float raio,area;
printf("Informe o valor do raio : ");
scanf("%f",&raio);
area = ((raio^2)*pi);
printf("O valor da área é %f",area);
return 0;
}
