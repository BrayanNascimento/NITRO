#include <iostream>
using namespace std;

int main()
{
  // Escreva seu código aquiint
  int nota;
  cin >> nota;

  if (nota > 85 && nota < 101)
  {
    cout << "A";
  }
  else if (nota > 60 && nota < 86)
  {
    cout << "B";
  }
  else if (nota > 35 && nota < 61)
  {
    cout << "C";
  }
  else if (nota > 0 && nota < 36)
  {
    cout << "D";
  }
  else if (nota == 0)
  {
    cout << "E";
  }
  return 0;
}