#include <iostream>
using namespace std;

int main()
{
  // Escreva seu código aqui

  int metroCorrer, comprimento, calculo;
  cin >> metroCorrer >> comprimento;

  calculo = metroCorrer % comprimento;

  cout << calculo;
  return 0;
}