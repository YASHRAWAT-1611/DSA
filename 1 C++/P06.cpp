// Unary Operators

#include <iostream>
using namespace std;

int main()
{
    cout << "Pre-Increment" << endl; // update -> kaam
    int i = 10;
    int a = ++i;
    cout << "a = " << a << " i = " << i << endl;
    cout << "Post-Increment" << endl; // kaam -> update
    int j = 10;
    int b = j++;
    cout << "b = " << b << " j = " << j << endl;

    cout << "Pre-Decrement" << endl; // update -> kaam
    int k = 0;
    int c = --k;
    cout << "c = " << c << " k = " << k << endl;
    cout << "Post-Decrement" <<endl; //kaam -> update
    int l = 0;
    int d = --l;
    cout << "d = " << d << " l = " << l << endl;

    return 0;
}