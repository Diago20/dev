//#include <iostream>
//using namespace std;
//int main(){
//	struct{
//		string name;
//		char inicial;
//		int edad;
//		float nota;
//	}persona;
//	persona.name = "Juan";	
//	persona.inicial = 'j';
//	persona.edad = 20;
//	persona.nota = 7.5;
//	cout<<"la edad es: "<<persona.edad;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main (){
//	struct datosPersona{
//		string nombre;
//		char inicial;
//		int edad;
//		float nota;
//	};
//	datosPersona persona;
//	
//	persona.nombre = "Juan";
//	persona.inicial = 'J';
//	persona.edad = 20;
//	persona.nota = 7.5;
//	cout<< "La edad es: "<<persona.edad;
//}

//#include <iostream>
//using namespace std;
//int main (){
//	int aux = 4;
//	int * puntero = &aux;
//	cout<<"La direccion de memoria es: "<<&puntero<<endl;
//	cout<<"El valor es: "<<*puntero;
//}


#include <iostream>
using namespace std;
void duplica (int*x)
{
	*x= *x * 4;
}
int main (){
	int n = 5;
	cout<<"n vale"<<endl<<n;
	
	duplica(&n);
	cout<<endl;
	cout<<"Ahora n vale"<<endl<<n;
}
