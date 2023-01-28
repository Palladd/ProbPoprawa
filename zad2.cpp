#include <iostream>

using namespace std;

int main() {
	int arrOne[5];
	
	float suma = 0;

	
	for(int &i: arrOne) {
		cout << "Wpisz element z klawiatury: ";
		cin >> i;
	}
	
	
//	Suma
	for(int i: arrOne) {
		suma += i;
	}
	
	cout << "Suma: ";
	cout << suma << endl;
	
//	Srednia
	
	float srednia = suma / 5;
	
	cout << "Srednia: ";
	cout << srednia << endl;
	
//	Wypisanie na konsole

	cout << "Wszystkie elementy tablicy: ";
    for (int j : arrOne) {
        cout << j << " ";
    }

	
    return(0);
}

