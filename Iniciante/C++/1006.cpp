#include <iostream>
#include <iomanip>

using namespace std;

int main (void) {
    double A, B, C, MEDIA;
    float PA (2.0), PB (3.0), PC (5.0);
    
    cin >> A >> B >> C;
    
    MEDIA = (A*PA + B*PB + C*PC) / (PA + PB + PC);
    
    cout << fixed << setprecision(1);
    cout << "MEDIA = " << MEDIA << endl;
    
    return 0;
}