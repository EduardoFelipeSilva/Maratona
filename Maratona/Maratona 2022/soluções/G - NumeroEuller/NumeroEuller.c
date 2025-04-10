#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{

    char linha[100000];
    double n;
    double s;

    while (1)
    {
        scanf("%s", linha);
        if (strcmp(linha, "0") == 0)
            break;

        n = atof(linha);
        printf("%f\n", n);
        s = 1 + (1 / n);
        s = pow(s, n);

        printf("%.24f\n", s);
    }

    return 0;
}