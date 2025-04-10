#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char **split(char frase[], char separador)
{
    int i, j, k, contsep = 0;

    for (i = 0, contsep = 0; i < strlen(frase); i++)
        if (frase[i] == separador)
            contsep++;

    char aux[contsep][20];
    char **result = (char **)malloc(contsep * sizeof(char));

    if (contsep)
    {
        for (i = 0; i <= contsep; i++)
            *(result + i) = (char *)malloc(40 * sizeof(char));

        for (i = 0, k = 0, j = 0; i < strlen(frase); i++)
            if (frase[i] != separador)
            {
                aux[k][j] = frase[i];
                j++;
            }
            else
            {
                aux[k][j] = 0;
                k++;
                j = 0;
            }
        aux[k][j] = 0;

        for (i = 0; i <= contsep; i++)
            *(result + i) = strcpy(*(result + i), aux[i]);

        return result;
    }
    else
        printf("Nenhum Separador Encontrado");
}

int main()
{

    char linha[100000];
    int c, d, t;

    while (1)
    {
        fgets(linha, 100000, stdin);
        linha[strlen(linha) - 1] = '\0';

        if (strcmp(linha, "0") == 0)
        {
            break;
        }

        char **temp = split(linha, ' ');

        c = atoi(temp[0]);
        d = atoi(temp[1]);
        t = atoi(temp[2]);
        double litros = (1.0 * d) / (1.0 * c);

        double compra = litros - t;

        if (compra < 0)
            compra = 0;

        printf("%.1f\n", compra);
    }
    return 0;
}