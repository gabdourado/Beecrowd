#include <iostream>
#include <iomanip>

using namespace std;

int main (void) {
    
    int time, velocity;
    float dist, value;

    cin >> time >> velocity;

    dist = velocity * time;

    value = dist / 12.0;

    cout << fixed << setprecision(3);
    cout << value << endl;

    return 0;
}