#include <stdio.h>
#include <string>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{

    int linha;
    int numeroDeFigurinhas = 0;
    int numeroDeFigurinhasCompradas = 0;
    int totalDeFigurinhas = 0;
    int figuras = 0;

    while (true)
    {
        cin >> linha;
        if (linha == 0)
        {
            break;
        }

        numeroDeFigurinhas = linha;
        cin >> linha;
        numeroDeFigurinhasCompradas = linha;
        totalDeFigurinhas = 0;

        int albumDeFigurinha[numeroDeFigurinhasCompradas];

        for (int i = 0; i < numeroDeFigurinhasCompradas; i++)
        {
            cin >> linha;
            albumDeFigurinha[i] = linha;
        }

        for (int i = 0; i < numeroDeFigurinhasCompradas; i++)
        {
            int figurinha = albumDeFigurinha[i];
            int repetida = 0;

            for (int j = 0; j < numeroDeFigurinhasCompradas; j++)
            {
                if (albumDeFigurinha[j] == figurinha)
                {
                    repetida++;
                }
            }

            if (repetida >= 2)
            {
                for (int j = 0; j < numeroDeFigurinhasCompradas; j++)
                {
                    if (figurinha == albumDeFigurinha[j])
                    {
                        albumDeFigurinha[j] = -1;
                        break;
                    }
                }
            }
        }

        figuras = 0;

        for (int i = 0; i < numeroDeFigurinhasCompradas; i++)
        {
            if (albumDeFigurinha[i] != -1)
            {
                figuras++;
            }
        }
        totalDeFigurinhas = numeroDeFigurinhas - figuras;
        cout << totalDeFigurinhas;
        cout << "\n";
    }
    return 0;
}