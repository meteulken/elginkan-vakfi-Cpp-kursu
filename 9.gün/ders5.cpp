#include <iostream>

using namespace std;
const float PI = 3.14159;

class Kure
{
    public:
        float r;
        float hacim()
        {
            return(r * r * r * PI * 4 / 3);
        }
        float alan()
        {
            return(r * r * PI * 4);
        }
}k;

int main()
{
    cout << "Kurenin yaricapini giriniz: "; cin >> k.r;
    cout << "Kurenin hacmi: " << k.hacim() << endl;
    cout << "Kurenin alani: " << k.alan() << endl;
}