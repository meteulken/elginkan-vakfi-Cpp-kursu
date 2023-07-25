#include <iostream>

using namespace std;

int main()
{
    string id = "admin";
    int pw = 1234;
    int sayac = 3;

    do
    {
        cout << "Kullanici adi: "; cin >> id;
        cout << "Sifre: "; cin >> pw;

        if (id == "admin" && pw == 1234)
        {
            cout << "Hosgeldiniz." << endl;
            break;
        }
        else
        {
            cout << "Kullanici adi veya sifre hatali." << endl;
            sayac--; 
            if (sayac != 0)
            {
                cout << sayac << " hakkiniz kaldi." << endl;
            }
            else
                cout << "Hesabiniz bloke oldu." << endl;
        }
    } while (sayac > 0);
}