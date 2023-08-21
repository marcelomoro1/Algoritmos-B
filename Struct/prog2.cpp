/**
 * Em um plano cartesiano, um círculo pode ser definido pelas coordenadas do centro e pelo raio, 
 * enquanto um retângulo de lados paralelos aos eixos pode ser definido pelas coordenadas dos 
 * vértices superior esquerdo e inferior direito. Escreva um programa que leia os valores que definem 
 * um retângulo e um círculo, e verifique qual tem o maior perímetro e qual tem a maior área.
 */
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

typedef struct{
	int x,y;
	int raio;
	int perimetro;
	int area;	
}Circulo;

typedef struct{
	int xsupEsquerdo;
	int ysupEsquerdo;
	int xinfDireito;
	int yinfDireito;
	int altura;
	int base;
	int perimetro;
	int area;	
}Retangulo;

int main(){
    int PI = 3.14;
	Circulo circulo;
	Retangulo retangulo;
	
	cout << "Digite a coordenada X do centro do Circulo" << endl;
	cin >> circulo.x;
	fflush(stdin);
	
	cout << "Digite a coordenada Y do centro do Circulo" << endl;
	cin >> circulo.y;	
	fflush(stdin);	
	
	cout << "Digite o raio do Circulo" << endl;
	cin >> circulo.raio;	
	fflush(stdin);	
	
	cout << "Digite a coordenada X Superior Esquerda do Retangulo" << endl;
	cin >> retangulo.xsupEsquerdo;
	fflush(stdin);
	
	cout << "Digite a coordenada Y Superior Esquerda do Retangulo" << endl;
	cin >> retangulo.ysupEsquerdo;
	fflush(stdin);
	
	cout << "Digite a coordenada X Inferior Direita do Retangulo" << endl;
	cin >> retangulo.xinfDireito;
	fflush(stdin);
	
	cout << "Digite a coordenada Y Inferior Direita do Retangulo" << endl;
	cin >> retangulo.yinfDireito;
	fflush(stdin);
	
	circulo.area = PI*pow(circulo.raio,2);
	circulo.perimetro = 2*PI*circulo.raio;
	
	retangulo.altura = abs(retangulo.ysupEsquerdo - retangulo.yinfDireito);
	retangulo.base = abs(retangulo.xsupEsquerdo - retangulo.xinfDireito);
	
	retangulo.area = retangulo.altura*retangulo.base;
	retangulo.perimetro = 2*retangulo.base + 2*retangulo.altura;
	
    if (circulo.area > retangulo.area){
        cout << "Area do circulo eh maior" << endl;
    }
    else{
        cout << "Area do retangulo eh maior" << endl;
    }
    if (circulo.perimetro > retangulo.perimetro){
        cout << "Perimetro do circulo eh maior" <<endl;
    }
    else{
        cout << "Perimetro do retangulo eh maior"<< endl;
    }

	return 0;
}
