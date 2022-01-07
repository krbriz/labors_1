#include <stdio.h>
#include <math.h>
double mans_kosinuss(double x);
void main()
{
    long double a499, S499, a500, S500, A499;
    double x, a0, S0;
    int k = 0, n, k1;
    printf("CosX apreekinaashana. Ievadi X: ");
    fflush(stdin);
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

    a0 = pow(-1, k) * pow(x, 2 * k) / (1.);
    S0 = a0;
    printf("a0 = %.2lf\t S0 = %.2lf\n", a0, S0);
    fflush(stdin);

    a499 = a0;
    S499 = S0;
    while (k < 499)
    {
        if (a499 > 0 | a499 < -0)
        {
            A499 = a499;
            k1 = k;
        }
        k++;
        a499 *= (-1) * x / ((2 * k) * (2 * k));
        S499 += a499;
        printf("%d 499 = %Le\tS499 = %Le\n", k, a499, S499);
    }
    printf("a499 = %Le\tS499=%Le\n", a499, S499);
    printf("Peedeejaa nenulles veertiiba reekinot a499 ir a%d = %Le \n\n", k1, A499);

    a500 = a499 * (-1) * x / ((2 * k) * (2 * k));
    S500 = S499 + a500;
    printf("a500 = %Le\tS500 = %Le\n", a500, S500);

    printf("Funkcijas veertiiba, izmantojot Teilora rindas izteiksmi = %.2lf\n", mans_kosinuss(x));

    double f1 = cos(x);
    printf("Funkcijas veertiiba, izmantojot funkcijas izteiksmi = %.2lf\n", f1);
}
double mans_kosinuss(double x)
{
    double a, S;
    int k = 0;
    a = pow(-1, k) * pow(x, 2 * k) / (1.);
    S = a;

    return S;
}
