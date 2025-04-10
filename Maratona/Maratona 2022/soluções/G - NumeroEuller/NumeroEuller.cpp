#include <stdio.h>
#include <string>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{

    string linha;
    double n = 0;
    double s = 0;

    while (true)
    {
        cin >> linha;
        if (linha == "0")
        {
            break;
        }

        n = atof(linha.c_str());
        s = 1 + (1 / n);

        cout << fixed << setprecision(24);
        cout << s;
        cout << "\n";

        s = pow(s, n);

        cout << fixed << setprecision(24);
        cout << s;
        cout << "\n";
    }

    return 0;
}