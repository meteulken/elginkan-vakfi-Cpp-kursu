#include <iostream>

using namespace std;

int main()
{
    int sayi;

    cout << "1 ile 999 arasinda sayi giriniz: ";
    cin >> sayi;
    string yazi;


    if(sayi >= 1 && sayi <= 999)
    {
        switch (sayi/100)
        {
        case 0:
            yazi = "";
            break;
        case 1:
            yazi = "yuz";
            break;
        case 2:
            yazi = "ikiyuz";
            break;
        case 3:
            yazi = "ucyuz";
            break;
        case 4:
            yazi = "dortyuz";
            break;
        case 5:
            yazi = "besyuz";
            break;
        case 6:
            yazi = "altiyuz";
            break;
        case 7:
            yazi = "yediyuz";
            break;
        case 8:
            yazi = "sekizyuz";
            break;
        case 9: 
            yazi = "dokuzyuz";
            break;
        default:
            break;
        }

        switch (sayi % 100 / 10)
        {
        case 1:
            yazi += "on"; 
            break;
        case 2:
            yazi += "yirmi";
            break;
        case 3:
            yazi += "otuz";
            break;
        case 4:
            yazi += "kirk";
            break;
        case 5: 
            yazi += "elli";
            break;
        case 6:
            yazi += "altmis";
            break;
        case 7: 
            yazi += "yetmis";
            break;
        case 8: 
            yazi += "seksen";
            break;
        case 9: 
            yazi += "doksan";
            break;        
        default:
            break;
        }
        switch (sayi % 10)
        {
        {
        case 1:
            yazi += "bir";
            break;
        case 2:
            yazi += "iki";
            break;
        case 3:
            yazi += "uc";
            break;
        case 4:
            yazi += "dort";
            break;
        case 5:
            yazi += "bes";
            break;
        case 6:
            yazi += "alti";
            break;
            
        default:
            break;
        }
    }
}