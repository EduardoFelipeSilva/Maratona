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

int main(void)
{
  int a, n, m;
  string linha;
  int melhor_fila = 1000;
  int x, seguidas;

  while (true)
  {

    getline(cin, linha);

    if (linha == "0")
    {
      break;
    }

    vector<string> temp = split(linha, ' ');

    a = atoi(temp[0].c_str());
    n = atoi(temp[1].c_str());
    m = atoi(temp[2].c_str());

    for (int i = 0; i < n; i++)
    {
      seguidas = 0;
      for (int j = 0; j < m; j++)
      {
        // scanf("%d", &x);
        cin >> x;

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
    cout << melhor_fila << endl;
  }
  return 0;
}
