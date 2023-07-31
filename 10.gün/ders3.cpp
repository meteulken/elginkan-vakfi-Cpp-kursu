#include <iostream>
#include <string>

using namespace std;

class Sinema{

    int toplamKoltukSayisi;
    int bosKoltukSayisi;
    int salonMevcut;
    double bakiye;
    int salonNo;

    const double TAM = 150.0;
    const double INDIRIMLI = 120.0;

    public:
        int salon_no, koltukadet, menusec;
    public: Sinema() // kurucu method
    {
        bakiye = 0;
        salonMevcut = 0;
    }

    void salon_olustur(int salon_no, int koltuksay)
    {
        toplamKoltukSayisi = koltuksay;
        salonNo = salon_no;
        bosKoltukSayisi = toplamKoltukSayisi;
        bakiye = 0;
        salonMevcut++;
    }

    double bakiyeOgren()
    {
        return bakiye;
    }
    
    void BiletSat(bool indirimli)
    {
        if(bosKoltukSayisi == 0)
        {
            cout << "Salon Dolu" << endl;
            return;
        }
        if(indirimli)
        {
            bakiye += TAM;
            cout << "Tam Bilet Satis Gerceklesti" << endl;
        }
        else
        {
            bakiye += INDIRIMLI;
            cout << "Indirimli Bilet Satis Gerceklesti" << endl;
        }
        bosKoltukSayisi--;
    }

    int BosKoltukOgren()
    {
        return bosKoltukSayisi;
    }

    int SalonKontrol()
    {
        return salonMevcut;
    }

    int AnaMenu()
    {
        cout << "-----------Sinema Bilet Satis Sistemi---------" << endl;
        cout << "1. Salon Olustur" << endl << "2. Bilet Satis" << endl << "3. Salon Goruntule" << endl << "4. Bilet Iptal" << endl << "5. Bakiye Goruntule" << endl << "6. Cikis" << endl;
        cout << "Seciminiz: "; cin >> menusec;
        return menusec;
    }

};

int main()
{
    int secim;
    Sinema salon;
    bool IndirimSecimi;
    
    do
    {
        secim = salon.AnaMenu();
        
        if(salon.SalonKontrol() != 0 || secim == 1 || secim == 5)
        {
            switch (secim)
            {
                case 1: // Salon Olustur
                    cout << "Salon No: "; 
                    cin >> salon.salon_no;
                    cout << "Koltuk Sayisi: ";
                    cin >> salon.koltukadet;
                    salon.salon_olustur(salon.salon_no, salon.koltukadet);
                    cout << "Salon Basariyla Olusturuldu" << endl;
                    break;
                case 2:
                    cout << "0--> Indirimli Bilet" << endl << "1--> Tam Bilet" << endl;
                    cout << "Secim : ";
                    cin >> IndirimSecimi;
                    salon.BiletSat(IndirimSecimi);
                    break;
                case 3:
                    cout << "Salon No: " << salon.salon_no << endl;
                    cout << "Koltuk Sayisi: " << salon.BosKoltukOgren() << endl;
                    break;
                case 4:
                    break;
                case 5:
                    cout << "Bakiye: " << salon.bakiyeOgren() << endl;
                    break;
            }
        }
        else
        {
            cout << "!! Salon Olusturulmamis" << endl;
        }
    } while (secim != 6);
    

}