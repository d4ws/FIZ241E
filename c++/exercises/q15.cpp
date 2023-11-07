#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    int input = {};
    cout<<"Enter a number:"<<endl;
    cin>> input;

    double x = (1 + sqrt(5)) / 2;
    double fibo = (pow(x , input) - pow((x - sqrt(5)), input)) / sqrt(5);

    cout<<fibo;
    return 0;
}
