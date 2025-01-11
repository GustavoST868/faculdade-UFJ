#include <stdio.h>
#include <string.h>
int main(void){
char a[100]="oi";
char b[20]=" Tudo bem ";
char c[100];
strcat(c,a);
strcat(c,b);
printf("%s",c);
}