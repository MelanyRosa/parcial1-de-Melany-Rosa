#include <iostream>

using namespace std;

int main() {
	/*int numero, n; //ejercicio 1

	cout << "Digite el numero que desea nultiplicar: "; cin >> numero;

	for (int n=1; n <= 10; n++) {
		int multiplicacion = n * numero;
		cout << numero << " * " <<  n << " = " << multiplicacion << endl;
	}*/
	
	int n3=0, n7, n9, n=1; //ejercicio 2
	
	cout << "Digite el numero de la tabla que desea obtener: ";
	cin >> n3 >> n7 >> n9;

	do {
		cout << n << " * " << n3 << " = " << n * n3 << " " << endl;
		n++;
	} while (n3<=10);
	
	/*
	int numero = 0; //ejercicio 3

	cout << "Digite un numero del 1-7: "; cin >> numero;

	switch (numero) {
	case 1:
	case 2: 
	case 3:
	case 4: 
	case 5: cout << "Es dia laboral"; break;
	case 6: 
	case 7: cout << "No es dia laboral"; break;

	default: cout<<"Valor digitado incorrecto";
	}*/
	
	//ejercicio 4
	return 0;
}