/**
 * A loja VendeTudo possui 50 clientes. 
 * O gerente, para cada cliente, necessita armazenar o nome, cidade onde mora, o total da compra e o mês 
 * que o cliente comprou. Crie um menu com OPÇÃO 1 sair e 2 continuar; Crie no maximo 2 clientes
 */

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#define TAM 2
using namespace std;

typedef struct{
    string nome;
    string cidade;
    float total;
    string mes;
}Cliente;

int main(){
    Cliente pessoa[TAM];
    int opcao, i;
    i = 0;

    do
    {
        system("CLS");
        cout<<"Para o usuario "<< i+1 <<endl;

        cout << "Digite o nome do cliente" << endl;
        getline(cin,pessoa[i].nome);
        fflush(stdin);

        cout << "Digite a cidade do cliente" << endl;
        getline(cin,pessoa[i].cidade);
        fflush(stdin);

        cout << "Digite quanto o cliente gastou" << endl;
        cin >> pessoa[i].total;
        fflush(stdin);

        cout << "Digite em que mes a compra foi realizada" << endl;
        getline(cin,pessoa[i].mes);
        fflush(stdin);

        i++;

        if(i==TAM){
            cout << "Numero maximo de usuarios cadastrados" <<endl <<endl;
            break;
        }

        cout << "Digite 1 para SAIR e 2 para CONTINUAR" <<endl;
        cin>>opcao;
        fflush(stdin);
    }while (opcao==2);
    
    for(i=0;i<TAM;i++){
        cout << "Cliente "<< i+1 <<" Nome: "<< pessoa[i].nome << " Cidade: "<<pessoa[i].cidade<<" Quanto gastou: "<<pessoa[i].total<<" Mes em que comprou: "<<pessoa[i].mes<<endl;
    }
    return 0;
}