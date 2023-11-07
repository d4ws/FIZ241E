#include <iostream>
//330
using namespace std;
int main(int argc, char const *argv[])
{
    int result = {};
    for (int i = 1; i < 10; i++)
    {
        result += i * (i+1);
        cout << result << endl;

    }

       
    return 0;
}
