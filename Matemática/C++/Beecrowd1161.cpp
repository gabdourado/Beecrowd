#include <iostream>
#include <cstdio>

using namespace std;

long long int fatorial(int N) {
    long long int fat (1);
    for (int i = 1; i <= N; i++)
        fat *= i;
    return fat;
}

int main (void) {
    int M, N;
    long long int fatM, fatN, soma_fat;
    
    while (cin >> M >> N) {
    
        fatM = fatorial(M);
        
        fatN = fatM;
        
        if (M < N) {
            for (int i = (M+1); i <= N; i++)
                fatN *= i;
        } else if (M > N){
            for (int i = M; i > N; i--)
                fatN /= i;
        }  
        soma_fat = fatM + fatN;

        cout << soma_fat << endl;
    }
    
    return 0;
}