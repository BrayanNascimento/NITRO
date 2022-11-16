#include <iostream>
#include <vector>

using namespace std;

const int MAX_ALUNOS = 1000;
int main()
{
  int i, n, indice_melhor;
  int turma = 1;
  struct
  {
    int codigo, media;
  } alunos[MAX_ALUNOS];
  // le numero de alunos da primeira turma
  cin >> n;
  while (n > 0)
  {
    vector<int> melhores;

    // le dados dos alunos
    for (i = 0; i < n; i++)
    {
      cin >> alunos[i].codigo >> alunos[i].media;
    }
    // procura aluno de maior media
    indice_melhor = 0;
    for (i = 1; i < n; i++)
    {
      if (alunos[i].media > alunos[indice_melhor].media)
      {
        indice_melhor = i;
      }
    }
    // escrever resposta

    for (int i = 0; i < n; i++)
    {
      if (alunos[i].media == alunos[indice_melhor].media)
      {
        melhores.push_back(alunos[i].codigo);
      }
    }
    cout << "Turma " << turma++ << "\n";
    for (i = 0; i < melhores.size(); i++)
    {
      cout << melhores[i] << " ";
    }
    // le numero de alunos da proxima turma
    cout << "\n\n";
    cin >> n;
  }
  return 0;
}