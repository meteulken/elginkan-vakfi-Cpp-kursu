#include <iostream>

using namespace std;

int main()
{
    int sayi = 0;
    int sayac = 0;

    for (size_t i = 0; i <= 1000; i++)
    {
        if(i % 7 != 0 && i % 5 == 0)
        {
            sayi += i;
            cout << i  << " ";
            sayac++;
        }
    }
    cout << endl;
    cout << "Toplam: " << sayi << endl;
    cout << "Sayac: " << sayac << endl;
    
}