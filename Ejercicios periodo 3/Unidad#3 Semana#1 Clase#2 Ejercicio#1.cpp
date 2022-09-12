#include <iostream>
using namespace std;

int main(){
	int selector1, selector2;
	cout<<"Ingrese un numero para convertirlo a letras "<<endl;
	cin>>selector1;
	
	switch(selector1){
		case 1:
			cout<<"UNO"<<endl;
			break;
		case 2:
			cout<<"DOS"<<endl;
			break;
		case 3:
			cout<<"TRES"<<endl;
			break;
		case 4:
			cout<<"CUATRO"<<endl;
			break;
		case 5:
			cout<<"CINCO"<<endl;
			break;	
		default: cout<<"Fuera de rango numerico"<<endl;				
	}
	cout<<"Ingrese el numero de posicion de una vocal "<<endl;
	cin>> selector2;
	
	switch(selector2){
		case 1:
			cout<<"      A"<<endl;
			break;
		case 2:
			cout<<"      E"<<endl;
			break;
		case 3:
			cout<<"      I"<<endl;
			break;	
		case 4:
			cout<<"      O"<<endl;
			break;	
		case 5:
			cout<<"      U"<<endl;
			break;
		default: cout<<"        No hay vocal"<<endl;			
	}
	 system("pause");
}
