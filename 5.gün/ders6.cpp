#include <iostream>

using namespace std;

int main()
{
    int sayac = 1, toplam = 0, sayi;

    while(sayac <= 5)
    {
        cout << sayac << ". sayiyi girin : ";
        cin >> sayi;
        toplam += sayi;
        sayac++;
    }

    cout << "Girilen sayilarin toplami :" << toplam << endl;
}
