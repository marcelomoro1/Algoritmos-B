/**
 * Escreva um programa que leia um vetor de produtos, com 50 elementos, sendo cada elemento
uma estrutura que contém o nome do produto, seu preço de compra e seu preço de venda.
Depois de lido o vetor, retorne o nome e o índice do produto de menor preço de compra.
 */

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#define TAM 2

using namespace std;

typedef struct{
    string nome;
    float preco_compra;
    float preco_venda;
}Produtos;

int main(){
    int i, indice_compra;
    float menor_compra;
    menor_compra = 100000;
    Produtos produto[TAM];
    for(i=0;i<TAM;i++){
        system("CLS");
        cout << "Qual o nome do produto? "<< i+1 << endl;
        getline(cin,produto[i].nome);
        fflush(stdin);

        cout << "Qual o preco de compra do produto? "<<i+1 << endl;
        cin >> produto[i].preco_compra;
        fflush(stdin);

        cout << "Qual o preco de venda do produto? "<<i+1 << endl;
        cin >> produto[i].preco_venda;
        fflush(stdin);

        if(produto[i].preco_compra < menor_compra){
            menor_compra = produto[i].preco_compra;
            indice_compra = i;
        }
    }
        cout << "Menor preco de compra: "<<menor_compra<<", e o seu indice eh: "<<indice_compra<<endl;

    return 0;
}