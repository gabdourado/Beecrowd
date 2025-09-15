#include <iostream>
#include <iomanip>

using namespace std;

int main (void) {
    double A, B, MEDIA;
    float P1 (3.5);
    float P2 (7.5);
    
    cin >> A >> B;
    
    MEDIA = (A * P1 + B * P2) / (P1 + P2);
    
    cout << fixed << setprecision(5);
    cout << "MEDIA = " << MEDIA << endl;
    
    return 0;
}