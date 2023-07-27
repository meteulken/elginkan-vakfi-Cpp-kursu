#include <iostream>

using namespace std;

int topla(int x, int y)
{
    return x + y;
}
int cikar(int x, int y)
{
    return x - y;
}
int carp(int x, int y)
{
    return x * y;
}
float bol(float x, float y)
{
    return x / y;
}


int main()
{
    cout << "Birinci sayiyi giriniz : ";
    int x;
    cin >> x;
    int y;
    cout << "Ikinci sayiyi giriniz : ";
    cin >> y;
    char secim;
    cout << "Islem Seciminiz : ";
    cin >> secim;

    if(secim == '+')
        cout << "Toplam : " << topla(x, y) << endl;
    else if(secim == '-')
        cout << "Cikarma : " << cikar(x, y) << endl;
    else if(secim == '*')
        cout << "Carpma : " << carp(x, y) << endl;
    else if(secim == '/')
        cout << "Bolme : " << bol(x, y) << endl;
    else
        cout << "Hatali secim" << endl;
}