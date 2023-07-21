#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;

    cout << "Sirayla iki sayi giriniz :" << endl;

    cin >> a >> b;

    if(a > b)
        cout << "a > b";
    else if (a < b)
        cout << "a < b";
    else 
        cout << "a = b";
}