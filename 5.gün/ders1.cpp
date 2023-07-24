#include <iostream>

using namespace std;

int main()
{
    int i, bitis, basla, temp;
    int toplam = 0;
    cout << "Baslangic degerini giriniz : ";
    cin >> basla;
    cout << "Bitis degerini giriniz : ";
    cin >> bitis;
    
    if(basla < input)
    {
        for (i = basla; i <= bitis; i++)
            toplam += i;
    }
    else
    {
        temp = bitis;
        bitis = basla;
        basla = temp;
        for (i = basla; i <= bitis; i++)
                toplam += i;      
    }
    cout << "Toplam : " << toplam;
}