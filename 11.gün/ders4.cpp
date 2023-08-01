#include <iostream>
#include <sstream>

using namespace std;

class calisan
{

protected: // protected ile private arasındaki fark nedir?
    string isim; // private: sadece tanımlandığı sınıf içerisinde kullanılabilir.
    string soyad; // protected: tanımlandığı sınıf içerisinde ve türetilen sınıflarda kullanılabilir.
    double para; // public: her yerde kullanılabilir.

public:
    calisan() // kurucu metot
    {
        isim = " ";
        para = 0;
    }
    calisan(string ad, double ucret)
    {
        isim = ad;
        para = ucret;
    }
    void isimEkle(string ad)
    {
        isim = ad;
    }
    string isimAl()
    {
        return isim;
    }
    void ucretEkle(double ucret)
    {
        para = ucret;
    }
    double ucretAl()
    {
        return para;
    }
    string toString()
    {
        stringstream abc;  // string stream
        abc << isim << ": " << para; // string stream'e yazdırma
        return abc.str(); // string stream'i string'e dönüştürme
    }
};

class kisisel_bilgiler : public calisan{
    string TC;

    public:
        void TCekle(string kimlik_no)
        {
            TC = kimlik_no;
        }

        string TCOku(){
            return TC;
        }
        string toBilgi()
        {
            stringstream xyz;
            xyz << isim << ": " << para << ": " << TC;
            return xyz.str();
        }
};

int main()
{
    calisan ilkKisi("Ali genc",2500);
    cout << ilkKisi.toString() << endl;

    ilkKisi.isimEkle("Ahmet Genc");
    cout << ilkKisi.toString() << endl;

    calisan ikinciKisi;
    cout << ikinciKisi.toString() << endl;

    kisisel_bilgiler ornekKisi;
    cout << ornekKisi.isimAl() << endl;

    ornekKisi.TCekle("543425632");
    cout << ornekKisi.toString() << ": " << ornekKisi.TCOku() << endl;

    ornekKisi.ucretEkle(5000);
    cout << ornekKisi.toString() << ": " << ornekKisi.TCOku() << endl;

    cout << "-----------------" << endl;
    cout << ornekKisi.toBilgi() << endl; 

}