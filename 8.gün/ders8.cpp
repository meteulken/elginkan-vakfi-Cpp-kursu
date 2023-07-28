#include <iostream>

using namespace std;

void yildizyaz(int t)
{
    if(t <= 0)
        t = 50;
    for (size_t i = 0; i < t; i++)
        cout << "*";
    cout << endl;
}

int main()
{
    yildizyaz(0);
    cout << " -- Bu program fonksiyonlarla ilgilidir -- " << endl;
    yildizyaz(50);
    cout << " Bu programa 3 defa ayni fonksiyon cagriliyor " << endl;
    yildizyaz(30);
}