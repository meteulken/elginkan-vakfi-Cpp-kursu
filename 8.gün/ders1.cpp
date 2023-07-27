#include <iostream>

using namespace std;

int kareal(int x)
{
    for (size_t i = 1; i <= 10; i++)
    {
        cout << i * i << " " << endl;
    }
    
}

int main()
{
    int sayi = 0;
    cout << "Sayi giriniz: ";
    cin >> sayi;
    cout << "Sayinin karesi: " << kareal(sayi) << endl;
    return 0;
}