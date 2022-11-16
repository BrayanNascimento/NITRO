#include <iostream>
#include <string>
using namespace std;

int main()
{
  // Escreva seu código aqui
  int n, acerto = 0;
  string g, r;
  cin >> n;

  cin >> g;
  cin >> r;

  string gabarito = g;
  string resposta = r;

  for (int i = 0; i < n; i++)
  {
    if (gabarito[i] == resposta[i])
    {
      acerto++;
    }
  }
  cout << acerto;

  //
  return 0;
}