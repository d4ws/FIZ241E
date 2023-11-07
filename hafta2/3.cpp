#include <iostream>
#define pi 3.14159
using namespace std;

int main(int argc, char const *argv[])
{
    float r;
    cout<<"Enter r: ";
    cin>>r;

    float area = pi*r*r;
    float circum = pi*r*2;
    
    
    cout<<"Area: "<< area << "\n";
    cout<<"Circum: " <<circum<<endl;
    
    return 0;
}
