#include <iostream>
#include <valarray>

using namespace std;

int main(int argc, char const *argv[])
{
    valarray<int> thevec(4);

    thevec = {1,2,3,4};

    for (int i = 0; i < thevec.size(); i++)
    {
        cout<<thevec[i]<<endl;
    }
    
    return 0;
}