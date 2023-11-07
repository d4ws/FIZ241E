#include <valarray>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    valarray<valarray<int> > mymatrix(2); // 2 satır

    for (int i = 0; i < mymatrix.size(); i++)
    {
        mymatrix[i].resize(3); // 3 sütun
    }
    
    mymatrix = {{1,2,3},{4,5,6}};

    for (int i = 0; i < mymatrix.size(); i++)
    {
        for (int j = 0; j < mymatrix[0].size(); j++)
        {
            cout<<mymatrix[i][j]<<" ";
        }

        cout<<endl;
        
    }
    
    return 0;
}
