#include <iostream>
#include <string>

using namespace std;

#ifndef VKI
#define VKI

class VKI
{
    public:
        VKI();
        VKI(string, int, int);
        ~VKI();
        void setAd(string);
        void setKilo(int);
        void setBoy(int);
        string getAd();
        int getKilo();
        int getBoy();
        void vkiHesapla();
        void durumYazdir();

};

#endif