#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int sayi1,sayi2,sayi3,toplam,sonuc;
    cout << "Sirayla 3 sayi giriniz : " << endl;
    cin >> sayi1 >> sayi2 >> sayi3;
    toplam = sayi1 + sayi2 + sayi3;
    sonuc = pow(toplam,2);

    cout << "toplam :" << toplam << endl << "karesi : " << sonuc << endl ;
    
    sonuc > 500 ? cout << "gecerli" : cout << "gecersiz";
}