# include <iostream>
using namespace std;

class Persona{
	protected: string Nombres, Apellidos, Direccion, Date;
			   int telefono;
	protected :
		Persona(){
		}
			Persona(string name, string ape, string dire, string dat, int tel){
				Nombres = name;
				Apellidos = ape;
				Direccion = dire;
				Date = dat;
				telefono = tel;	
			}
	//Metodo 
	void Mostrar();
};

