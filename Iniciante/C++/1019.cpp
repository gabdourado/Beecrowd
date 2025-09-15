#include <iostream>

using namespace std;


int main (void) {
    int time, hours, min, seg;

    cin >> time;

    hours = time / 3600;
    time %= 3600;

    min = time / 60;
    time %= 60;

    seg = time;

    cout << hours << ":" << min << ":" << seg << endl;

    return 0;
}