#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int sayilar[10];
    int temp;

    int count = sizeof(sayilar) / sizeof(sayilar[0]);

    for (size_t i = 0; i < count; i++)
    {
        sayilar[0] = rand() % 100 + 1;
    }
    
    temp = sayilar[0];

    for (size_t i = 1; i < count; i++)
    {
        if(sayilar[i] > temp)
        {
            temp = sayilar[i];
        }
        i++;
    }
    for (size_t i = 0; i < count; i++)
    {
        cout << sayilar[i] << endl;
    }
    
}