#include <iostream>
#include <ctime>

using namespace std;

int main() {
	int n;
	int suma;
	
	cout << "Ile elementow w tablicy: ";
	cin >> n;
	
// Deklaracja tablicy dynamicznej
	int *arrOne;
	arrOne = new int [n];
	
//	Wprowadzenie do tablicy
	for(int i = 0; i < 5; i++) {
		cout << "Wprowadz element: ";
		cin >> arrOne[i];
	}
	
//	Suma
	cout << endl;
	
	for(int i = 0; i < n; i++) {
		suma += arrOne[i];
	}
	
	cout << "Suma: ";
	cout << suma << endl;
	
//	Wypisanie na terminal

	cout << endl;
	cout << "Wszystkie elementy tablicy: " << endl;
	for(int i = 0; i < 5; i++) {
		cout << arrOne[i] << " ";
	}
	
//	Bardzo wa¿ne suniêcie tablicy dynamicznej
	delete [] arrOne;

	return 0;
}
