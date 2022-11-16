#include <iostream>
using namespace std;

int main()
{
  // Escreva seu código aqui

  int p, r;
  cin >> p >> r;
  if (p == 0)
  {
    cout << "C";
  }
  else if (p == 1)
  {
    if (r == 0)
    {
      cout << "B";
    }
    else if (r == 1)
    {
      cout << "A";
    }
  }
  return 0;
}