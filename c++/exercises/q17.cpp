#include <iostream>
#include <valarray>

#define pi 3.1415
using namespace std;

double addNumbers(valarray<double> array){
    
    double sum = {};

    for (double i = 0; i < array.size(); i++)
    {
        sum += array[i];    
    }
    
    return sum;
}

valarray<double> sineArray(valarray<double> array){

    valarray<double> resultVector (array.size()); // size of this vector will be equeal to the given vector

    for (double i = 0; i < array.size(); i++)
    {
        resultVector[i] = sin(array[i] * (pi / 180)); // i wanted to convert radians to degrees. for ex. sin(30) will be equal to 0.5
    }

    return resultVector;

}

int main(int argc, char const *argv[])
{
    valarray<double> x {1,8,3,9,0,1};    
    
    double sumOfArray = addNumbers(x);
    valarray<double> sinArray = sineArray(x);

    cout<<"Sum of array: "<<sumOfArray<<endl;
    cout<<""<<endl;

    cout<<"Sine of array: "<<endl;
    for (double i = 0; i < sinArray.size(); i++)
    {
        cout<<sinArray[i]<<endl;
    }
    
    return 0;
}
