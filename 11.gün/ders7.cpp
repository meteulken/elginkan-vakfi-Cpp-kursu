#include  "VKI.hpp"

int main()
{
    string isim;
    double boy, agirlik;

    cout << "Isminizi giriniz: "; cin >> isim;
    cout << "Boy: "; cin >> boy;
    cout << "Agirlik: "; cin >> agirlik;

    VKI a1(isim,boy,agirlik);

    cout << "Isim: " << a1.getIsim() << endl;
    cout << "Boy : " << a1.getBoy() << endl;
    cout << "Agirlik: " << a1.getAgirlik() << endl;
    cout << "Vucut Kitle Indeksi: " << a1.hesaplaVK() << endl;
    cout << "Durum: " << a1.sonucVKI() << endl;
}