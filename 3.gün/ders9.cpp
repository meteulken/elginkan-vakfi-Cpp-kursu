#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    // double x;
    // cout << "x : ";
    // cin >> x;

    // cout << floor(x) << endl;
    // cout << ceil(x) << endl;

    int sayi = 0;
    cout << "bir sayi giriniz : ";
    cin >> sayi;
    
    fmod(sayi,1);

    if(sayi % 2 == 0)
        cout << "sayi cift" << endl;
    else
        cout << "sayi tek" << endl;
    
}