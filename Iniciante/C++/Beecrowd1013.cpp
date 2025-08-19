#include <iostream>

using namespace std;

int main (void) {
    int A, B, C, maior;
    
    cin >> A >> B >> C;
    
    maior = A > B ? A : B;
    maior = maior > C ? maior : C;
    
    cout << maior << " eh o maior" << endl;
    
    return 0;
}