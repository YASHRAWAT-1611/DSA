//Operators

#include <iostream>
using namespace std;

int main()
{
    //Airthmetic Operators
    cout << "Airthmetic Operators" << endl;
    int a;
    int b;
    cout << "Enter any number: ";
    cin >> a;
    cout << "Enter any number: ";
    cin >> b;

    cout << "The sum of the two numbers is: " << a + b << endl;
    cout << "The difference of the two numbers is: " << a - b << endl;
    cout << "The product of the two numbers is: " << a * b << endl;
    cout << "The qutient of the two numbers in divison is: " << a / b << endl;
    cout << "The remainder of the two numbers in divison is: " << a % b << endl;
    cout << "The squares of the two numbers are: " << a*a << " and " << b*b << endl;

    //Relational Operators
    cout << "Relational Operators" << endl;
    cout << (a < b) << endl;
    cout << (a > b) << endl;
    cout << (a <= b) << endl;
    cout << (a >= b) << endl;
    cout << (a == b) << endl;
    cout << (a != b) << endl;

    //Logical Operators
    cout << "Logical Operators" << endl;
    cout << !(3 < 5) << endl;
    cout << ((3 < 5) || (1 > 5)) << endl;
    cout << ((3 < 5) && (1 < 5)) << endl;

    return 0;
}