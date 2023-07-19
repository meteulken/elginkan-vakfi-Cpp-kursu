#include <iostream>

using namespace std;
int sayi = 15;
int deger = 30;

int deneme()
{
     
     return deger;
}


int main()
{
    deneme();
    cout << sayi << endl;  
    cout << deger << endl; 
    cout << deneme() << endl;
    deger++;
     cout << deneme() << endl;

    return (0);
}