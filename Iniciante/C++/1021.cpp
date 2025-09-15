#include <iostream>

using namespace std;

int main (void) {

    long double value, decimal;
    int inter;

    cin >> value;

    inter = (int) value;
    decimal = value - inter;
    decimal *= 100;

    cout << "NOTAS:" << endl;
    cout << inter / 100 << " nota(s) de R$ 100.00" << endl;
    inter %= 100;
    cout << inter / 50 << " nota(s) de R$ 50.00" << endl;
    inter %= 50;
    cout << inter / 20 << " nota(s) de R$ 20.00" << endl;
    inter %= 20;
    cout << inter / 10 << " nota(s) de R$ 10.00" << endl;
    inter %= 10;
    cout << inter / 5 << " nota(s) de R$ 5.00" << endl;
    inter %= 5;
    cout << inter / 2 << " nota(s) de R$ 2.00" << endl;
    inter %= 2;

    cout << "MOEDAS:" << endl;
    cout << inter << " moeda(s) de R$ 1.00" << endl;
    inter = (int) decimal;
    cout << inter / 50 << " moeda(s) de R$ 0.50" << endl;
    inter %= 50;
    cout << inter / 25 << " moeda(s) de R$ 0.25" << endl;
    inter %= 25;
    cout << inter / 10 << " moeda(s) de R$ 0.10" << endl;
    inter %= 10;
    cout << inter / 5 << " moeda(s) de R$ 0.05" << endl;
    inter %= 5;
    cout << inter << " moeda(s) de R$ 0.01" << endl;

    return 0;
}