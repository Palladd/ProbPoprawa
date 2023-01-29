#include <iostream>
#include <ctime>

using namespace std;

int main() {
//	i = tabele
// j = wiersze 
// k = kolumny

srand(time(NULL));
	
	int arrOne[5][5][5];
	
//	Uzupe³nienie tablicy liczbami losowymi od 0 do 1
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			for(int k = 0; k < 5; k++) {
				arrOne[i][j][k] = rand() % 2;
			}
		}
	}
	
//	Wypisanie jej w kolumnach i wierszach
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			for(int k = 0; k < 5; k++) {
				cout << arrOne[i][j][k];
			}
			cout << endl;
		}
		cout << endl;
	}

// Ile 0 jest w tabeli pierwszej oraz ile 1 jest w tabeli czwartej
	int ile0;
	int ile1 = 0;	

	for(int j = 0; j < 5; j++) {
		for(int k = 0; k < 5; k++) {
			if(arrOne[0][j][k] == 0) {
				ile0++;
			}
		}
	}

	for(int j = 0; j < 5; j++) {
		for(int k = 0; k < 5; k++) {
			if(arrOne[3][j][k] == 1) {
				ile1++;
			}
		}
	}

	
	cout << "Ile zer w tabeli pierwszej: ";
	cout << ile0 << endl;
	
	cout << "Ile jedynek w tabeli czwartej: ";
	cout << ile1 << endl;
	
//	Obliczenie sumy wszystkich elementów tablicy
	int suma;
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			for(int k = 0; k < 5; k++) {
				suma += arrOne[i][j][k];
			}
		}
	}
	
	cout << "Suma wszystkich elementow: ";
	cout << suma << endl;
	
	return 0;
}
