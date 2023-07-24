#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int s1 = 0;
    int s2 = 0;
    float hesapla = 0;
    float hesap2 = 0;

    cout <<setw(6) << "N" << setw(14) << "square root" << setw(15) << "fourthroot" << endl;

    for (float i = 10; i < 20; i++)
    {
        hesapla = sqrt(i);
        hesap2 = sqrt(hesapla);
        cout << setw(6) << setfill('.') << i << setfill(' ') << setw(12) << setprecision(4) << hesapla << setw(12) << setprecision(4) << hesap2 << endl;   
    }   
}