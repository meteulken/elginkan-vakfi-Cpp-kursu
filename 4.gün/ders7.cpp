#include <iostream>

using namespace std;

int main()
{
    double s1,s2;
    int secim = 0;
    cout << "Dort Islem Makinesi" << endl;
    cout << "-------------------" << endl;
    cout << "1. Sayiyi giriniz :";
    cin >> s1;
    cout << "2. Sayiyi giriniz :";
    cin >> s2;
    cout << "-------------------" << endl;
    cout << "Islem seciniz : (1 = Toplama, 2 = Cikarma, 3 = Carpma, 4 = Bolme) : ";
    cin >> secim;
    switch(secim)
    {
        case 1:
            cout << "Toplam Sonucu :" << s1 + s2;
            break;
        case 2:
            cout << "Fark Sonucu :" << s1 - s2;
            break;
        case 3:
            cout << "Carpim Sonucu :" << s1 * s2;
            break;
        case 4:
            cout << "Bolum Sonucu :" << s1 / s2;
            break;
        default:
            cout << "Hatali giris";
            break;

    }
}