#include <iostream>
#include <string>
using namespace std;

int main()
{
  // Escreva seu código aqui
  int n;
  string nome;
  int nota;
  int menorNota = 11;
  string menorNome;
  int instancia = 1;

  while (cin >> n)
  {

    while (n--)
    {

      cin >> nome >> nota;

      if (nota < menorNota)
      {
        menorNota = nota;
        menorNome = nome;
      }
      else if (nota == menorNota && nome > menorNome)
      {

        menorNome = nome;
        //  menorNota=nota;
      }
    }

    cout << "Instancia " << instancia++ << endl;
    cout << menorNome << endl;
  }

  return 0;
}