#include <iostream>
using namespace std;

int main()
{
  // Escreva seu código aqui

  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;

  if (a < b && b < c && c < d && d < e)
  {
    cout << "C";
  }
  else if (a > b && b > c && c > d && d > e)
  {
    cout << "D";
  }
  else
  {
    cout << "N";
  }

  return 0;
}