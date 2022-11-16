#include <iostream>
using namespace std;

int main()
{
  int n, maior = 0, aux = 0;
  cin >> n;

  int sequencia[] = {0};

  for (int i = 0; i < n; i++)
  {
    cin >> sequencia[i];
  }

  for (int i = 0; i < n - 1; i++)
  {
    cout << aux << " ";
    if (sequencia[i] < sequencia[i + 1])
    {
      maior++;
      if (maior >= aux)
      {
        aux = aux + maior;
      }
    }
    else if (sequencia[i] >= sequencia[i + 1])
    {
      maior = 1;
    }
  }

  cout << aux;

  return 0;
}