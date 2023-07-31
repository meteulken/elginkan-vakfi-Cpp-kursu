#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int varmi(int dizi[], int boyut, int aranan)
{
    int i = 0;
    for (i = 0; i < boyut; i++)
    {
        if (dizi[i] == aranan)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int rndS1 = 0;
    int rndS2 = 0;
    int rndS3 = 0;
    int rndS4 = 0;
    int thmnS1 = 0;
    int thmnS2 = 0;
    int thmnS3 = 0;
    int thmnS4 = 0;
    int randomSayi = 0;
    int dizi[4];
    int tahmin;
    int thmnDizi[4];
    int hak = 0;

    srand(time(NULL));

    // rndS1 = (rand() % 10) * 1000;
    // rndS2 = (rand() % 100) * 10;
    // rndS3 = rand() % 100;

    rndS1 = (rand() % 10);
    rndS2 = (rand() % 10);
    rndS3 = (rand() % 10);
    rndS4 = (rand() % 10);


    cout << rndS1 << rndS2 << rndS3 << rndS4 <<  endl;

    randomSayi = rndS1+ rndS2 + rndS3;

    dizi[0] = rndS1;
    dizi[1] = rndS2;
    dizi[2] = rndS3;
    dizi[3] = rndS4;



    cout << "Tahmininizi giriniz: ";
    cin >> tahmin;

    thmnS1 = tahmin / 1000;
    thmnS2 = tahmin / 100 % 10;
    thmnS3 = tahmin / 10 % 10;
    thmnS4 = tahmin % 10;

    cout << thmnS1 << endl;
    cout << thmnS2 << endl;
    cout << thmnS3 << endl;
    cout << thmnS4 << endl;
    
    while (hak < 10)
    {
        thmnDizi[0] = thmnS1;
        thmnDizi[1] = thmnS2;
        thmnDizi[2] = thmnS3;
        thmnDizi[3] = thmnS4;
        int i = 0;
        int j = 0;

        while(i < 4)
        {
            if(varmi(dizi[i], 4, thmnS1))
            {
                cout << "Eslesen sayi var : " << dizi[i] << endl;
            }
            else
            {
                cout << "Eslesen sayi var : " << dizi[i] << endl;
            }
            i++;
        }
        hak++;
    }
}