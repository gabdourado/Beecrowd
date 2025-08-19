#include <iostream>

using namespace std;

int main(void) {
 
    int N, dias;
    float C;
    
    cin >> N;
    
    for (int i = 1; i <= N; i++) {
        
        cin >> C;
        
        dias = 0;
        while (C > 1) {
        C /= 2.0;
        dias++;
    }
        cout << dias<< " dias" << endl; 
    }

    return 0;
}