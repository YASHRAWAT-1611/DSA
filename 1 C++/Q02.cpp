// Find the sum of two numbers which is input by user

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    int sum = a + b;
    cout << "The sum of " << a << " and " << b << " is: " << sum << endl;
    return 0;
}