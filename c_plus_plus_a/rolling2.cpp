//The following program computes
//the probability for dice possibilities

#include <iostream>
#include <random>
#include <ctime>

using namespace std;
const int sides = 6;

int main(void)
{
    const int n_dice = 2;
    uniform_int_distribution<unsigned> u(1,6);
    default_random_engine e(time(0));

    cout << "\nEnter number of trails: ";
    int trails;
    cin >> trails; // compare to scanf
    int* outcomes = new int[n_dice * sides + 1];

    for (int i = 0; i < trails; ++i)
    {
        int roll = 0;
        for (int j = 1; j <= n_dice; ++j)
        {
            roll += u(e);
        }
        outcomes[roll]++;
    }
    
    cout << "probability\n";
    for (int i = 0; i < n_dice * sides + 1; ++i)
    {
        cout << "i = " << i << "p = " << static_cast<double>(outcomes[i]) / trails << endl;
    }    

}

