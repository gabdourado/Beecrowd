#include <iostream>
#include <iomanip>

#define PI 3.14159

using namespace std;

int main (void) {
    double A, B, C, area;
    
    cin >> A >> B >> C;
    
    cout << fixed << setprecision(3);

    area = (A*C)/2.0;
    cout << "TRIANGULO: " << area << endl;
    area = (PI*C*C);
    cout << "CIRCULO: " << area << endl;
    area = (A + B)*C/2.0;
    cout << "TRAPEZIO: " << area << endl;
    area = B*B;
    cout << "QUADRADO: " << area << endl;
    area = A * B;
    cout << "RETANGULO: " << area << endl;      
    
    return 0;
}