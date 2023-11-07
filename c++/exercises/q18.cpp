#include <iostream>
#include <valarray>

# define a 0.7
# define b 0.2

using namespace std;

int main(int argc, char const* argv[])
{
    int dayCountToSimulate = 50;

    // added 1 to each array to handle out of range error. probably not the best solution
    valarray<double> S(dayCountToSimulate + 1), I(dayCountToSimulate + 1), R(dayCountToSimulate + 1);
    int day = 0;

    S[0] = 0.99;
    I[0] = 0.01;
    R[0] = 0;

    while (day < dayCountToSimulate)
    {

        S[day + 1] = S[day] - (a * I[day] * S[day]);
        I[day + 1] = I[day] + (a * I[day] * S[day] - (b * I[day]));
        R[day + 1] = R[day] + (b * I[day]);

        day++;
    }

    // another way of printing elements of an array.
    cout << "Suspectible ratio:" << endl;
    for (double i : S)
    {
        cout << i << " ";
    }

    cout << endl;

    cout << "Infected ratio:" << endl;
    for (double i : I)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Recovered ratio:" << endl;
    for (double i : R)
    {
        cout<<i<<" ";
    }
    
    cout << endl;

    return 0;
}
