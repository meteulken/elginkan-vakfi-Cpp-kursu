#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int gizli, tahmin, yanit;
    
    srand(time(0));
    int sayac = 1;
    gizli = rand() % 100;
    cout << "Rasgele uretilen sayiyi tahmin etmeye calisiniz. (0-100 arasi)" << endl;
    cout << "Bir sayi giriniz :";
    a:
        cin >> yanit;
        if(yanit == gizli)
        {
            cout << "Tebrikler! Dogru tahmin ettiniz.";
        }
        else
        {
            if(yanit < gizli)
            {
                cout << "Daha buyuk bir sayi giriniz : ";
                sayac++;
            }
            else if (yanit > gizli)
            {
                cout << "Daha kucuk bir sayi giriniz : ";
                sayac++;
            }
        }
        if(sayac % 5 == 0)
        {
            cout << "Sayiyi ogrenmek ister misiniz? (1:evet, 2:hayir) :";
            if(yanit == 1)
                cout << "Gizli sayi : " << gizli;
            else if (yanit == 2)
                goto a;
        }
        goto a;
}