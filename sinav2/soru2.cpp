#include <iostream>

using namespace std;

void hizKontrol(int arac_no, int hizLimiti)
{
    if(arac_no == 1)
    {
        if(hizLimiti < 92)
        {
            cout << "Hiz ihlali yok" << endl;
        }
        else
        {
            cout << "Hiz ihlali var" << endl;
        }
    }
    else if (arac_no == 2)
    {
       if(hizLimiti < 70)
        {
            cout << "Hiz ihlali yok" << endl;
        }
        else
        {
            cout << "Hiz ihlali var" << endl;
        }
    }
    else if (arac_no == 3)
    {
        if(hizLimiti < 50)
        {
            cout << "Hiz ihlali yok" << endl;
        }
        else
        {
            cout << "Hiz ihlali var" << endl;
        }
    }
}

int main()
{
    int arac_no = 0;
    int hiz = 0;
    int secim = 0;
    cout << "Otomobil <1> " << "Otobus <2> "  << "Kamyonet <3>" << endl;
    cout << "Arac numarasini giriniz: ";
    cin >> secim;
    cout << "Hiz giriniz: ";
    cin >> hiz;
    switch (secim)
    {
        case 1:
            hizKontrol(1, hiz);
            break;
        case 2:
            hizKontrol(2, hiz);
            break;
        case 3:
            hizKontrol(3, hiz);
            break;
        default:
            cout << "Hatali giris yaptiniz" << endl;
            break;
    }
}