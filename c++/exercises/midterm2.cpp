//2) Output of the program?
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a=15,b=10;
    while (a > 0)
    {
        if (a>3)
        {
            b=6;
            a-=b;
        }
        else if (a>7)
        {
            b=7;
            a-=b;
            break;
        }
        else
        {
            b=3;
            a-=b;
        }
    }

    cout<<b;
    
    return 0;
}
