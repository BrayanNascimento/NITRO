#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  // Escreva seu código aqui
  float n, p;
  cin >> n >> p;
  while (n != 0 && p != 0)
  {
    // char o = "o";
    if (n / p > 20)
    {
      cout << "Poooooooooooooooodle" << endl;
    }
    else if (n / p < 6)
    {
      cout << "Poodle" << endl;
    }
    else
    {
      cout << "Poo";
      float div = ceil(n / p);
      // cout << div << endl;
      int cal = div - 6;
      for (int i = 0; i < div - 6; i++)
      {
        cout << "o";
      }
      cout << "dle" << endl;
    }
    cin >> n >> p;
  }
  return 0;
}