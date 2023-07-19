#include <iostream>
#include <climits>

using namespace std;

int main()
{
    long long int a = 712893;
    cout << "Range of types int and unsigned int" << endl << endl;
    cout << "Type Minimum Maximum " << endl << "---------------------" << endl;
    cout << "int " << INT_MIN << " " << INT_MAX << endl;
    cout << "unsigned int " << " 0 " << UINT_MAX << endl;
    cout << "sizeof " << sizeof(a) << endl;
    return 0;
}