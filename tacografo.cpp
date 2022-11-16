#include <iostream>
using namespace std;

int main()
{
  // Escreva seu código aqui
  int n, t, v, calculo = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> t >> v;

    calculo = calculo + (t * v);
  }
  cout << calculo;
  return 0;
}