#include <iostream>

using namespace std;

int main (void) {

    long long int value;
    int notes;

    cin >> value;
    
    cout << value << endl;

    /* 100 */
    cout << value / 100 << " nota(s) de R$ 100,00" << endl;
    value %= 100;

    /* 50 */
    cout << value / 50 << " nota(s) de R$ 50,00" << endl;
    value %= 50;

    /* 20 */
    cout << value / 20 << " nota(s) de R$ 20,00" << endl;
    value %= 20;

    /* 10 */
    cout << value / 10 << " nota(s) de R$ 10,00" << endl;
    value %= 10;

    /* 5 */
    cout << value / 5 << " nota(s) de R$ 5,00" << endl;
    value %= 5;

    /* 2 */
    cout << value / 2 << " nota(s) de R$ 2,00" << endl;
    value %= 2;

    /* 1 */
    cout << value << " nota(s) de R$ 1,00" << endl;

    return 0;
}