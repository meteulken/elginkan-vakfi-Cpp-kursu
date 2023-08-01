#include <iostream>

using namespace std;

class sinifA
{
    int degerA;
public:
    int pub()
    {
        return degerA = 567;
    }
};

class sinifB : public sinifA
{
    int b;
public:
    int f1()
    {
        return b = 123;
    }
};

int main()
{
    int aa, bb;
    sinifB objB;

    aa = objB.pub();

    bb = objB.f1();

    cout << "Temel siniftan gelen = " << aa << endl;

    cout << "Turetilen siniftan gelen = " << bb << endl;
}