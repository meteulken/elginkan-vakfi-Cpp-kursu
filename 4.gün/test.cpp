#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    string dosya_cek;
    cout << "Dosya adini giriniz: ";
    cin >> dosya_cek;
    ifstream dosya(dosya_cek);
    string il;

    if (!dosya) {
        cerr << "Dosya acilamadi." << endl;
        return 1;
    }

    int satir_no;
    
    cout << "Plaka kodunuz giriniz ? (1-81): ";
    cin >> satir_no;

    if (satir_no >= 1 && satir_no <= 81) {
        int satir_sayisi = 1;
        while (getline(dosya, il) && satir_sayisi < satir_no) {
            satir_sayisi++;
        }

        cout << "(" << satir_no << ". Plaka): " << il << endl;
    } else {
        cout << "Gecersiz satir numarasi." << endl;
    }

    dosya.close();

    return 0;
}
