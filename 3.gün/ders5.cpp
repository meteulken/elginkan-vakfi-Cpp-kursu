#include <iostream>

using namespace std;

int main()
{
    bool sonuc;
    int a = 1;
    int b = 1;
    sonuc = (7 == 5);
    cout << "7 == 5" << " --> " << sonuc << endl;
    sonuc = (5 > 4);
    cout << "5 > 4" << " ---> " << sonuc << endl;
    sonuc = (5 != 4);
    cout << "5 != 4" << " --> " << sonuc << endl;

    if(a || b)
    {
        cout << "true";
    }

    
}