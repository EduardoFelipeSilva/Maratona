#include <stdio.h>
int main()
{

    int n, i, j;
    int y = 0;

    while (1)
    {

        scanf("%d", &n);

        if (n == 0)
            break;

        int M[n][n];

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
                scanf("%d", &M[i][j]);
        }

        if (y > 0)
        {
            printf("\n");
        }
        y++;

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d", M[i][j]);
            }
            printf("\n");
        }

        printf("transposta\n");

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d", M[j][i]);
            }
            printf("\n");
        }
    }
    return 0;
}