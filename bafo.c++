#include <iostream>
using namespace std;

int main()
{
  // Escreva seu código aqui
  int rodadas, aldo, beto, auxAldo, auxBeto, teste = 1;
  cin >> rodadas;
  while (rodadas != 0)
  {
    cout << "Teste " << teste << endl;
    for (int i = 0; i < rodadas; i++)
    {
      cin >> aldo >> beto;

      if (aldo > beto)
      {
        auxAldo = aldo - beto;
      }
      else if (aldo < beto)
      {
        auxBeto = beto - aldo;
      }
    }
    if (auxAldo > auxBeto)
    {
      cout << "Aldo" << endl;
    }
    else
    {
      cout << "Beto" << endl;
    }
    cout << "\n";
    teste++;
    cin >> rodadas;
  }
  return 0;
}