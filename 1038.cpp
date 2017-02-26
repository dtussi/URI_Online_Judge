#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
	// Declara as var item e quant
	double item, quant;
	// Leitura das var
	cin >> item, cin >> quant;
	// Seta as casas decimais para (2)
	cout << fixed << setprecision(2);
	// Verifica cod do item e aplica o preco
	if ((item==1)) {
		cout << "Total: R$ " << quant*4 << endl;
	}
	if ((item==2)) {
		cout << "Total: R$ " << quant*4.5 << endl;
	}
	if ((item==3)) {
		cout << "Total: R$ " << quant*5 << endl;
	}
	if ((item==4)) {
		cout << "Total: R$ " << quant*2 << endl;
	}
	if ((item==5)) {
		cout << "Total: R$ " << quant*1.5 << endl;
	}	
    return 0;
}