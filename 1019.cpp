#include <iostream>

using namespace std;
 
int main() {
	// Declara a variável N
	int N, horas, minutos, segundos;
	// Leitura das var N - definida por segundos
	// 1 hora = 60 minutos e 3600 segundos, 1 minuto = 60 segundos
	cin >> N;
	// Cálculo de horas, minutos e segundos
	horas = (N/3600);
    minutos = (N -(3600*horas))/60;
    segundos = (N -(3600*horas)-(minutos*60));
	// Apresenta a distancia
	cout << horas << ":" << minutos << ":" << segundos << endl;
    return 0;
}