#include <iostream>
#include <string>

using namespace std;

#ifndef VKI_HPP
#define VKI_HPP

class VKI
{
    public:
        VKI();
        VKI(string, double, double);
        ~VKI();

        string getIsim();  
        double getBoy();
        double getAgirlik();
        
        void setIsim(string);
        void setBoy(double);
        void setAgirlik(double);
        string sonucVKI();

        double hesaplaVK();

        private:
        string yeniIsim;
        double yeniBoy;
        double yeniAgirlik;
        double sonuc3;

};

VKI::VKI() 
{
    yeniBoy = 0;
    yeniAgirlik = 0.0;
}

VKI::~VKI() // Destructor
{
    cout << "Nesne yok edildi." << endl;
}

VKI::VKI(string isim,double boy,double agirlik) 
{
    yeniIsim = isim;
    yeniBoy = boy;
    yeniAgirlik = agirlik;
}

string VKI::getIsim()
{
    return yeniIsim;
}

double VKI::getAgirlik()
{
    return yeniAgirlik;
}

double VKI::getBoy()
{
    return yeniBoy;
}

void VKI::setIsim(string isim)
{
    yeniIsim = isim;
}

void VKI::setBoy(double boy)
{
    yeniBoy = boy;
}

void VKI::setAgirlik(double agirlik)
{
    yeniAgirlik = agirlik;
}

double VKI::hesaplaVK()
{
    sonuc3 = yeniAgirlik / (yeniBoy * yeniBoy) * 10000;
    return sonuc3;
}

string VKI::sonucVKI()
{
    if(sonuc3 < 18)
        return "Zayif";
    else if(sonuc3 >= 18 && sonuc3 < 25)
        return "Normal";
    else if(sonuc3 >= 25 && sonuc3 < 30)
        return "Fazla Kilolu";
    else if(sonuc3 >= 30)
        return "Obez";
}

#endif