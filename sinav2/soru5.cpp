#include <iostream>

using namespace std;


string sayiDonustur(int sayi)
{
    switch (sayi)
    {
    case 1:
        return "bir";
        break;
    case 2:
        return "iki";
        break;
    case 3:
        return "uc";
        break;
    case 4:
        return "dort";
        break;
    case 5:
        return "bes";
        break;
    case 6:
        return "alti";
        break;
    case 7:
        return "yedi";
        break;
    case 8: 
        return "sekiz";
        break;
    case 9:
        return "dokuz";
        break;
}


int main()
{
    int not1 = 0, not2 = 0, not3 = 0;
    int input = 0;
    int ort = 0;

    do
    {   
        cout << "1. notu giriniz: ";
        cin >> not;
        cout << "2. notu giriniz: ";
        cin >> not2;
        cout << "3. notu giriniz: ";
        cin >> not3;
        ort = (not + not2 + not3) / 3;



    } while (not < 0 || not > 100 || not2 < 0 || not2 > 100 || not3 < 0 || not3 > 100);
    

}