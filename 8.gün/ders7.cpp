#include <iostream>

using namespace std;

double fahrenheitToCelsius(double fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

double degeral()
{
    double fahrenheit;
    cout << "Fahrenheit degerini giriniz : ";
    cin >> fahrenheit;
    return fahrenheit;
}

void yazdir(float fah_sonuc, float fahrenheit)
{
    cout << "Fahrenheit Degeri : " << fahrenheit << " Celsius degeri : " << fah_sonuc << endl;
} 

int main()
{
    int fah_sonuc = degeral();
    float sonuc = fahrenheitToCelsius(fah_sonuc);
    yazdir(sonuc,fah_sonuc);
    
}