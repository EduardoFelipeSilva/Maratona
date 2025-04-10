#include <bits/stdc++.h>
using namespace std;
const int MAXN = 110;
int mat[MAXN][MAXN];

int main()
{
  int n;
  while (true)
  {
    cin >> n;

    if (n == 0)
    {
      break;
    }

    int notas[4];

    notas[0] = n / 100;
    n = n - notas[0] * 100;
    notas[1] = n / 50;
    n = n - notas[1] * 50;
    notas[2] = n / 20;
    n = n - notas[2] * 20;
    notas[3] = n / 10;
    n = n - notas[3] * 10;

    // printf("[" + notas[0] + ", " + notas[1] + ", " + notas[2] + ", " + notas[3] + "]");
    // printf("[%d, %d, %d, %d]\n", notas[0], notas[1], notas[2], notas[3]);
    cout << "[" << notas[0] << ", " << notas[1] << ", " << notas[2] << ", " << notas[3] << "]";
    cout << "\n";
  }
}
