#include <iomanip>
#include <stdio.h>
#include <string>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
#include <vector>
#include <cctype>

using namespace std;

int main()
{

    // string linha;
    int linha, coluna, maior = 0, i, j, soma;
    int campo[100][100];

    while (true)
    {
        cin >> linha >> coluna;

        if ((linha == 0) && (coluna == 0))
        {
            break;
        }

        for (i = 0; i < linha; i++)
        {
            for (j = 0; j < coluna; j++)
            {
                cin >> campo[i][j];
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

        cout << fixed << setprecision(1);
        cout << maior;
        cout << "\n";
        linha = 0;
        coluna = 0;
        maior = 0;
    }

    return 0;
}