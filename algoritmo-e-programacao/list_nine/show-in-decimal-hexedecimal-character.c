#include <stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int a;
printf("Decimal\tHexadecimal\tCaracter");
for(a=0;a<127;a++){
printf("%d\t %x\t\t %c\n", a, a, a);/Informa as máscaras de inteiro,octal e
hexadecimal.
}
}