#include <iostream>

using namespace std;

int main() {
	int n;
	int suma = 0;
	
	cout << "Wprowadz liczbe elementow tablicy: ";
	cin >> n;
	
	int *arrOne;
	arrOne = new int [n];
	
	for(int i = 0; i < n; i++) {
		cout << "Wprowadz element: ";
		cin >> arrOne[i];
	}
	
	for(int i = 0; i < n; i++) {
		suma += arrOne[i];
	}
		
	cout << suma << endl;

    delete [] arrOne;
    arrOne = NULL;
    
    return(0);
}

