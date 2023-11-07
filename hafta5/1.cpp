#include <iostream>
#include <valarray>

using namespace std;

int main(int argc, char const *argv[])
{
    valarray<valarray<double> > matrix1(2);
    for (int i = 0; i<matrix1.size() ; i++) matrix1[i].resize(3);

    valarray<valarray<double> > matrix2(2);
    for (int i = 0; i<matrix2.size() ; i++) matrix2[i].resize(3);

    valarray<valarray<double> > matrix3(2);
    for (int i = 0; i<matrix3.size() ; i++) matrix3[i].resize(3);


    int k = 1;
    for (int i = 0; i < matrix1.size(); i++)
    {
        for (int j = 0; j <= matrix1.size(); j++)
        {
            matrix1[i][j] = k;  // 1,2,3,4,5,6
            k++;
        }
    }
    
    int t = 1;
    for (int i = 0; i < matrix2.size(); i++)
    {
        for (int j = 0; j <= matrix2.size(); j++)
        {
            matrix2[i][j] = t;  // 1,2,3,4,5,6
            t++;

        }
    }
    
    for (int i = 0; i < matrix3.size(); i++)
    {
        for (int j = 0; j <= matrix3.size(); j++)
        {
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
            cout<<matrix3[i][j]<< " ";
            t++;

        }
        cout<<endl;
    }

    return 0;
}
