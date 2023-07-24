#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    int giris ,sayac;
    cout << "Bitis degeriniz giriniz : ";
    cin >> giris;

    for (int i = 2; i < giris; i++)
    {
        sayac = 0;
        for (int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                sayac++;
                break;
            }
        }
        if(sayac == 0)
            cout << "Asaldir : " << i << endl;
    }    
}