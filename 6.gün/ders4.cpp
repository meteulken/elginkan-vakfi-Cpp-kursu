#include <iostream>

using namespace std;

int a[5] = {2, 7, 0, 3, 9};

int main()
{
    int sayilar[5];
    int sayi = 0;
    int hesap = 0;
    int k = 0;
    // for(int i = 0; i < 5; i++)
    // {
    //     cout << "a[" << i << "]= " << a[i] << endl;
    // }

    for (size_t i = 0; i < 5; i++)
    {
        cout << " deger[" << i << "]= ";
        cin >> sayilar[k]; 
        hesap += sayilar[k];
    }
    cout << "+" << endl;
    cout << "------------" << endl;
    cout << "Toplam: " << hesap << endl;   
}