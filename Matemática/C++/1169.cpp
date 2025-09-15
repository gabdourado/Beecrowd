#include <iostream>

using namespace std;

int main (void) {
    
    int N, X;
    unsigned long long int trigo, pot;
    
    cin >> N;

    for (int i = 1; i <= N; i++) {
        
        cin >> X;

        pot = 1;
        for (int j = 1; j <= X; j++) pot *= 2;
        
        trigo = pot - 1;
        trigo /= 12000;
    
        cout << trigo << " kg" << endl;
    }
    return 0;
}