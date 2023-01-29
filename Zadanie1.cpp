#include <iostream>
#include <ctime>

using namespace std;

int main() {
	srand(time(NULL));
	
	
	int arrOne[50][50];
	int max;
	int min;
	int suma = 0;
	
// Uzupe³nienie tablicy
	for(int i = 0; i < 50; i++) {
		for(int j = 0; j < 50; j++) {
			arrOne[i][j] = -50 + rand() % 101; 
			
			if(arrOne[i][j] == 0) {
				arrOne[i][j] = -50 + rand() % 101; 
			}
		}
	}

// Znalezienie maksymalnego i minimalnego elementu oraz wypisanie go w terminalu
	for(int i = 0; i < 50; i++) {
		for(int j = 0; j < 50; j++) {
			if(max < arrOne[i][j]) {
				max = arrOne[i][j];
			}
			else if(min > arrOne[i][j]) {
				min = arrOne[i][j];
			}
		}
	}
	
	cout << "Maksymalna: ";
	cout << max << endl;
	cout << endl;
		
	cout << "Minimalna: ";
	cout << min << endl;
	cout << endl;
	
// Œrednia
	for(int i = 0; i < 50; i++) {
		for(int j = 0; j < 50; j++) {
			suma += arrOne[i][j];
		}
	}
	
	int srednia = suma / 100;
	
	cout << "Srednia: ";
	cout << srednia << endl;
	cout << endl;
	
	
// Wypisanie wszystkich liczb podzielnych przez 5 i wiêkszych od -5
	cout << "Wszystkie liczby podzielne przez 5 i wieksze od -5: " << endl;
	
	for(int i = 0; i < 50; i++) {
		for(int j = 0; j < 50; j++) {
			if(arrOne[i][j] % 5 == 0 && arrOne[i][j] > -5) {
				cout << arrOne[i][j] << " ";
			}
		}
	}
	
	return 0;
}
