#include <iostream>
#include <iomanip>

#define PI 3.14159

using namespace std;

int main (void) {
    double area, raio;
    
    cin >> raio;
    
    area = raio*raio*PI;
    
    cout << fixed << setprecision(4);
    cout << "A=" << area << endl;
    
    return 0;
}