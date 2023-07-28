#include <iostream>

using namespace std;

struct araba
{
    char marka[10];
    char model[10];
    char yakit_turu[10];
    int yil;
    string renk;
    int beygir_gucu;
    double motor_hacmi;
    int fiyat;
};

void bilgileri_yaz(araba *x)
{
    cout << "------------------------------------" << endl;
    cout << "Araba bilgileri: " << endl;
    cout << "Marka: " << x->marka << endl;
    cout << "Model: " << x->model << endl;
    cout << "Yil: " << x->yil << endl;
    cout << "Motor hacmi: " << x->motor_hacmi << endl;
    cout << "Yakit Turu : " << x->yakit_turu << endl;
    cout << "Renk: " << x->renk << endl;
    cout << "------------------------------------" << endl;
}

void bilgileri_al(araba *x)
{
    cout << "Bilgileri giriniz: " << endl;
    cout << "Marka: ";
    cin >> x->marka;
    cout << "Model: ";
    cin >> x->model;
    cout << "Yil: ";
    cin >> x->yil;
    cout << "Motor hacmi: ";
    cin >> x->motor_hacmi;
    cout << "Yakit Turu : ";
    cin >> x->yakit_turu;
    cout << "Renk: ";
    cin >> x->renk;

}


int main()
{
    araba araba1;
    bilgileri_al(&araba1);
    bilgileri_yaz(&araba1);
}