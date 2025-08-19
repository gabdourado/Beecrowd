#include <iostream>
#include <iomanip>

using namespace std;

int main (void) {
    int number, hours;
    float value_hour, salary;
    
    cin >> number >> hours >> value_hour;
    
    salary = hours * value_hour;
    
    cout << "NUMBER = " << number << endl;
    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << salary << endl;
    
    return 0;
}