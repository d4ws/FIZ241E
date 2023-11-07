#include <iostream>
#include <cmath>
#include <valarray>

using namespace std;

int main(int argc, char const *argv[])
{   
    valarray<double> myarray {2,5,1,6};
    valarray<double> squarerootArray(4);
    valarray<double> squaredArray(4);

    // adding 16
    for (double i = 0; i < myarray.size(); i++)
    {
        myarray[i] += 16;
    }

    // square roots
    for (double i = 0; i < myarray.size(); i++)
    {
        squarerootArray[i] = sqrt(myarray[i]);
    }
    
    // squares 
    for (double i = 0; i < myarray.size(); i++)
    {
        squaredArray[i] = pow(myarray[i],2);
    }

    // cout
    cout<<"Square root array:"<<endl;
    for (double i = 0; i < myarray.size(); i++)
    {
        cout<<squarerootArray[i]<<" ";
    }
    
    cout<<endl;
    
    cout<<"Squared array:"<<endl;
    for (double i = 0; i < myarray.size(); i++)
    {
        cout<<squaredArray[i]<<" ";
    }

    return 0;
}
