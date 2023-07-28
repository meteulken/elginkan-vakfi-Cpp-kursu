#include <iostream>

using namespace std;

class Test{
    private:
        int data1;
        float data2;
    public:
        void function1(){
            data1 = 2;
            cout << "data1 = " << data1 << endl;
        }
        float function2(){
            data2 = 3.5;
            return data2;
        }
};

int main()
{
    Test obj1;
    float data = obj1.function2();
}