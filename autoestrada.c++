#include <iostream>
#include <string>
using namespace std;

int main()
{
  // Escreva seu código aqui
  int n, resposta = 0;
  cin >> n;
  string comprimento;
  cin >> comprimento;

  for (int i = 0; i < n; i++)
  {
    if (comprimento[i] == 'P')
    {
      resposta = resposta + 2;
    }
    else if (comprimento[i] == 'C')
    {
      resposta = resposta + 2;
    }
    else if (comprimento[i] == 'A')
    {
      resposta = resposta + 1;
    }
    else if (comprimento[i] == 'D')
    {
      resposta = resposta + 0;
    }
  }
  cout << resposta << endl;
  return 0;
}