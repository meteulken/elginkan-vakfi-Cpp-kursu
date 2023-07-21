#include <iostream>

using namespace std;

int main()
{
    int is = 0,toplam = 0,hesapla = 0,prim = 0;
    string ad,soyad;

    cout << "****** Ucret Hesabi ******" << endl;

    cout << "Satis elemanin adiniz giriniz: ";
    cin >> ad;
    cout << "Satis elemanin soyadiniz giriniz: ";
    cin >> soyad;

    cout << "Calistigi toplam saati giriniz: ";
    cin >> is;

    cout << "Sattigi urunler toplamini giriniz: ";
    cin >> toplam;

    cout << "****** Odenecek Ucret *******" << endl;
    cout << "Satis Elenani: " << ad << soyad << endl;

    cout << "Maas Bordrousu : " << endl;
    cout << "-----------------" << endl;

    hesapla = is * 50;

    if(toplam > 5000)
    {
        prim += 1000;
    }
    else if(toplam > 2500)
    {
        prim += 500;
    }
   
    cout << "Ucret = " << hesapla << " ve Alacagi Prim = " << prim << endl;
    hesapla += prim;
    cout << "Toplam = " << hesapla << "TL odenecektir." << endl;


}