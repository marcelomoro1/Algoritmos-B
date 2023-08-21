/**
 * A turma de Algoritmo e Programação II possui 3 alunos. Para cada aluno, é necessário
armazenar o nome, número de faltas, o valor da nota 1, nota 2, nota 3, a média das notas e o
valor da mensalidade. A média das notas é aritmética.
 */
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#define TAM 2
using namespace std;

typedef struct{
    string nome;
    int faltas;
    float nota1;
    float nota2;
    float nota3;
    float media;
    float mensalidade;
}Aluno;

int main()
{
    Aluno alunos[TAM];
    int i;

    for(i=0;i<TAM;i++){
        cout<< "Digite o nome do aluno "<<i+1<<endl;
        getline(cin,alunos[i].nome);
        fflush(stdin);

        cout<< "Digite a nota 1 do aluno "<<i+1<<endl;
        cin>>alunos[i].nota1;
        fflush(stdin);

        cout<< "Digite a nota 2 do aluno "<<i+1<<endl;
        cin>>alunos[i].nota2;
        fflush(stdin);

        cout<< "Digite a nota 3 do aluno "<<i+1<<endl;
        cin>>alunos[i].nota3;
        fflush(stdin);

        alunos[i].media = (alunos[i].nota1+alunos[i].nota2+alunos[i].nota3)/3;

        cout<<"Digite a mensalidade do aluno "<<i+1<<endl;
        cin>>alunos[i].mensalidade;
        fflush(stdin);
    }
    for(i=0;i<TAM;i++){
        cout << "Aluno "<< i+1 <<": Nome: "<< alunos[i].nome <<", Media: "<< alunos[i].media << ", Mensalidade: "<<alunos[i].mensalidade<<endl;

    }
    return 0;
}
