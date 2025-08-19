#include <iostream>

using namespace std;

/* Algoritmo de Euclides */
int calc_mdc(int p, int q) {
    int r;
    while((p % q) > 0) {
        r = p % q;
        p = q;
        q = r;
    }
    return q;
}


int main (void) {
    
    int F1, F2, N, mdc;
    
    cin >> N;
    
    for (int i = 1; i <= N; i++) {
        cin >> F1 >> F2;
    
        mdc = calc_mdc(F2, F1);
            
        cout << mdc << endl;
    }
    
    return 0;
}