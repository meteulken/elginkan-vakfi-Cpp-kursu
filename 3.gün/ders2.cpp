#include <iostream>
#include <string>

using namespace std;

int main()
{
     setlocale(LC_ALL,"Turkish");
    string ad;
    char soyad[20];
    int numara;

    cout << "Isim Giriniz: ";
    cin >> ad;
    cout << "Soyisim Giriniz : ";
    cin >> soyad;
    cout << "Numaranizi Giriniz : ";
    cin >> numara;

    cout << "**************" << endl;
    cout << "Numara  : " << numara << endl;
    cout << "Isim    : " << ad << endl;
    cout << "Soyisim :" << soyad << endl;
    cout << endl << "----------------------------------------" << endl;

}