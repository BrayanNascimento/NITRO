#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

  float a, b, c;
  cin >> a >> b >> c;

  cout << fixed << setprecision(3) << "TRIÂNGULO: " << (a * c) / 2 << endl;
  cout << fixed << setprecision(3) << "CIRCULO: " << (c * c) * 3.14159 << endl;
  cout << fixed << setprecision(3) << "TRAPEZIO: " << ((a + b) * c) / 2 << endl;

  return 0;
}