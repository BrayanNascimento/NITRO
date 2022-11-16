#include <iostream>
#include <string>
using namespace std;

int main()
{
  // Escreva seu código aqui
  string a;
  string sub;
  cin >> a;
  // pegando o tamanho da string para dividir
  int tamanho = a.length();
  int media = tamanho / 2;
  // cout << tamanho;

  // construindo uma substring
  for (int i = 0; i < tamanho - media; i++)
  {
    sub = sub + a[i];
  }
  cout << sub;
  if (tamanho == 1)
  {
    cout << "VALIDO";
  }
  else
  {
    if (sub + sub == a)
    {
      cout << "VALIDO";
    }
    else
    {
      cout << "INVALIDO";
    }
  }
  return 0;
}