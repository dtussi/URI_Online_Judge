#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
	// Declara as var X, Y, Consumo
	int X;
	double Y, Consumo;
	// Leiura das var
	cin >> X;
	cin >> Y;
	// Cálculo do consumo de combustível (km/l)
	Consumo = X/Y;
	// Ajusta  precisao para 3
	cout << fixed << setprecision(3);
	// Apresenta o consumo por litro
	cout << Consumo << " km/l" << endl;
    return 0;
}