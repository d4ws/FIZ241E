#include <iostream>
#include <valarray>

#define d2valarray valarray<valarray<double> >
using namespace std;


void addmatrices(d2valarray m1, d2valarray m2, d2valarray &m3){

    m3 = m1 + m2;
    
}

int main(int argc, char const *argv[])
{
    d2valarray matrix1(2);
    for (int i = 0; i<matrix1.size() ; i++) matrix1[i].resize(3);

    d2valarray matrix2(2);
    for (int i = 0; i<matrix2.size() ; i++) matrix2[i].resize(3);

    d2valarray matrix3(2);
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

    addmatrices(matrix1, matrix2 , matrix3);

    for (int i = 0; i < matrix3.size(); i++)
    {
        for (int j = 0; j <= matrix3.size(); j++)
        {
            cout<<matrix3[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<matrix3.size()<<endl; // sütunun size'ı
    cout<<matrix3[0].size()<<endl; // satırın size'ı

    return 0;
}
