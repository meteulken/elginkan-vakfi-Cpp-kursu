#include <iostream>

using namespace std;

int main()
{
    int sayi1 = 0;
    int sayi2 = 0;
    cout << "Birinci sayiyi giriniz: ";
    cin >> sayi1;
    cout << "Ikinci sayiyi giriniz: ";
    cin >> sayi2;

    cout << "***************************" << endl;
    cout << " iki sayinin toplami = " << sayi1 + sayi2 << endl;
    cout << " iki sayinin farki   = " << sayi1 - sayi2 << endl;
    cout << " iki sayinin carpimi = " << sayi1 * sayi2 << endl;
    cout << " iki sayinin bolumu  = " << sayi1 / sayi2 << endl;
    cout << "***************************" << endl;
}