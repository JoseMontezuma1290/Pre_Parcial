# include "Persona.cpp"
# include <iostream>
using namespace std;

class Propietario : Persona{
	//Atributos
	private: string nit;
			 double cui;
	//Constructor
	public:
		Propietario(){
		}
		Propietario(string name, string ape, string dire, string dat, int tel, string n1t, double cu1) : Persona(name, ape, dire, dat, tel){
			nit=n1t;
			cui=cu1;
		}
		//Metodos
		//set_Modificar 
		void setNit(string n1t){ nit=n1t; }
		void setCui(double cu1){ cui=cu1; }
		void setNombres(string name){ Nombres=name;} 
		void setApellidos(string ape){ Apellidos=ape; }
		
		
};

