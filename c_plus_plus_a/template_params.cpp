// https://www.geeksforgeeks.org/class-template-multiple-parameters/
#include <iostream>

using namespace std;

// Class template with two parameters 
template<class T1, class T2>
class Test
{
    T1 a;
    T2 b;
    public:
        Test(T1 x, T2 y)
        {
            a = x;
            b = y;
        }
        void show()
        {
            cout << a << " and " << b << endl;
        }
};

int main(void)
{
    Test<float, int> Test1(1.24, 123);
    Test<int, char> Test2(324, 'w');
    Test1.show();
    Test2.show();
}