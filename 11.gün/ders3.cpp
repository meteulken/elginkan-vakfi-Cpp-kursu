#include <iostream>

using namespace std;

class Kisi{  // temel sinif
    public:
        string ad;
        string soyad;
};

class Ogrenci: public Kisi{ // turetilen sinif
    public:
        string ogrenci_no;
};

class Ogretmen: public Kisi{ // turetilen sinif
    public:
        string brans;
};

int main()
{
    Ogrenci ogr1;
    Ogretmen ogrt1;
    ogrt1.ad = "Ahmet";
    ogrt1.soyad = "Yilmaz";
    ogrt1.brans = "Bilişim";

    ogr1.ad = "Mehmet";
    ogr1.soyad = "Yilmaz";
    ogr1.ogrenci_no = "1234";

    cout << ogrt1.ad << " " << ogrt1.soyad << " " << ogrt1.brans << endl;

    cout << ogr1.ad << " " << ogr1.soyad << " " << ogr1.ogrenci_no << endl;

    return 0;


    

}