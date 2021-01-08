// Sum
#include <iostream>
#include <vector>

using namespace std;

// set the count of item the vector will store1
const int n = 40;

// using vector from https://www.geeksforgeeks.org/vector-in-cpp-stl/
inline void sum(int &p, vector<int> d) { 
    for (auto i = d.begin(); i != d.end(); i++) 
        p += *i; 
}

int main(void)
{
    int accum = 0; // accunt variable for show the result
    vector<int> data; // where it store all int's
    for (int i = 0; i < n; ++i)
        data.push_back(i); // insert element at end, provide strong guarantee

    sum(accum, data); // calculate the total sum

    cout << "sum is " << accum << endl; // print the result

}