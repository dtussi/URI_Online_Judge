#include <iostream>
 
using namespace std;
 
int main() {
	// Declara as variavéis A, B, C, D, DIFERENCA
	int A, B, C, D, DIFERENCA;
	// Leiura das var A e B
	cin >> A;
	cin >> B;
	cin >> C;
	cin >> D;
	// Diferença dos produtos de AB e CD e armazenada na var DIFERENCA
	DIFERENCA = A*B-C*D;
	// Mostra o resultado em DIFERENCA
	cout << "DIFERENCA = " << DIFERENCA << "\n";
    return 0;
}