#include <iostream>
#include <iomanip>
#define PI 3.14159

using namespace std;
 
int main() {
	// Declara as var A, B, C, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO
	double A, B, C, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
	// Leiura das var A, B, C, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO
	cin >> A;
	cin >> B;
	cin >> C;
	// Cálculo da area do TRIANGULO - base*altura/2
	TRIANGULO = A*C/2;
	// Cálculo da area do CIRCULO - PI*(Raio*Raio)
	CIRCULO = PI * (C*C);
	// Cálculo da area do TRAPEZIO - (Base Maior + Base Menor)*altura/2 
	TRAPEZIO = (A+B)*C/2;
	// Cálculo da area do QUADRADO - lado ao quadrado ou seja lado*lado
	QUADRADO = B*B;
	// Cálculo da area do RETANGULO - base * altura
	RETANGULO = A*B;
	// Seta casas decimais para 3
	cout << fixed << setprecision(3);
    // Mostra os cálculos das respectivas áreas
	cout << "TRIANGULO: " << TRIANGULO << endl;
	cout << "CIRCULO: " << CIRCULO << endl;
	cout << "TRAPEZIO: " << TRAPEZIO << endl;
	cout << "QUADRADO: " << QUADRADO << endl;
	cout << "RETANGULO: " << RETANGULO << endl;	
    return 0;
}