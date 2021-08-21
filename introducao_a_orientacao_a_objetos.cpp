#include <iostream>
#include <cstdlib>
#include <string>
#include <stdio.h>
#include <locale.h>
#include "Carro.h"
using namespace std;


int main(int argc, char** argv)
{
	setlocale(LC_ALL," portuguese");
	Carro c1;
	c1.setMarca(" Chevrolet");
	
	c1.setAno(2018);
	c1.setCor(" Amarelo");
	
	
	
	cout << "\n" << c1.getMarca() << endl;
	cout << "\n" << c1.getCor() << endl;
	cout << "\n" << c1.getAno() << endl;
	
	/*
	carro c2;
	
	cout << "\nDigite a marca do carro" << endl;
	
	cin >> c2.marca;
	
	cout << "\nDigite o ano do carro" << endl;
	
	cin >> c2.ano;
	
	cout << "\nDigite a cor do carro" << endl;
	
	cin >> c2.cor;
	
	cout << "\nInformações do Veiculo" <<endl;
	cout << "\nMarca : "<< c2.marca << endl;
	cout << "\nCor : "<< c2.cor << endl;
	cout << "\nAno : "<< c2.ano <<"\n\n" << endl;
	
	*/
	
	
	   	
	system("Pause");
	
	return 0;
}