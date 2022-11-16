#include <iostream>
#include <vector>

using namespace std;

int main()
{
  // Escreva seu código aqui
  int n, nota, resposta = 0;
  int freguencia[101] = {};

  cin >> n;

  // add +1 no valor do vetor cada vez que a posição de indice se repete todos inicia em 0
  for (int i = 0; i < n; i++)
  {
    cin >> nota;
    freguencia[nota]++;
  }

  // se valor na posição "i" do vetor for maior que a resposta SWAP, assim achamos a nota que mais se repete
  for (int i = 1; i < 101; i++)
  {
    if (freguencia[i] >= freguencia[resposta])
    {
      resposta = i;
    }
  }
  cout << resposta << endl;
  return 0;
}