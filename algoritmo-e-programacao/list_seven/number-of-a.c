#include <stdio.h>
#include <string.h>
int main(){
char a[10];
int i=0,cont=0;
scanf("%s[^\n]",a);
for(i=0;i<strlen(a);i++){
if(a[i]=='a'){
cont++;
}
}
printf("%d",cont);
return 0;
}