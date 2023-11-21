// calculate integral sinxcosxdx 0 to 1
#include <iostream>
#include <cmath>

using namespace std;


double integrand(double x){
    return sin(x)*cos(x);
}

void trapezoid(double a,double b, double N){
    
    double h = (b - a)/N;
    double sum = 0;

    for (int k = 0; k < N; k++)
    {
        sum += h/2 * (2*integrand(a + k*h));
    }
    
    cout<<sum;
}

int main(int argc, char const *argv[])
{
    double a = 0;
    double b = 1;
    double N = 1000;

    trapezoid(a,b,N);
    return 0;
}