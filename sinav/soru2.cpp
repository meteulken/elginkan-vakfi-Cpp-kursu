#include <iostream>
#include <ctime>

using namespace std;

int main()
{

    srand(time(0));
    int sayi = 0;
    int sayi2 = 0;
    int sayi3 = 0;
    int sayilar[10];
    int tekSayilar[10];
    int ciftSayilar[10];
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;

    for (i = 0; i < 10; i++)
    {
        sayilar[i] = rand() % 100 + 1 ;
    }

    for (j = 0; j < 10; j++)
    {
        if(sayilar[j] % 2 == 0)
        {
            ciftSayilar[k] = sayilar[j];
            k++;
        }
        else if(sayilar[j] % 2 == 1)
        {
            tekSayilar[l] = sayilar[j];
            l++;
        }
    }

    cout << "Tek sayilar: " << endl;
    for (size_t i = 0; i < l; i++)
    {
        cout << tekSayilar[i] << " ";
    }

    cout << "\nCift sayilar: " << endl;
    for (size_t i = 0; i < k; i++)
    {
        cout << ciftSayilar[i] << " ";
    }
    
}