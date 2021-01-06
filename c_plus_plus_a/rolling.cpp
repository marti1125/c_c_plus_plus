//The following program computes
//the probability for dice possibilities

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
const int sides = 6;

inline int r_sides() { return (rand() % sides +1); }

int main(void)
{
    const int n_dice = 2;
    srand(clock());
    cout << "\nEnter number of trails: ";
    int trails;
    cin >> trails;
    int* outcomes = new int[n_dice * sides + 1];

    for (int i = 0; i < trails; ++i)
    {
        int roll = 0;
        for (int j = 1; j <= n_dice; ++j)
        {
            roll += r_sides();
        }
        outcomes[roll]++;
    }
    
    cout << "probability\n";
    for (int i = 0; i < n_dice * sides + 1; ++i)
    {
        cout << "i = " << i << "p = " << static_cast<double>(outcomes[i]) / trails << endl;
    }    

}

