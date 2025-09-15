/* TLE (Time Limit Exceeded) */

#include <iostream>

using namespace std;

int main (void) {
    
    long long int A, B, num;
    long long int cont_algarismos[10];
    
    while (true) {

        cin >> A >> B;

        if (A == 0 && B == 0) {
            cout << endl;
            break;
        }

        for (int i = 0; i < 10; i++) cont_algarismos[i] = 0;

        for (long long int i = A; i <= B; i++) {
            
            num = i;

            while (num > 0) {
                cont_algarismos[num % 10]++;
                num /= 10;
            }
        }

        for (int i = 0; i < 10; i++) {
            cout << cont_algarismos[i];
            if (i < 9) cout << " ";
        }
        cout << endl;
    }

    return 0;
}