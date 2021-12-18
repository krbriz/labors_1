#include<stdio.h>
#include<math.h>

int main()
{
double a, b, dx
int i=1, N;

printf("Lietotaaj, ievadi a:")
scanf("%f", &a);
printf("Lietotaaj, ievadi b:")
scanf("%f", &b);
printf("Lietotaaj, ievadi N:")
scanf("%f", &N);
dx = (b-a)/N-1;

while(a<b)
{
    printf("%3d %10.3f %10.3f\n",i,a, sin(a));
    i++;
    a=a+dx;
}



}