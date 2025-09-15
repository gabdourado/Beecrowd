#include <iostream>

using namespace std;

int main (void) {
    
    long int SH, SO, dif;
    
    while(cin >> SH >> SO) {
        if (SH > SO) 
            dif = SH - SO;
        else 
            dif = SO - SH;
        cout << dif << endl;   
    }
    return 0;
}