#include <stdio.h>
#include <math.h>
void main()
{
double x=1,y,a,S;
int k=0;
y=cos(x);
printf("y=cos(%.2f)=%.2f\n",x,y);

a=pow(-1,k)*pow(x,k)/(1);
S=a;
printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
k++;
a=a*(-1)*x*x/((2*k)*(k));//a=a∗(−1)∗x∗x/(2∗3);
S=S+a;
printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
k++;
a=a*(-1)*x*x/((2*k)*(k));//a=a∗(−1)∗x∗x/(4∗5);
S=S+a;
printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
k++;
a=a*(-1)*x*x/((2*k)*(k));//a=a∗(−1)∗x∗x/(6∗7);
S=S+a;
printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
}