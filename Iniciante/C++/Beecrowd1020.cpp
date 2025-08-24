#include <iostream>

using namespace std;

int main (void) {
    
    int age, years, months, days;

    cin >> age;

    years = age / 365;
    age %= 365;

    months = age / 30;
    age %= 30;

    days = age;

    cout << years << " ano(s)" << endl;
    cout << months << " mes(es)" << endl;
    cout << days << " dia(s)" << endl;

    return 0;
}