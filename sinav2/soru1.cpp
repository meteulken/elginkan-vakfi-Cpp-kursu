#include <iostream>

using namespace std;

int main()
{
    int giris = 0;
    int toplam = 0;
    float sonuc = 0;
    cout << "Kac adet sayi gireceksiniz: ";
    cin >> giris;

    for (size_t i = 0; i < giris; i++)
    {
        int sayi = 0;
        cout << "Sayi giriniz: ";
        cin >> sayi;
        toplam += sayi;
    }
    sonuc = toplam / giris;
    cout << "Ortalamasi : " << sonuc << endl;   
}