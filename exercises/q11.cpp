#include <cmath>
#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    double result = {};
    for (double i = 1; i <= 5; i++)
    {
        result += pow(i,i);

    }
    cout << result << endl;

       
    return 0;
}
