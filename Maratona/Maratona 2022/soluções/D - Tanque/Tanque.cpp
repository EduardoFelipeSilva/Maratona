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

template <typename T>
int len(T args) { return args.size(); }

vector<string> split(string &s, const char &c)
{
    string buffer{""};

    vector<string> resultado;

    for (char caractere : s)
    {
        if (caractere != c)
        {
            buffer += caractere;
        }
        else
        {
            resultado.push_back(buffer);
            buffer = "";
        }
    }
    if (buffer != "")
    {
        resultado.push_back(buffer);
        buffer = "";
    }

    return resultado;
}

int main()
{

    string linha;
    int c, d, t;

    while (true)
    {
        getline(cin, linha);
        if (linha == "0")
        {
            break;
        }

        vector<string> temp = split(linha, ' ');

        c = atoi(temp[0].c_str());
        d = atoi(temp[1].c_str());
        t = atoi(temp[2].c_str());

        double litros = (1.0 * d) / (1.0 * c);

        double compra = litros - t;

        if (compra < 0)
            compra = 0;

        cout << fixed << setprecision(1);
        cout << compra;
        cout << "\n";
    }

    return 0;
}