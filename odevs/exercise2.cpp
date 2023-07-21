#include <iostream>

using namespace std;

int main()
{
// * iki adet sözlü, 1 adet vize, 1 adet final notu girelecek.
// * Sözlülerin ortalaması alınacak ve ekrana yazılacak.
// * Daha sonra vize notu ile sözlü notunun ortalaması alınacak.
// * Buradan gelen notun %40'ı finalin %60'ı hesaplanarak
// * Oluşan not değeri ekrana yazılacak.


    float sozlu1 = 0, sozlu2 = 0, vize = 0, final = 0, sozlu_ort = 0, vize_ort = 0, final_ort = 0, ortalama = 0;

    cout << "----------------------------" << endl;
    cout << "1. sozlu notunuzu giriniz: ";
    cin >> sozlu1;
    cout << "2. sozlu notunuzu giriniz: ";
    cin >> sozlu2;
    sozlu_ort = ((sozlu1 + sozlu2) / 2);
    cout << "Sozlu notunuz: " << sozlu_ort << endl;

    cout << "Vize notunuzu giriniz: ";
    cin >> vize;
    vize_ort = (vize + sozlu_ort) / 2;
    vize_ort = (vize_ort * 0.4);

    cout << "Final notunuzu giriniz: ";
    cin >> final;
    final_ort = ((final * 0.6) + (vize_ort * 0.4));

    cout << "Ortalamaniz: " << final_ort << endl;
    cout << "----------------------------" << endl;

}