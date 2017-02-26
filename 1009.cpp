#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
	// Declara as variavéis NAME, SALARY, SALES, TOTAL
	string NAME;
	double SALARY, SALES, TOTAL;
	// Leiura das var
	cin >> NAME;
	cin >> SALARY;
	cin >> SALES;
	// Cálculo do salário
	TOTAL = SALARY+(SALES*15/100);
	// Mostra o TOTAL do salário do funcionário - Fixo + 15% sobre as vendas
	cout << fixed << setprecision(2);
	cout << "TOTAL = R$ " << TOTAL << endl;
    return 0;
}