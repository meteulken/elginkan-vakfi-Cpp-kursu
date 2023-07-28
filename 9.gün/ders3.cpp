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
    int motor_hacmi;
    int fiyat;
};

void bilgileri_yaz(araba *x)
{

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
    cin >> x->yakit_gucu;
    cout << "Renk: ";
    cin >> x->renk;

}


int main()
{

}