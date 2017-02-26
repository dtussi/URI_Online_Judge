#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
	// Declara as var A B MEDIA
	double A, B, MEDIA;
	// Leiura das var A e B
	cin >> A;
	cin >> B;
	// Produto dos pesos e cálcula a média e armazenada na var MEDIA
	MEDIA = ((A*3.5)+(B*7.5))/11;
	// Setar a precisao para 5 casas
	cout << fixed << setprecision(5);
	// Mostra o resultado em MEDIA
	cout << "MEDIA = " << MEDIA << endl;
    return 0;
}