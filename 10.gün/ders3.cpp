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

    private:

    public:
        int salon_no, koltukadet, menusec;
    public: Sinema()
    {
        bakiye = 0;
        salonMevcut = 0;
    }

    void salon_olustur(int salon_no, int koltuksay)
    {
        toplamKoltukSayisi = koltuksay;
        salonNo = salon_no;
        bosKoltukSayisi = koltuksay;
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
    
    

    do
    {
        secim = salon.AnaMenu();
        
        if(salon.SalonKontrol() != 0 || secim == 1)
        {
            switch (secim)
            {
                case 1: // Salon Olustur
                    break;
                case 2:
                    break;
                case 3:
                    break;
            }
        }


    } while (salon.AnaMenu() != 6);
    

}