#include <iostream>
using namespace std;

int main()
{
  // Escreva seu código aqui

  int n, i, j, z;
  int calculo = 0;
  int teste = 0;
  cin >> n;
  while (n != 0)
  {

    teste++;
    cout << "Teste " << teste << endl;
    for (i = 0; i < n; i++)
    {
      cin >> j >> z;
      calculo = calculo + (j - z);
      cout << calculo << endl;
    }
    calculo = 0;
    cin >> n;
    cout << endl;
  }

  return 0;
}