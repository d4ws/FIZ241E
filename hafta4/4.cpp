#include <iostream>
#include <valarray>

using namespace std;

int main(int argc, char const *argv[])
{
    valarray<double> v1(3),v2(3),v3(3),v4(3);
    double sum,min,max;

    v1[0] = 4.3;
    v1[1] = 7.1;
    v1[2] = 2.9;

    sum = v1.sum();
    cout<<"Sum of v1: "<<sum<<endl;
    cout<<"----------------------"<<endl;
    min = v1.min();
    max = v1.max();
    cout<<"min of v1: "<<min<<endl;
    cout<<"max of v1: "<<max<<endl;
    cout<<"----------------------"<<endl;

    v2 = pow(v1 , 0.5);
    cout<<"v2 = pow of v1 to the 0.5: "<<endl;

    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v2[i]<<endl;
    }
    cout<<"----------------------"<<endl;

    v3 = exp(v1);

    cout<<"v3 = exp of v1: "<<endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v3[i]<<endl;
    }
    cout<<"----------------------"<<endl;
    
    cout<<"multiply of v2 and v3: "<<endl;
    v4 = v2 * v3;
    
    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v4[i]<<endl;
    }

    

    return 0;
}
