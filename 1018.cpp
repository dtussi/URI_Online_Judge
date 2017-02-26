#include <iostream>

using namespace std;
 
int main() {
	// Declara a variável N
	int N, n_cem, n_cinquenta, n_vinte, n_dez, n_cinco, n_dois, n_um;
	// Leitura das var N - representando um valor em reais
	cin >> N;
    // Apresenta o valor lido e os totais por cedula
	cout << N << endl;
	// Cálculo para obter a quantidade de cada cedula
	n_cem = N/100;
	N = N-(n_cem*100);
	n_cinquenta = N/50;
	N = N-(n_cinquenta*50);
	n_vinte = N/20;
	N = N-(n_vinte*20);	
	n_dez = N/10;
	N = N-(n_dez*10);	
	n_cinco = N/5;
	N = N-(n_cinco*5);	
	n_dois = N/2;
	N = N-(n_dois*2);	
	n_um = N/1;
	cout << n_cem << " nota(s) de R$ 100,00" << endl;
	cout << n_cinquenta << " nota(s) de R$ 50,00" << endl;
	cout << n_vinte << " nota(s) de R$ 20,00" << endl;
	cout << n_dez << " nota(s) de R$ 10,00" << endl;
	cout << n_cinco << " nota(s) de R$ 5,00" << endl;
	cout << n_dois << " nota(s) de R$ 2,00" << endl;
	cout << n_um << " nota(s) de R$ 1,00" << endl;
    return 0;
}