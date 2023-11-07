#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    double f;

    cout<<"enter fahrenheit"<<endl;
    cin>>f;

    double celcius = (f-32) * 5.0/9.0;
    cout<<celcius;
    
    return 0;
}
