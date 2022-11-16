//#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  // Escreva seu código aqui
  int n;
  cin >> n;
  string palavra;

  for (int i = 0; i < n; i++)
  {
    cin >> palavra;

    bool verdade = true;
    for (int i = 0; i < palavra.length() - 1; i++)
    {
      if (toupper(palavra[i]) < toupper(palavra[i + 1]))
      {
        verdade = true;
        // cout << palavra << ":" << "true" << endl;
      }
      else
      {
        verdade = false;
        break;
      }
    }
    if (verdade == true)
    {
      cout << palavra << ": "
           << "O" << endl;
    }
    else
    {
      cout << palavra << ": "
           << "N" << endl;
    }
  }
  return 0;
}