#include <iostream>
using namespace std;
int main (){
	struct datosArroz{
		int arroz;
		int agua;
		int aceite;
		float sal;
		int tiempo;	
		
	};
	
	datosArroz Arroz;
	cout<<"Cantidad de tazas de arroz va a hacer :";
	cin>>Arroz.arroz;
	Arroz.aceite=Arroz.arroz;
	cout<<"Poner una holla a calentar y agregar "<<Arroz.aceite<<" chorros de aceite\n";
	cout<<"Adicionar el arroz para freirlo\n";
	Arroz.agua=Arroz.arroz*2;
	cout<<"Debe adicionar "<<Arroz.agua<<" tazas de agua\n";
	Arroz.sal=Arroz.arroz/2;
	cout<<"Cuando empiece a hervir mezclar "<<Arroz.sal<<" chucarada de sal\n";
	Arroz.tiempo=Arroz.arroz*10;
	cout<<"Dejar secar y tapar por: "<<Arroz.tiempo<<" minutos en fuego bajo";
	cout<<" Peinar y servir calientico.\n";
	
	int terminado=1;
	int *fin=&terminado;
		
	cout<<"El espacio de memoria es"<<&terminado;
}
