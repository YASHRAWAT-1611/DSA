// Type Casting

#include <iostream>
using namespace std;

int main()
{
    //Type Conversion(Inplicit Type Casting) is used to convert small data type to big data type
    char grade = 'A';

    int value = grade;
    cout << value << endl;

    //Type Casting(Explicit Type Casting) is used to convert big data type to small data type
    double price = 100.98;

    int newprice = (int)price;
    cout << newprice << endl;

    return 0;
}