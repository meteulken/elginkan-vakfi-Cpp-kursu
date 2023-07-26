#include <iostream>
#include <ctime>

using namespace std;

int main()
{   
    // * diziler
    char harf[20];
    srand(time(0));
    int diziboyut = sizeof(harf) / sizeof(*harf);

    cout << "---------------------" << endl;

    for(int i = 0; i < diziboyut; i++)
    {
        harf[i] = rand() % 26 + 97;
        cout << harf[i] << " ";
    }
    cout << endl;
    cout << "---------------------" << endl;
    for (size_t j = 0; j < diziboyut; j++)
    {
        for (size_t i = 0; i < diziboyut; i++)
        {
            if(harf[j] < harf[i])
            {
                char temp = harf[j];
                harf[j] = harf[i];
                harf[i] = temp;
            }
        }
    }

    for (size_t i = 0; i < diziboyut; i++)
    {
        cout << harf[i] << " ";
    }
    cout << "\n---------------------" << endl;
    
}