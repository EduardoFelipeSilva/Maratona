#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

const int MAXN = 110;

int min(int a, int b)
{
  return (a > b) ? b : a;
}

int main()
{
  int n;
  while (1)
  {
    scanf("%d", &n);
    if (n == 0)
    {
      break;
    }

    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= n; j++)
      {
        int cima = i;
        int baixo = n + 1 - i;
        int esq = j;
        int dir = n + 1 - j;
        printf("%d", min(min(cima, baixo), min(esq, dir)));
      }
      printf("\n");
    }
  }
  return 0;
}
