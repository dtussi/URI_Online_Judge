#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
 
int main() {
	// Declara as variaveis X1, X2, Y1, Y2, Distancia
	float X1, X2, Y1, Y2, Distancia;
	// Leitura das variaveis
	cin >> X1, cin >> Y1;
	cin >> X2, cin >> Y2;
	// Cálculo da distancia dos dois pontos
	Distancia = sqrt(pow((X2-X1),2)+pow((Y2-Y1),2));
	// Ajusta  precisao para 4
	cout << fixed << setprecision(4);
	// Apresenta a distancia
	cout << Distancia << endl;
    return 0;
}