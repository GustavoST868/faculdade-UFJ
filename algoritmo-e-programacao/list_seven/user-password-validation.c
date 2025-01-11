#include <stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
char adm[6]="admin";
char senha[7]="a1b2C3";
int j=0,i=0,conta=0,contb=0;
char a[6],b[8];
scanf("%s[^\n]",a);
for(i=0;i<6;i++){
if(a[i]==adm[i]){
conta++;
}
}
scanf("%s[^\n]",b);
for(i=0;i<6;i++){
if(b[i]==senha[i]){
contb++;
}
}
if(conta==6&&contb==6){
printf("Validado");
}else{
printf("Invalidado");
}
return 0;
}