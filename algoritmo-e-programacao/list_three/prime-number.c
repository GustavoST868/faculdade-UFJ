#include <stdio.h>
int main()
{
int a, b, c;
{
b = 1;
c = 0;
printf("digite 5 numeros:\n");
do
{
scanf("%d", &a);
b++;
if (a != 1 && a != 2 && a != 3)
{
if (a % 2 != 0 && a % 3 != 0 && a % 4 != 0 && a % 5 != 0
&& a % 6 != 0 && a % 7 != 0 && a % 8 != 0 && a % 9 != 0)
{
c++;
}
}
else
{
c++;
}
} while (b <= 5);
printf("\n%d desses numeros sao primos", c);
}
return 0;
}