#include <iostream>

using namespace std;

int main()
{
    // pointers
    
    int var1 = 3;
    int var2 = 24;
    int *p;
    int a = 5;
    p = &a;
    cout << "a: " << a << endl;
    cout << "p: " << p << endl;
    cout << "*p: " << *p << endl;
    cout << "&a: " << &a << endl;
    cout << "&p: " << &p << endl;
    cout << "p + 1: " << p + 1 << endl;

}