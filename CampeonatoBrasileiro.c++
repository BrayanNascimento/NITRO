#include <iostream>
using namespace std;

int main()
{
  // Escreva seu código aqui
  int Cv, Ce, Cs, Fv, Fe, Fs;
  int calculoC, calculoF;
  cin >> Cv >> Ce >> Cs >> Fv >> Fe >> Fs;
  // vitoria = 3 , empate = 1

  calculoC = (Cv * 3) + Ce;
  calculoF = (Fv * 3) + Fe;

  if (calculoC > calculoF)
  {
    cout << "C";
  }
  else if (calculoF > calculoC)
  {
    cout << "F";
  }
  else if (calculoC == calculoF)
  {
    if (Cs > Fs)
    {
      cout << "C";
    }
    else if (Fs > Cs)
    {
      cout << "F";
    }
    else if (Cs == Fs)
    {
      cout << "=";
    }
  }
  return 0;
}