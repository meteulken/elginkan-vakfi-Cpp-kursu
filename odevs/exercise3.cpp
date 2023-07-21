#include <iostream>

using namespace std;

int main()
{
// ! Girilen başarı notunun harf karşılığını veren program yazınız.
// * 90-100-------A
// * 80-90--------B
// * 70-80--------C
// * 60-70--------D
// * 50-60--------E
// * örn: Basari notunu giriniz: 83
// * örn: Ogrencinin Harf Notu: B

    int notu = 0;
    cout << "Basari notunu giriniz: ";
    cin >> notu;
    if(notu >= 90 && notu <= 100)
        cout << "A" << endl;
    else if(notu >= 80 && notu < 90)
        cout << "B" << endl;
    else if(notu >= 70 && notu < 80)
        cout << "C" << endl;
    else if(notu >= 60 && notu < 70)
        cout << "D" << endl;
    else if(notu >= 50 && notu < 60)
        cout << "E" << endl;
    else
        cout << "F" << endl;
}