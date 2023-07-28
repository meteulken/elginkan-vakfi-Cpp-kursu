#include <iostream>

using namespace std;

double bakiye = 0;
double limit = 3000;

void paracek(double para);
void parayatir(double para);
double bakiyeGoster();
void anaMenu();
void limitArttir(double limit);


void paracek(double para)
{
    if(para > bakiye)
    {
        cout << "Bakiye yetersiz" << endl;
        cout << "Cekebileceginiz Bakiye : " << bakiye << endl;
        anaMenu();
    }  
    else if(bakiye > limit)
    {
        cout << "Gunluk Limitin Uzerinde Para Cekemezsiniz :" << limit << endl;
    }
    else
    {
        bakiye -= para;
        cout << "Para cekildi" << endl;
        anaMenu();
    }

}

void limitArttir(double limit)
{
    if(limit > 3000)
    {
        cout << "Limit 3000 TL'den fazla olamaz" << endl;
        anaMenu();
    }
    else
    {
        limit = limit;
        cout << "Limit arttirildi" << endl;
        anaMenu();
    }
}

void parayatir(double para)
{
    bakiye += para;
    cout << "Para yatirildi" << endl;
    anaMenu();
}

double bakiyeGoster()
{
    return bakiye;
}

void anaMenu()
{
    short secim = 0;
    double a;
    cout << "*****Bankacilik Islemleri Menusu *****" << endl << endl;
    cout <<  "Para Yatir (1) " << endl;
    cout <<  "Para Cek (2) " << endl;
    cout << "Bakiye Goster (3) " << endl;
    cout << "Limit Arttir (4) " << endl;
    cout << "Seciminiz : ";
    cin >> secim;

    switch (secim)
    {
    case 1:
        cout << "Yatirilacak parayi giriniz: ";
        cin >> a;
        parayatir(a);
        break;
    case 2:
        cout << "Tutar giriniz: ";
        cin >> a;
        paracek(a);
        break;

    case 3:
        cout << "Mevcut Bakiye :" << bakiyeGoster() << endl;
        break;
    case 4:
        cout << "Limiti giriniz: ";
        cin >> a;
        limitArttir(a);
        break;
    case 5:
        cout << "Cikis yapiliyor" << endl;
        return;
    default:
        cout << "Hatali secim" << endl;
        anaMenu();
        break;
    }

}

int main()
{
    anaMenu();
    return 0;
}

