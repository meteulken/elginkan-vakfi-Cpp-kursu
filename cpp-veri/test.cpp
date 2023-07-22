#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    string dosya_cek;
    string il;
    string satir;
    int satir_sayisi = 1;
    int satir_no = 1;

    cout << "Dosya adini giriniz: ";
    cin >> dosya_cek;
    ifstream dosya(dosya_cek);

    if (!dosya) {
        cerr << "Dosya acilamadi." << endl;
        return 1;
    }
    cout << "-----------------------------------" << endl;
    cout << "0 girerek programi sonlandirabilirsiniz." << endl;
    while(true)
    {
        cout << "Plaka kodunuz giriniz ? (1-81): ";
        cin >> satir_no;

        if (satir_no == 0) 
        {   
            cout << "Program sonlandirildi." << endl;
            cout << "-----------------------------------" << endl;
            break;
        }
        if (satir_no >= 1 && satir_no <= 81) 
        {
            while (satir_sayisi <= satir_no) 
            {
                getline(dosya, il);
                satir_sayisi++;
            }
            cout << "(" << satir_no << ". Plaka): " << il << endl;
            cout << "-----------------------------------" << endl;
        }
        else 
        {
            cout << "Gecersiz satir numarasi." << endl;
            break;
        }
        dosya.clear();
        dosya.seekg(0, ios::beg); // Dosyanın başına geri dönmek için seekg kullanaılır.
        satir_sayisi = 1;
    }

    dosya.close();

    return 0;
}
