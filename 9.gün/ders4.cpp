#include <iostream>

using namespace std;

class kisi
{
    public:
        string adi,soyadi;
    private:
        int yas;
};


int main()
{
    kisi kisi1;

    cout << "Adi :"; cin >> kisi1.adi;
    cout << "Soyadi :"; cin >> kisi1.soyadi;

    cout << "Isim: " << kisi1.adi << endl;
    cout << "soyisim:  " << kisi1.soyadi << endl;

    


}