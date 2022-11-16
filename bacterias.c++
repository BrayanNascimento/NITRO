#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int n, melhorBacteria;

  double d, c, colonia, maxBacteria = 0.0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> d >> c;
    colonia = c * log10(d);

    if (colonia > maxBacteria)
    {
      maxBacteria = colonia;
      melhorBacteria = i;
    }
  }
  cout << melhorBacteria << endl;

  return 0;
}