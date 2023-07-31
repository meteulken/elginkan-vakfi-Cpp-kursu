#include <iostream>

using namespace std;

class testSinif{

    private: int a;

    public:
        testSinif(int sayi);
        ~testSinif();
        void goruntule();
}



testSinif::~testSinif(int sayi)
{

}

testSinif::testSinif(int sayi)
{
    a = sayi;
}

void testSinif::goruntule()
{
    cout << a << endl;
}

int main()
{
    testSinif ts(50);
    ts.goruntule();
}