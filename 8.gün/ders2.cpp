#include <iostream>

using namespace std;

string yazdir(string str)
{
    string message = "Merhaba " + str;

    return message;
}

int main()
{
    string isim;
    cout << "Isminizi giriniz: ";
    cin >> isim;
    cout << yazdir(isim) << endl;
}