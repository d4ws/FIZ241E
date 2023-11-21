#include <iostream>
#include <valarray>

#define d2valarray valarray<valarray<double> >

using namespace std;


void oddeven(d2valarray inp){

    double oldmax,newmax,row,col= {};

    for (double i = 0; i < inp.size(); i++)
    {
        for (double j = 0; j < inp[0].size(); j++)
        {
            oldmax = inp[i][j];
            if (inp[i][j] > inp[i][j - 1] && oldmax > newmax)
            {
                newmax = oldmax;
                row = i + 1;
                col = j + 1;
            }   
        }
    }
    
    cout<<"Max value: "<<newmax<<endl;
    cout<<"row and col of the max value: "<<row<<" "<<col<<endl;


}


double matrixaverage(d2valarray inp){

    double sum = {};

    for (double i = 0; i < inp.size(); i++)
    {
        for (double j = 0; j < inp[0].size(); j++)
        {
            sum += inp[i][j];
        }
    }

    // return average. 
    return sum/(inp.size() * inp.size());
}



int main(int argc, char const *argv[])
{
    d2valarray matrix(3);
    for (int i = 0; i<matrix.size() ; i++) matrix[i].resize(3);

    // fill the matrix here
    cout<<"Enter 3 x 3 matrix:"<<endl;
    for (double i = 0; i < matrix.size(); i++)
    {
        for (double j = 0; j < matrix[0].size(); j++)
        {
            cin>>matrix[i][j];
        }
        
    }

    // print the matrix if you want
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


    oddeven(matrix);

    double myaverage = matrixaverage(matrix);
    cout<<"Average: "<<myaverage;
    return 0;
}
