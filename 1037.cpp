#include <iostream>

using namespace std;
 
int main() {
	// Declara a var N
	double N;
	// Leitura da var N
	cin >> N;
	// Realiza a analise dos intervalos -> ([0,25], (25,50], (50,75], (75,100])
	if ((N<0) || (N>100)) {
		cout << "Fora de intervalo" << endl;
	}
	if ((N>=0) && (N<=25)) {
	// intervalos [0,25]
	cout << "Intervalo [0,25]" << endl;
	}
	if ((N>25) && (N<=50)) {
	// intervalos (25,50]
	cout << "Intervalo (25,50]" << endl;
	}
	if ((N>50) && (N<=75)) {
	// intervalos (50,75],
	cout << "Intervalo (50,75]" << endl;	
	}
	if ((N>75) && (N<=100)) {
	// intervalos (75,100]
	cout << "Intervalo (75,100]" << endl;
	}
    return 0;
}