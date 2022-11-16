#include <iostream>
using namespace std;

int main()
{
  // Escreva seu código aqui
  int n, x = 4, y = 3, resp = 0;
  bool caiu = false;
  cin >> n;
  int m;
  for (int i = 0; i < n; i++)
  {
    cin >> m;
    if (caiu == false)
    {
      // verificar se caiu
      if (x == 1 && y == 3 || x == 2 && y == 3 || x == 2 && y == 5 || x == 5 && y == 4)
      {
        // cout << "caiu" << endl;
        caiu = true;
      }
      else if (m == 1)
      {
        x = x + 1;
        y = y + 2;
        if (x == 1 && y == 3 || x == 2 && y == 3 || x == 2 && y == 5 || x == 5 && y == 4)
        {
          //  cout << "caiu" << endl;
          caiu = true;
          resp = resp + 1;
        }
        else
        {
          resp = resp + 1;
        }
      }
      else if (m == 2)
      {
        x = x + 2;
        y = y + 1;
        if (x == 1 && y == 3 || x == 2 && y == 3 || x == 2 && y == 5 || x == 5 && y == 4)
        {
          //  cout << "caiu" << endl;
          caiu = true;
          resp = resp + 1;
        }
        else
        {
          resp = resp + 1;
        }
      }
      else if (m == 3)
      {
        x = x + 2;
        y = y - 1;
        if (x == 1 && y == 3 || x == 2 && y == 3 || x == 2 && y == 5 || x == 5 && y == 4)
        {
          // cout << "caiu AQ" << endl;
          caiu = true;
          resp = resp + 1;
        }
        else
        {
          resp = resp + 1;
        }
      }
      else if (m == 4)
      {
        x = x + 1;
        y = y - 2;
        if (x == 1 && y == 3 || x == 2 && y == 3 || x == 2 && y == 5 || x == 5 && y == 4)
        {
          //  cout << "caiu" << endl;
          caiu = true;
          resp = resp + 1;
        }
        else
        {
          resp = resp + 1;
        }
      }
      else if (m == 5)
      {
        x = x - 1;
        y = y - 2;
        if (x == 1 && y == 3 || x == 2 && y == 3 || x == 2 && y == 5 || x == 5 && y == 4)
        {
          //  cout << "caiu" << endl;
          caiu = true;
          resp = resp + 1;
        }
        else
        {
          resp = resp + 1;
        }
      }
      else if (m == 6)
      {
        x = x - 2;
        y = y - 1;
        if (x == 1 && y == 3 || x == 2 && y == 3 || x == 2 && y == 5 || x == 5 && y == 4)
        {
          //  cout << "caiu" << endl;
          caiu = true;
          resp = resp + 1;
        }
        else
        {
          resp = resp + 1;
        }
      }
      else if (m == 7)
      {
        x = x - 2;
        y = y + 1;
        if (x == 1 && y == 3 || x == 2 && y == 3 || x == 2 && y == 5 || x == 5 && y == 4)
        {
          //  cout << "caiu" << endl;
          caiu = true;
          resp = resp + 1;
        }
        else
        {
          resp = resp + 1;
        }
      }
      else if (m == 8)
      {
        x = x - 1;
        y = y + 2;
        if (x == 1 && y == 3 || x == 2 && y == 3 || x == 2 && y == 5 || x == 5 && y == 4)
        {
          //  cout << "caiu" << endl;
          caiu = true;
          resp = resp + 1;
        }
        else
        {
          resp = resp + 1;
        }
      }
    }
  }

  cout << resp << endl;
  return 0;
}