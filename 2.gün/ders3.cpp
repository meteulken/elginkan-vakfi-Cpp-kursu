#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Turkish"); 
    int sayi = 9;
    double sayi2;
    float a,b,c;
    a = sayi / 4;
    b = sayi / 4.2;
    c = (double)b/4;
    sayi2 = (float)sayi/4;

    cout << "a degeri = " << a << endl;
    cout << "b degeri = " << b << endl;
    cout << "c degeri = " << c << endl;
    cout << "c değeri = " << sayi2 << endl;
 
    return (0);
}