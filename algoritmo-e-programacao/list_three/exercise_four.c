int main(){
int a;
{
printf("Decimal\t\tHexadecimal\tCaracter\n");
a = 0;
do
{
printf("%d\t \t%x\t \t%c\n", a, a, a);
a++;
if (a > 10)
{
if (a % 10 == 0)
{
printf("\n");
}
}
} while (a <= 127);
}
}