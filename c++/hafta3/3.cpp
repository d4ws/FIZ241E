#include <iostream>

using namespace std;

int add(int a, int b){

   return a+b; 
}
int subs(int a ,int b){
    return a-b;
}

void subs(int a,int b,int &r){
    r = a-b;
}
void add(int a, int b, int &r){
    r = a+b;
}


int main(int argc, char const *argv[])
{
    int z;
    cout<<"Added. " <<add(1,2)<<endl;
    add(1,3,z);
    cout<<z<<endl;

    int x;
    cout<<"Substracted. " <<subs(1,2)<<endl;
    subs(4,8,x);
    cout<<x<<endl;
    

    return 0;
}
