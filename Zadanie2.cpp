#include <iostream>
#include <ctime>

using namespace std;

int main() {
	int arrOne[5];
	int suma;

// Uzupełnienie tablicy liczbami
	for(int &i : arrOne) {
		cout << "Podaj element tablicy: ";
		cin >> i;
	}
	
// Obliczenie sumy i średniej
	for(int i : arrOne) {
		suma += i;	
	}
	
	int srednia = suma / 5;
	
	cout << endl;
	cout << "Suma: ";
	cout << suma << endl;
	
	cout << "Srednia: ";
	cout << srednia << endl;

	return 0;
}
