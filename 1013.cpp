#include <iostream>
#include <cmath>

using namespace std;
 
int main() {
	// Declara as var
	int A, B, C, MAIORAB, MAIOR;
	// Leiura das var - 3 na mesma linha
	cin >> A, cin >> B, cin >> C;
	// Cálculo do maior entre AB
	MAIORAB = (A+B+abs(A-B))/2;
	// Cálculo do maior entre Anterior contra C
	MAIOR = (MAIORAB+C+abs(MAIORAB-C))/2;
    // Mostra o total a pagar
	cout << MAIOR << " eh o maior" << endl;
    return 0;
}