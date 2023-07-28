#include <iostream>

using namespace std;

double bakiye = 0;

void paracek(double para);
void parayatir(double para);
double bakiyeGoster();
void anaMenu();


void paracek(double para)
{
    cout << "Para cekildi" << endl;
    cout << "Cekilen para: " << para << endl;   
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
    case 3:
        cout << "Mevcut Bakiye :" << bakiyeGoster() << endl;
        break;
    default:
        break;
    }

}

int main()
{
    anaMenu();
    return 0;
}

