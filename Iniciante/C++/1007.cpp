#include <iostream>

using namespace std;

int main (void) {
    int A, B, C, D, DIF;
    
    cin >> A >> B >> C >> D;
    
    DIF = (A*B - C*D);
    
    cout << "DIFERENCA = " << DIF << endl;
    
    return 0;
}