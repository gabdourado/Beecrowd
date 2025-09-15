#include <iostream>
#include <iomanip>

using namespace std;

int main (void) {

    float X, Y, razao;

    cin >> X >> Y;

    razao = X / Y;

    cout << fixed << setprecision(3);
    cout << razao << " km/l" << endl;

    return 0;
}