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

int main(void)
{
  int a, n, m;
  char linha[100000];
  int melhor_fila = 1000;
  int x, seguidas;

  while (1)
  {

    fgets(linha, 100000, stdin);
    linha[strlen(linha) - 1] = '\0';

    if (strcmp(linha, "0") == 0)
    {
      break;
    }

    char **temp = split(linha, ' ');

    a = atoi(temp[0]);
    n = atoi(temp[1]);
    m = atoi(temp[2]);

    for (int i = 0; i < n; i++)
    {
      seguidas = 0;
      for (int j = 0; j < m; j++)
      {
        scanf("%d", &x);
        if (x == 0)
          seguidas++;
        else
          seguidas = 0;
        if (seguidas == a)
          melhor_fila = n - i;
      }
    }

    if (melhor_fila == 1000)
      melhor_fila = -1;
    printf("%d\n", melhor_fila);
  }
  return 0;
}
