#include <iostream>
using namespace std;

int main()
{
  // Escreva seu código aqui
  // bolo 2 farinha 3 ovos 5 leite
  int a, b, c, d1, d2, d3;
  cin >> a >> b >> c;
  d1 = a / 2;
  d2 = b / 3;
  d3 = c / 5;

  if (d1 <= d2 && d1 <= d3)
  {
    cout << d1 << endl;
  }
  else if (d2 <= d1 && d2 <= d3)
  {
    cout << d2 << endl;
  }
  else
  {
    cout << d3 << endl;
  }

  return 0;
}