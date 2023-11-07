#include <iostream>
#include <valarray>

using namespace std;

int main(int argc, char const *argv[])
{
    valarray<int> thevec(4);

    thevec[0] = 1;
    thevec[1] = 2;
    thevec[2] = 3;
    thevec[3] = 4;

    for (int i = 0; i < size(thevec); i++)
    {
        cout<<thevec[i]<<endl;
    }
    
    cout<<thevec.size(); 
    return 0;
}