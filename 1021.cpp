#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
 
int main() {
	// Declara a variáveis
	float N_original, moe_cinquenta, moe_vintecinco, moe_dez, moe_cinco, moe_umcent;
	int N, n_cem, n_cinquenta, n_vinte, n_dez, n_cinco, n_dois, moe_um;
	// Leitura das var float N_original - representando um valor em reais com casas decimais
	cin >> N_original;
	// Cálculo para obter a quantidade de cada cedula
	N = (int)N_original;
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
    // Cálculo da quantidade de cada moeda	
	moe_um = N/1;
	N_original = N_original-(int)N_original;
	moe_cinquenta = int(N_original/0.50);
	N_original = N_original-(moe_cinquenta*0.50);
	moe_vintecinco = int(N_original/0.25);
	N_original = N_original-(moe_vintecinco*0.25);
	moe_dez = int(N_original/0.10);
	N_original = N_original-(moe_dez*0.10);
	moe_cinco = int(N_original/0.05);
	N_original = N_original-(moe_cinco*0.05);
	moe_umcent = N_original*100;
	// seta para utilizar duas casas decimais
	cout << fixed << setprecision(0);
	// apresenta os valores
	cout << "NOTAS:" << endl;	
	cout << n_cem << " nota(s) de R$ 100.00" << endl;
	cout << n_cinquenta << " nota(s) de R$ 50.00" << endl;
	cout << n_vinte << " nota(s) de R$ 20.00" << endl;
	cout << n_dez << " nota(s) de R$ 10.00" << endl;
	cout << n_cinco << " nota(s) de R$ 5.00" << endl;
	cout << n_dois << " nota(s) de R$ 2.00" << endl;
	cout << "MOEDAS:" << endl;		
	cout << moe_um << " moeda(s) de R$ 1.00" << endl;
	cout << moe_cinquenta << " moeda(s) de R$ 0.50" << endl;
	cout << moe_vintecinco << " moeda(s) de R$ 0.25" << endl;
	cout << moe_dez << " moeda(s) de R$ 0.10" << endl;
	cout << moe_cinco << " moeda(s) de R$ 0.05" << endl;
	cout << roundf(moe_umcent) << " moeda(s) de R$ 0.01" << endl;	
    return 0;
}