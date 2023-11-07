#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    int sum = {};
    int add = 1;


    while (sum < 100)
    {
        cout<<"Added number: "<<add<<endl;
        add++;
        sum += add;
        cout<<"Sum: "<<sum<<endl;
    }

    return 0;
}
