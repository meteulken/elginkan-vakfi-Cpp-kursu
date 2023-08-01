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

        string getIsım();  
        int getBoy();
        double getAgirlik();

        void setIsim(string);
        void setBoy(int);
        void setKilo(int);

        double hesaplaVK();

        private:
        string yeniIsim;
        double yeniBoy;
        double yeniAgirlik;

};

#endif