#include <iostream>

using namespace std;

int main()
{
// ! Girilen sayının faktoriyelini hesaplayan programı yazınız.
// * örn: Hangi sayinin faktoryeli hesaplanacak? 5
// * örn: Hesaplanan Faktoryel= 120

    int sayi = 1;
    int i = 1;
    int faktoryel = 1;
    cout << "Hangi sayinin faktoryeli hesaplanacak? ";
    cin >> sayi;
    while(i <= sayi)
    {
        faktoryel *= i;
        i++;
    }
    cout << "Hesaplanan Faktoryel= " << faktoryel << endl;

}