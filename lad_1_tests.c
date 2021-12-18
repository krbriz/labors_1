#include <stdio.h>
int main()
{
double sum;
int x;
printf("Ievadi x veertiibu: ");
scanf("%d",&x);
sum=1+x+(x^2)/2+(x^3)/6+(x^4)/24+(x^5)/120+(x^6)/720;



printf("Cos %d veertiiba ir %.3lf",x,sum);
return 0;
}