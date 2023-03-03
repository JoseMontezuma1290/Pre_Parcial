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
		void setDireccion(string dire){Direccion=dire; }
		void setDate(string dat){Date=dat;}
		void setTelefono(int tel){telefono=tel;}
		
		//Get_Obtener
		string getNit(){ return nit; }
		double getCui(){ return cui; }
		string getNombres(){ return Nombres;} 
		string getApellidos(){ return Apellidos; }
		string getDireccion(){return Direccion; }
		string getDate(){return Date;}
		int getTelefono(){return telefono;}
		
		void mostrar(){
			cout<<"__________________________________"<<endl;
			cout<<nit<<endl;
			cout<<cui<<endl;
			cout<<Nombres<<endl;
			cout<<Apellidos<<endl;
			cout<<Direccion<<endl;
			cout<<Date<<endl;
			cout<<telefono<<endl;
			cout<<"__________________________________"<<endl;
			cout<<endl;
			system("pause");
		}
		void Add(){
			cout<<"--------Metodo de Agregar-------"<<endl;
			system("pause");
		}
		
		
};

