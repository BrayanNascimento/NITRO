#include <iostream>
using namespace std;

int main()
{
  // Escreva seu código aqui
  // 1 ler a pressão desejada
  // 2 ler a pressa que o pneu estava
  // 3 fazer o calculo

  int presDeseja, presPneu, calculo;
  // 1,2
  cin >> presDeseja >> presPneu;
  // 3
  calculo = presDeseja - presPneu;

  cout << calculo;

  return 0;
}
