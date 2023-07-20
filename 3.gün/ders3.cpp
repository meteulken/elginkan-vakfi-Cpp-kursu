#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
   
    // const int pi = 3.1415;
    double hesapla = 0;
    int yaricap = 0;
    cout << "Yari capi giriniz : ";
    cin >> yaricap;
    int kare = pow(yaricap,2);
    cout << "Dairenin Alani" << endl;
    cout << "--------------" << endl;
    hesapla = kare * M_PI;
    cout <<  setprecision(8) << hesapla << " cm2"<< endl;
    
}