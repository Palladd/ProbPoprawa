#include <iostream>
#include <ctime>


using namespace std;

int main() {
//	i = ilosc tablic
// j = ilosc wierszy
// k = ilosc kolumn

	srand(time(NULL));
	
	int arrOne[5][5][5];
	
	int suma0;
	int suma1;
	int sumaAll = 0;
	
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			for(int k = 0; k < 5; k++) {
				arrOne[i][j][k] = rand() % 2;
			}
		}
	}
	
	//	Wypisanie na tablicy
	
	cout << "Wszystkie tablice: " << endl;
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			for(int k = 0; k < 5; k++) {
				cout << arrOne[i][j][k];
			}
			cout << endl;
		}
		cout << endl;
	}
	
// Suma zer
	for(int j = 0; j < 5; j++) {
		for(int k = 0; k < 5; k++) {
			if(arrOne[0][j][k] == 0) {
				suma0++;
			}
		}
	}
	
	cout << "Suma zer w tabeli pierwszej: ";
	cout << suma0 << endl;
	
// Suma jedynek
	for(int j = 0; j < 5; j++) {
		for(int k = 0; k < 5; k++) {
			if(arrOne[3][j][k] == 0) {
				suma1++;
			}
		}
	}
	
	cout << "Suma jedynek w tabeli czwartej: ";
	cout << suma1 << endl;
	
// Suma 
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			for(int k = 0; k < 5; k++) {
				sumaAll += arrOne[i][j][k];
			}
		}
	}
	
	cout << "Suma wszystkich elementow tablicy: ";
	cout << sumaAll << endl;
return 0;
}

