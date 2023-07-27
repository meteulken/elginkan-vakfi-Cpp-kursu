#include <iostream>

using namespace std;

int hesap1(int);
int hesap2(int x);
int hesap3(int,int);
void hesap4(int,int);

void hesap4(int s1,int s2)
{
    int fark = s1-s2;
    cout << s1 << " - " << s2 << " = " << fark << endl;
}

int main()
{
    int a = 3, b = 4 , c = 5 , d = 6 , e = 7;

    cout << "a= " << hesap1(a) << endl;
    cout << "b= " << hesap2(b) << endl;
    cout << "c= " << hesap3(c,d) << endl;
    cout << "C= " << hesap1(hesap2(d)) << endl;
    cout << "d= " << hesap3(hesap1(a),hesap2(b)) << endl;
    cout << "e= " << hesap3(hesap1(a),hesap3(b,c)) << endl;
}

int hesap1(int x)
{
    x++;
    return x;
}

int hesap2(int x)
{
    return x*=5;
}

int hesap3(int x, int y)
{
    int sonuc = x+y;
    return sonuc;
}