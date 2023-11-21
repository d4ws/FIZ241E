#include <iostream>
#include <valarray>

#define d2valarray valarray<valarray<double> >

using namespace std;


void oddeven(d2valarray inp){

    double odds,evens = 0;

    for (double i = 0; i < inp.size(); i++)
    {
        for (double j = 0; j < inp[0].size(); j++)
        {
            if (int(inp[i][j]) % 2 == 0)
            {
                evens++;
            }
            else{
                odds++;
            }
              
        }
    }
    
    cout<<"Odds: "<<odds<<endl;
    cout<<"Evens: "<<evens<<endl;
}



int main(int argc, char const *argv[])
{
    int size = {};
    cout<<"N of the matrix? (N x N):"<<endl;
    cin>>size;

    d2valarray matrix(size);
    for (int i = 0; i<matrix.size() ; i++) matrix[i].resize(size);

    // fill the matrix 
    cout<<"Fill the matrix:"<<endl;
    for (double i = 0; i < matrix.size(); i++)
    {
        for (double j = 0; j < matrix[0].size(); j++)
        {
            cin>>matrix[i][j];
        }
        
    }

    // print the matrix if you want
    cout<<"The matrix: "<<endl;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


    oddeven(matrix);

    return 0;
}
