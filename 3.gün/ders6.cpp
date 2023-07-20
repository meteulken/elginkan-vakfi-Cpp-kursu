#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "birinci sayiyi giriniz : ";
    cin >> a;
    cout << "ikinci sayiyi giriniz : ";
    cin >> b;

    a > b ? cout << a << " > " << b : cout << a << " < " << b;
   
}