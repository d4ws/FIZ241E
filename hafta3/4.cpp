#include <iostream>

using namespace std;

void hello(){
    cout<<"helogelo"<<endl;
}
void prevnext(int x, int &y, int &z){
    y = x-1;
    z = x+1;
}


void dupl(int &a, int &b,int &c);


int main(int argc, char const *argv[])
{
    hello();
    int a,b;
    int x = {},y = 5,z = 30;
    prevnext(100, a,b);
    dupl(x,y,z);
    cout<<a<<" "<<b<<endl;;
    cout<<x<<" "<<y<<" "<<z<<endl;
    return 0;
}

void dupl(int &a, int &b,int &c){
    a *=2;
    b *=2;
    c *=2;
}