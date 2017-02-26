#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
	// Declara as variavéis A B C MEDIA
	double A, B, C, MEDIA;
	// Leiura das var A, B e C
	cin >> A;
	cin >> B;
	cin >> C;
	// Produto dos pesos e cálcula a média e armazenada na var MEDIA
	MEDIA = ((A*2)+(B*3)+(C*5))/10;
	// Setar a precisao para 5 casas
	cout << fixed << setprecision(1);
	// Mostra o resultado em MEDIA
	cout << "MEDIA = " << MEDIA << endl;
    return 0;
}