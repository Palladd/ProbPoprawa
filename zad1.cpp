#include <bits/stdc++.h>
#include <ctime>

using namespace std;

int main() {
	srand(time(NULL));
	
	int tab[50][50];
	
	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 50; j++) {
			tab[i][j] = -50 + rand() % 101;
		}
	}
	
	
	int max = tab[0][0];
	int min = tab[0][0];
	int srednia = 0;
	
	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 50; j++) {
			if (max < tab[i][j]) {
				max = tab[i][j];
			}
			else if (min > tab[i][j]) {
				min = tab[i][j];
			}
		}
	}
	
	cout << "Max value: " << endl;
	cout << max << endl;
	cout << endl;
		
	cout << "Min value: " << endl;
	cout << min << endl;
	cout << endl;
	
	
	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 50; j++) {
			srednia = srednia + tab[i][j];
		}
	}
	
	
	cout << "Average: " << endl;
	cout << srednia << endl;
	cout << endl;
	
	
	cout << "All numbers that are capable of division and are greater than -5: " << endl;
	
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			if(tab[i][j] % 5 == 0 && tab[i][j] > -5) {
				cout << tab[i][j] << " ";
			}
		}
	}
	
    return(0);
}

