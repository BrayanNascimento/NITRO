#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
  // Escreva seu código aqui

  // 1 pegar a distancia a ser percorrida
  // 2 pegar a distancia de cada salto
  // 3 fazer o calculo

  float distanciaPer, distanciaSal, resultado;

  cin >> distanciaPer >> distanciaSal;

  resultado = (distanciaPer / distanciaSal);

  cout << ceil(resultado);
  return 0;
}