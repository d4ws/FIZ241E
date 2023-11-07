#include <iostream>
#define pi 3.1415

using namespace std;
void area(double r ,double &res){

    res = pi*r*r;
}

double volume(double r){
    return 4.0/3.0*pi*r*r*r;
}

int main(int argc, char const *argv[])
{
    double r,result;
    cout<<"Enter radius: ";
    cin>>r;

    area(r , result);
    cout<<"area is: "<< result<<endl;
    cout<<"volume is: "<< volume(r)<<endl;
    return 0;
}
