#include <iostream>
using namespace std;

int main()
{
  // Escreva seu código aqui
  int n, numeroIn, teste = 1;
  cin >> n;

  while (n != 0)
  {
    for (int i = 0; i < n; i++)
    {
      int ingre[] = {0};
      cin >> numeroIn;
      ingre[i] = numeroIn;

      if (i + 1 == numeroIn)
      {
        cout << "Teste " << teste << endl;
        cout << numeroIn << endl;
        cout << endl;
        teste++;
      }
    }
    cin >> n;
  }
  return 0;
}