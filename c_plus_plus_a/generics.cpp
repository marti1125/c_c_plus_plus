#include <iostream>

using namespace std;

template <typename T>

T myMax(T x, T y)
{
    return ( x > y) ? x : y;
}

int main(void)
{   
    // Call myMax for int 
    cout << "3 > 7 is " << myMax<int>(3, 7) << endl;
    
    // Call myMax for double 
    cout << "3.0 > 7.0 is " << myMax<double>(3.0, 7.0) << endl; 

    // Call myMax for char 
    cout << "c > f is " << myMax<char>('c', 'f') << endl; 
}
