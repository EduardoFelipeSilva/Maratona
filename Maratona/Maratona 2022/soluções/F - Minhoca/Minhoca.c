#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int linha, coluna, maior = 0, i, j, soma;
    int campo[100][100];
    while (1)
    {
        scanf("%i %i", &linha, &coluna);

        if ((linha == 0) && (coluna == 0))
            break;

        for (i = 0; i < linha; i++)
        {
            for (j = 0; j < coluna; j++)
            {
                scanf("%i", &campo[i][j]);
            }
        }

        for (i = 0; i < linha; i++)
        {
            soma = 0;
            for (j = 0; j < coluna; j++)
            {
                soma += campo[i][j];
            }
            if (soma > maior)
            {
                maior = soma;
            }
        }
        for (i = 0; i < coluna; i++)
        {
            soma = 0;
            for (j = 0; j < linha; j++)
            {
                soma += campo[j][i];
            }
            if (soma > maior)
            {
                maior = soma;
            }
        }
        printf("%i\n", maior);
        linha = 0;
        coluna = 0;
        maior = 0;
    }
    return 0;
}