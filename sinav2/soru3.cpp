#include <iostream>

using namespace std;
#define PI 3.1415

int main()
{
    int secim = 0;
    cout << "1. Daire" << endl;
    cout << "2. Kare" << endl;
    cout << "3. Dikdortgen" << endl;
    cout << "4. Ucgen" << endl;
    cout << "Secim Yapiniz : ";
    cin >> secim;

    switch (secim)
    {
    case 1:
        cout << "Dairenin yaricapini giriniz : ";
        int yaricap;
        cin >> yaricap;
        cout << "Dairenin alani : " << PI * yaricap * yaricap << endl;
        break;
    case 2:
        cout << "Karenin bir kenarini giriniz : ";
        int kenar;
        cin >> kenar;
        cout << "Karenin alani : " << kenar * kenar << endl;
        break;
    case 3:
        cout << "Dikdortgenin bir kenarini giriniz : ";
        int kenar1;
        cin >> kenar1;
        cout << "Dikdortgenin diger kenarini giriniz : ";
        int kenar2;
        cin >> kenar2;
        cout << "Dikdortgenin alani : " << kenar1 * kenar2 << endl;
        break;
    case 4:
        cout << "Ucgenin tabanini giriniz : ";
        int taban;
        cin >> taban;
        cout << "Ucgenin yuksekligini giriniz : ";
        int yukseklik;
        cin >> yukseklik;
        cout << "Ucgenin alani : " << taban * yukseklik / 2 << endl;
        break;
    default:
        cout << "Hatali secim yaptiniz." << endl;
        break;
    }
}