# include "Propietario.cpp"
# include <iostream>
using namespace std;

main(){
	string n1t, name, ape, dire, dat;
	int tel;
	double cu1;
	cout<<"Ing. su Nit: ";
	cin>>n1t;
	cout<<"Ing. su CUI: ";
	cin>>cu1;
	cout<<"Ing. su Nombre: ";
	cin>>name;
	cout<<"Ing. su Apellido: ";
	cin>>ape;
	cout<<"Ing. su Direccion: ";
	cin>>dire;
	cout<<"Ing. su Fecha de Nacimiento: ";
	cin>>dat;
	cout<<"Ing. su Telefono: ";
	cin>>tel;
	
	// Instancia de un objeto
	Propietario obj = Propietario(name, ape, dire, dat, tel, n1t, cu1);
	obj.mostrar();
	obj.Add();
	
}
