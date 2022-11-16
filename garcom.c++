#include <iostream>
using namespace std;

int main()
{
  // Escreva seu código aqui
  int bandejas, latas, copos, aux;
  cin >> bandejas;

  for (int i = 0; i <= bandejas; i++)
  {
    cin >> latas >> copos;

    if (latas > copos)
    {
      aux = aux + copos;
    }
  }
  cout << aux << endl;
  return 0;
}