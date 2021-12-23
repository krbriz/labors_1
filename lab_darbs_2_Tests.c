#include<stdio.h>
#include<math.h>
void main(){
    double x,y,a,S;
    printf("CosX apreekinaashana. Ievadi X: ");
    scanf("%lf", &x);
    
    printf("Summas izteiksme:            500            \n");
    printf("                             ____\n");
    printf("                             \\        k    2*k     -2*k\n");
    printf("                              \\    (-1) * x     * 2\n");
    printf("                    cosx=       >   _______________________ \n");
    printf("                              // \n");
    printf("                             //             (2*k!\n");
    printf("                             k = 0\n");
    printf("Definiicijas apgabals: X pieder R\n");

    int k=0;
    y=cos(x);
    printf("y=cos(%.2f)=%.2f\n",x,y);

    a = pow(-1,k)*pow(x,2*k)/(1.);
    S = a;
    printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);

    while (k<3){
        k++;
        a = a*(-1)*x/((2*k)*(2*k));
        S = S+a;
        printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
    }
}

