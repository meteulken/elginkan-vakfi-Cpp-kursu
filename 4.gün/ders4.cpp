#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int s1,s2,s3;

    cout << "Klavyeden 3 adet sayi giriniz: ";

    srand(time(0));
    s1 = rand() % 100;
    s2 = rand() % 100;
    s3 = rand() % 100;

    int temp = 0;

    if (s1 > s2)
    {
        temp = s1;
        s1 = s2;
        s2 = temp;
    }
    if (s1 > s3)
    {
        temp = s1;
        s1 = s3;
        s3 = temp;
    }
    if (s2 > s3)
    {
        temp = s2;
        s2 = s3;
        s3 = temp;
    }
    
    cout << "Kucukten buyuge siralama: " << s1 << " " << s2 << " " << s3 << endl;
}