#include <iostream>

using namespace std;

int main()
{
     int sayilar[5];
    int sayi = 0;
    int hesap = 0;
    int k = 0;
    int temp = 0;
    int i = 0;
    int sira = 0;

    int diziboyutu = sizeof(sayilar) / sizeof(sayilar[0]);

    for (i = 0; i < diziboyutu; i++)
    {
        cout << " deger[" << i << "]= ";
        cin >> sayilar[i]; 
       // hesap += sayilar[k];
    }
    temp = sayilar[0];
    for (size_t i = 0; i < diziboyutu; i++)
    {
        if(sayilar[k] > temp)
        {
            temp = sayilar[k];
            sira = k + 1;
        }
        k++;
    }    
    

    cout << "en buyuk sayi :" << temp << " sirasi : " << sira << endl;
    // cout << "+" << endl;
    // cout << "------------" << endl;
    // cout << "Toplam: " << hesap << endl;

}