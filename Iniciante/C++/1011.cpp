#include <iostream>
#include <iomanip>

#define PI 3.14159

using namespace std;

int main (void) {
    double raio, volume;
    
    cin >> raio;
    volume = (4.0*PI*raio*raio*raio)/3.0;
    
    cout << fixed << setprecision(3);
    cout << "VOLUME = " << volume << endl;
    
    return 0;
}