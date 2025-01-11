#include <stdio.h>
int main()
{
int a, b, g;
float c, d, e;
{
g = 0;
d = 0;
b = 1;
c = 0;
printf("informe a idade e altura das 6 pessoas:");
do
{
printf("individuo %d: ", b);
scanf("%d %f", &a, &c);
printf("\n");
b++;
if (a >= 50)
{
d = (c + d);
g++;
}
} while (b <= 6);
e = (d / g);
printf("a media de alturas : %f", e);
}
return 0;
}