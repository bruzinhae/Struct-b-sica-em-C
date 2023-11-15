#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Criação da Struct Aluno
typedef struct {
    int ra;
    char nome[30];
    float nota;
} aluno;

//Leitura de N e populando com dados (passando N como parâmetro)
void leitura(aluno aln[], int &N) {
    cout << "Digite a quantidade de alunos cadastrados:" << endl;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cout << "Aluno: " << i + 1 << endl;
        cout << "Digite o RA: ";
        cin >> aln[i].ra;
        cout << "Nome: ";
        cin.ignore();
        cin.getline(aln[i].nome, 30);
        cout << "Nota: ";
        cin >> aln[i].nota;
    }
}

//Calculo da maior nota entre a Lista 
aluno MaiorNota(aluno aln[], int N) {
    int Mnota = 0;

    for (int i = 0; i < N; i++) {
        if (aln[i].nota > aln[Mnota].nota) {
            Mnota = i;
        }
    }

    return aln[Mnota];
}

// impressão dos dados do Aluno
void dados(aluno aln) {
    cout << "RA: " << aln.ra << endl;
    cout << "Nome: " << aln.nome << endl;
    cout << "Nota: " << aln.nota << endl;
}

//Variáveis declaradas e leitura das funções
int main() {
    int N;
    aluno aln[30];

    leitura(aln, N);

    aluno maiornota = MaiorNota(aln, N);

    cout << "Aluno com Maior nota: " << endl;
    dados(maiornota);

    return 0;
}
