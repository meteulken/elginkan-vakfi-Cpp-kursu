#include <iostream>

using namespace std;

int main()
{
    // do while örneği
    // while döngüsünden farkı, döngü bloğu içerisindeki kodlar en az bir kere çalışır.
    // while döngüsünde ise koşul sağlanmazsa hiç çalışmaz.
    
    int sayi = 0;
    int sayi2 = 1;
    cout << "Bir sayi giriniz : ";
    cin >> sayi;

    do
    {
        cout << sayi2 << " ";
        sayi2++;

    } while (sayi2 <= sayi);
    
}