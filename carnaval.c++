#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  // Escreva seu código aqui
  float n1, n2, n3, n4, n5, total;
  cin >> n1 >> n2 >> n3 >> n4 >> n5;

  if (n1 <= n2 && n1 <= n3 && n1 <= n4 && n1 <= n5)
  {
    n1 = 0;
  }
  else if (n2 <= n1 && n2 <= n3 && n2 <= n4 && n2 <= n5)
  {
    n2 = 0;
  }
  else if (n3 <= n1 && n3 <= n2 && n3 <= n4 && n3 <= n5)
  {
    n3 = 0;
  }
  else if (n4 <= n1 && n4 <= n2 && n4 <= n3 && n4 <= n5)
  {
    n4 = 0;
  }
  else if (n5 <= n1 && n5 <= n2 && n5 <= n3 && n5 <= n4)
  {
    n5 = 0;
  }
  if (n1 >= n2 && n1 >= n3 && n1 >= n4 && n1 >= n5)
  {
    n1 = 0;
  }
  else if (n2 >= n1 && n2 >= n3 && n2 >= n4 && n2 >= n5)
  {
    n2 = 0;
  }
  else if (n3 >= n1 && n3 >= n2 && n3 >= n4 && n3 >= n5)
  {
    n3 = 0;
  }
  else if (n4 >= n1 && n4 >= n2 && n4 >= n3 && n4 >= n5)
  {
    n4 = 0;
  }
  else if (n5 >= n1 && n5 >= n2 && n5 >= n3 && n5 >= n4)
  {
    n5 = 0;
  }

  total = n1 + n2 + n3 + n4 + n5;
  cout << fixed << setprecision(1) << total << endl;

  return 0;
}