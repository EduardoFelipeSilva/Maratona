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

    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= n; j++)
      {
        int cima = i;
        int baixo = n + 1 - i;
        int esq = j;
        int dir = n + 1 - j;
        cout << (min(min(cima, baixo), min(esq, dir)));
      }
      cout << "\n";
    }
  }
}
