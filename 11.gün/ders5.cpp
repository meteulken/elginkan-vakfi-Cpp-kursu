#include <iostream>
#include "ders5.hpp"

using namespace std;

int main()
{
    int n, sonuc;
    cout << "Bir sayi giriniz : ";
    cin >> n;
    sonuc = kare(n);
    cout << "Sayinin karesi : " << sonuc << endl;
}