#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
 
int main() {
	// Declara as var A B C R1 R2
	double A, B, C, R1, R2, DELTA;
	// Leitura das var A B C R1 R2
	cin >> A;
	cin >> B;
	cin >> C;
	// Calcular o delta
	DELTA = pow(B,2)-(4*A*C);
	// Testa para validar impossibilidade de calcular Bhaskara
	if ((A==0) || (DELTA<0)) {
		cout << "Impossivel calcular" << endl;
	}
	else {
		R1 = (-B+sqrt(DELTA))/(2*A);
		R2 = (-B-sqrt(DELTA))/(2*A);
	// Setar a precisao para 5 casas
	cout << fixed << setprecision(5);
	// Mostra o resultado das raízes 
	cout << "R1 = " << R1 << endl;
	cout << "R2 = " << R2 << endl;
	}
    return 0;
}