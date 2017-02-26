#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
	// Declara as var
	int cod_peca1, num_peca1, cod_peca2, num_peca2;
	double val_unit_peca1, val_unit_peca2, total;
	// Leiura das var - 3 na mesma linha
	cin >> cod_peca1, cin >> num_peca1, cin >> val_unit_peca1;
	cin >> cod_peca2, cin >> num_peca2, cin >> val_unit_peca2;
	// Cálculo do total a pagar
	total = (num_peca1*val_unit_peca1)+(num_peca2*val_unit_peca2);
	// Seta casas decimais para 2
	cout << fixed << setprecision(2);
    // Mostra o total a pagar
	cout << "VALOR A PAGAR: R$ " << total << endl;
    return 0;
}