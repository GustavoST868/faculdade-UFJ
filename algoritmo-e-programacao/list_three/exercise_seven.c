#include <stdio.h>
int main(){
int num,f2=0,f3=1,f4;
scanf("%d",&num);
if(num<0){
printf("numero invalido");
}else{
printf("0-1");
}
while(f2<num){
f4=f3+f2;
printf(" %d ",f3);
f2=f3;
f3=f4;
}
return 0;
}