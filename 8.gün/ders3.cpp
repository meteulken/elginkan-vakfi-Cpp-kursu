#include <iostream>

using namespace std;

int hesapla(int x,int a)
{
    int threeExpFour = 1;
    for (int i = 0; i < a; i++)
    {
        threeExpFour *= x;
    }
    return threeExpFour;
}

int main()
{
    int x = 0;
    int a = 0;
    cout << "Bir sayi giriniz: ";
    cin >> x;
    cout << "Uslu sayi: ";
    cin >> a;

    int sonuc = hesapla(x,a);
    cout << "sonuc  = " << sonuc << endl;
}