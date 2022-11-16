#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int n, div = 0;
  float calculo = 0;
  cin >> n;

  while (n >= 0)
  {
    calculo = calculo + n;

    div++;

    cin >> n;
  }

  cout << fixed << setprecision(2) << calculo / div << endl;
  return 0;
}