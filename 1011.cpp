#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
	// Declara a var raio, VOLUME
	double raio, VOLUME;
	// Leiura da var raio
	cin >> raio;
	// Cálculo do volume de uma esfera
	VOLUME = 4.0/3 * 3.14159 * (raio*raio*raio);
	// Seta casas decimais para 3
	cout << fixed << setprecision(3);
    // Mostra o resultado do volume de uma esfera
	cout << "VOLUME = " << VOLUME << endl;
    return 0;
}