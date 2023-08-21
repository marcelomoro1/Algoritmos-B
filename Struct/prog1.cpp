/**
 * Escreva um programa que faça o controle das informações relativas aos funcionários de uma determinada empresa. 
 * As informações que devem ser armazenadas são: NOME, SALÁRIO, CARGO, IDADE e SEXO. 
 * Defina a estrutura de dados e faça a leitura e exibição dos dados para um funcionário.
 */
 
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <cstdio>

using namespace std;

typedef struct{
	string nome;
	float salario;
	string cargo;
	int idade;
	string sexo;
}Funcionarios;

int main(){
	Funcionarios pessoa;
	cout << "Digite o seu nome" <<endl;
	getline(cin, pessoa.nome);
	fflush(stdin);
	
	cout << "Digite o seu Salario" <<endl;
	cin >> pessoa.salario;
	fflush(stdin);
	
	cout << "Digite o seu Cargo" <<endl;
	getline(cin, pessoa.cargo);
	fflush(stdin);
			
	cout << "Digite a sua Idade" <<endl;
	cin >> pessoa.idade;
	fflush(stdin);
	
	cout << "Digite o seu sexo" <<endl;
	getline(cin, pessoa.sexo);
	fflush(stdin);
	
	cout << "Nome: " <<pessoa.nome <<", Salario: "<< pessoa.salario << ", Cargo: "<<pessoa.cargo<< ", Idade: "<< pessoa.idade<< ", Sexo: "<< pessoa.sexo<< endl;
	return 0;
}
