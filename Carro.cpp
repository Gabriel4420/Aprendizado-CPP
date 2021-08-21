#include "Carro.h"
#include <string>

using namespace std;



void Carro::setMarca(string marca){
	this->marca=marca;
}

string Carro::getMarca(){
	return marca;
}

void Carro::setCor(string cor){
	this->cor = cor;
}

string Carro::getCor(){
	return cor;
}


void Carro::setAno(int ano){
	if(ano < 1950){
		ano = 1950;
	}
	else
	{
		this->ano = ano;
	}
}

int Carro::getAno(){
	return ano;
}

