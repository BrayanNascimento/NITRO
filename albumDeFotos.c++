#include <iostream>
using namespace std;

int main()
{
  // Escreva seu código aqui
  int x, y, h1, l1, h2, l2, calculo;
  cin >> x >> y;
  cin >> h1 >> l1;
  cin >> h2 >> l2;

  if (x > (h1 + h2) && y > l1 && y > l2)
  {
    cout << "S";
  }
  else
  {
    cout << "N";
  }

  return 0;
}