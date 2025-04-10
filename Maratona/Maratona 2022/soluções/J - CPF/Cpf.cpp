#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

bool validaCPF(const int *const);

int main(void)
{
    int cpf[11];
    char linha[12];

    while (true)
    {
        cin.getline(linha, 12);

        if (strcmp(linha, "0") == 0)
        {
            break;
        }

        for (int i = 0; i < 11; i++)
        {
            cpf[i] = static_cast<int>(linha[i] - 48);

            if (cpf[i] < 0 || cpf[i] > 9)
            {
                return 1;
            }
        }

        if (validaCPF(cpf) == true && (strcmp(linha, "11111111111") != 0) && (strcmp(linha, "22222222222") != 0) && (strcmp(linha, "33333333333") != 0) && (strcmp(linha, "44444444444") != 0) && (strcmp(linha, "55555555555") != 0) && (strcmp(linha, "66666666666") != 0) && (strcmp(linha, "77777777777") != 0) && (strcmp(linha, "88888888888") != 0) && (strcmp(linha, "99999999999") != 0))
        {
            cout << "Sim" << endl;
        }
        else
        {
            cout << "Nao" << endl;
        }
    }
    return 0;
}

inline bool validaCPF(const int *const cpf)
{
    int digito1,
        digito2,
        temp = 0;

    for (char i = 0; i < 9; i++)
        temp += (cpf[i] * (10 - i));

    temp %= 11;

    if (temp < 2)
        digito1 = 0;
    else
        digito1 = 11 - temp;

    temp = 0;
    for (char i = 0; i < 10; i++)
        temp += (cpf[i] * (11 - i));

    temp %= 11;

    if (temp < 2)
        digito2 = 0;
    else
        digito2 = 11 - temp;

    if (digito1 == cpf[9] && digito2 == cpf[10])
        return true;
    else
        return false;
}