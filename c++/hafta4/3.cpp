#include <iostream>
#include <valarray>

using namespace std;

valarray<double> sumtwovectors(valarray<double> vec1 , valarray<double> vec2) {

    return vec1 + vec2;
}

valarray<double> sumtwovectors2(valarray<double> vec1 , valarray<double> vec2) {

    int dimension = vec1.size();
    valarray<double> sum = vec1 + vec2;
    return sum;
}

int main(int argc, char const *argv[])
{
    valarray<double> u(10) , v(10);

    for (double i = 0; i < u.size(); i++)
    {
        u[i] = i+1;
    }
    
    for (double i = 10; i > 0; i--)
    {
        v[v.size()- i] = i;
    }
    
    valarray<double> sum = sumtwovectors2(u,v);
    

    cout<<"u  v  sum"<<endl;

    for (int i = 0; i < u.size(); i++)
    {
        cout<<u[i]<<"  "<<v[i]<<" "<<sum[i]<<endl;
    }
    


    return 0;
}
