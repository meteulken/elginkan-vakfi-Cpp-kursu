#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i = 0;
    int faktor = 1;
    int sayi;

    cout << "Faktoriyeli alinacak sayiyi giriniz: "; cin >> sayi;

    while(i < sayi)
    {
        i++;
        faktor *= i;
        
    }


}