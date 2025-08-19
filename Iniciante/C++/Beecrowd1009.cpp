#include <iostream>
#include <iomanip>


using namespace std;

int main (void) {
    string name;
    double salario, vendas, total;
    float comissao (0.15);
    
    cin >> name;
    cin >> salario >> vendas;
    
    total = salario + comissao*vendas;
    
    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << total << endl;
    
    return 0;
}