#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
	// Declara as var NUMBER, H, VH, SALARY
	int NUMBER, H;
	double VH, SALARY;
	// Leiura das var
	cin >> NUMBER;
	cin >> H;
	cin >> VH;
	// Cálculo do salário
	SALARY = H*VH;
	// Mostra o número do funcionário
	cout << "NUMBER = " << NUMBER << endl;
	// Mostra o salário do funcionário
	cout << fixed << setprecision(2);
	cout << "SALARY = U$ " << SALARY << endl;
    return 0;
}