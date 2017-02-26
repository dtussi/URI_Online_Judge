#include <iostream>

using namespace std;
 
int main() {
	// Declara a variável
	int N, anos, meses, dias;
	// Leitura das var N - idade em dias  
	cin >> N;
	// Cálculo para obter a idade da pessoa em anos, meses e dias
	anos = N/365;
	N = N-(anos*365);
	meses = N/30;
	N = N-(meses*30);
	dias = N;
	// apresenta os valores
	cout << anos << " ano(s)" << endl;
	cout << meses << " mes(es)" << endl;
	cout << dias << " dia(s)" << endl;
    return 0;
}