#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
	// Declara as variaveis temp_gasto (em horas) e vel_media (em km/h) e dist
	int temp_gasto, vel_media;
	double dist;
	// Leiura das var
	cin >> temp_gasto;
	cin >> vel_media;
	// Calculo da distancia percorrida tempo hora * velocidade media em km/h
	dist = temp_gasto*vel_media;
	// Seta casa decimais para (3)
	cout << fixed << setprecision(3);
	//mostra a quantidade de litros necessarios para a viagem Dist percorrida / 12 km/l (consumo do carro)
	cout << dist/12 << endl;
    return 0;
}