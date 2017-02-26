#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
	// Declara a var raio
	double raio, area;
	// Leiura da var raio
	cin >> raio;
	// Cálculo da área da circunferência
	area = 3.14159 * (raio*raio);
	// Seta casas decimais para 4
	cout << fixed << setprecision(4);
    // Mostra o resultado da area da circ
	cout << "A=" << area << endl;
    return 0;
}