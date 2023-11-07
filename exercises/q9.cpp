#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    double result = {};
    for (int i = 1; i <= 10; i++)
    {
        result  += pow(i,2);

    }

    cout << result;
       
    return 0;
}
