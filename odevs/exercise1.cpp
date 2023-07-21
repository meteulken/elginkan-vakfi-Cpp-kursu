#include <iostream>

using namespace std;

int main()
{
    //! Klavyeden girilen vize notuna göre finalden en az kaç almanız gerektiğini söyleyen program yazınız.
    // Vize notunun %40'ı final notunun %60'ı alınarak ortalama hesaplanacaktır.
    // Geçme notu: 65


    float vize = 0,final = 0, vize_ort = 0 ,final_ort = 0, ortalama = 0;
    int i = 0;
    cout << "----------------------------" << endl;
    cout << "Vize notunuzu giriniz: ";
    cin >> vize;
    vize_ort = (vize * 0.4);
    //cout << "Vize ortalamasi: " << vize_ort << endl;

    while(final < 65)
    {
        final_ort = (i * 0.6);
        i++;
        final = (final_ort + vize_ort);
    }
    cout << "Final notunuz en dusuk " << i << " olmali." << endl;
    cout << "----------------------------" << endl;

}