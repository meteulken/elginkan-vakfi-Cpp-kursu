#include <iostream>

using namespace std;


int main()
{
    string id;
    string pw;
    string trueID;
    string truePW;
    int sayac = 0;
    int deneme = 0;

    while(sayac < 3)
    {
        cout << "Kullanici Adi: ";
        cin >> id;

        cout << "Sifre: ";
        cin >> pw;

        trueID = id;
        truePW = pw;

        if(id.size() < 3)
        {
            cout << "Kullanici Adi 3 karakterden az olamaz." << endl;
        }
        else if(pw.size() < 6)
        {
            cout << "Sifre 6 karakterden az olamaz." << endl;
        }
        else
        {
            cout << "Kayit basarili." << endl;
            while(deneme < 3)
        {
        cout << "ID: ";
        cin >> id;
        cout << "PW: ";
        cin >> pw;
    
        if(id == trueID && pw == truePW )
        {
            cout << "Giris basarili." << endl;
            break;
        }
        else
        {
            cout << "ID veya PW yanlis." << endl;
        }
        deneme++;
        }
            break;
        }
        sayac++;

        if(sayac == 3)
        {
            cout << "Sifre Bloke Edildi." << endl;
            break;
        }
    }
    

}