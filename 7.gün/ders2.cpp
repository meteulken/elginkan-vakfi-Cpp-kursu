#include <iostream>
#include <ctype.h>
#include <unistd.h>

using namespace std;

int main()
{
    int i = 0;
    char str[] = "Test";
    char c;

    while (str[i])
    {
        c = str[i];
        if(islower(str[i]))
                c = toupper(c);
        write(1,&c,1);
        i++;
    }
}