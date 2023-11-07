#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int result = 1;
    for (int i = 1; i <= 10; i++)
    {
        result  *= i;

    }

    cout << result;
       
    return 0;
}
