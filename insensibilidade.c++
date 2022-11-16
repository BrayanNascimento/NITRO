#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  // Escreva seu código aqui
  int n, x1, y1, x2, y2, cal, cal1, soma, aux = 0;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> x1 >> y1 >> x2 >> y2;

    cal = (x1 - x2);
    cal1 = (y1 - y2);
    cal = pow(cal, 2);
    cal1 = pow(cal1, 2);
    soma = cal + cal1;
    aux = aux + soma;
  }

  cout << aux;
  return 0;
}