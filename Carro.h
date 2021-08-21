
#ifndef CARRO_H
#define CARRO_H

#include <string>
using namespace std;
class Carro{
	private:
		string cor;
		int ano;
		string marca;
	public:
		//Getters and Setters
		string getCor();
		
		void setCor(string color);
		//---------------------------
		string getMarca();
		
		void setMarca(string marca);
		//---------------------------
		int getAno();
		void setAno(int ano);
		

};	
	#endif  /*CARRO_H*/	