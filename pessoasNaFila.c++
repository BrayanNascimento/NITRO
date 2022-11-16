#include <iostream>
#include <array>
#include <vector>

using namespace std;
using std::array;
using std::remove;

int main()
{
  // Escreva seu código aqui
  int n, m, saida;
  cin >> n;
  int vet[] = {0};
  for (int i = 0; i < n; i++)
  {
    cin >> m;
    vet[i] = m;
  }
  cin >> saida;

  for (int i = 0; i < saida; i++)
  {
    cin >> m;
    for (int i = 0; i < n; i++)
    {
      if (vet[i] == m)
      {
        vet[i] = 0;
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    if (vet[i] != 0)
    {
      cout << vet[i] << " ";
    }
  }

  return 0;
}