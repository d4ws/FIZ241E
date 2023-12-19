//1) Output of the program?
#include <iostream>
using namespace std;

int func(int a,int c,int b){
    return (c+a)/b;
}

void swap(int &x, int &y, int &z){
    x=y; // x=2
    y=z; // y=3
    z=x; // z=2
}
int main(int argc, char const *argv[])
{
    int a=1,b=2,c=3;

    swap(a,b,c); // a=2 , b=3, c=2
    cout<<func(a,b,c); // (3+2)/2
    return 0;
}
