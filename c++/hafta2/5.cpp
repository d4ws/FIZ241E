#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a,b;


    cout<<"Enter a: "<<endl; cin>>a;
    cout<<"Enter b: "<<endl; cin>>b;

    if (a>0 && b>0)
    {
        cout<<"a and b is positive"<<endl;
    }
    else if (a>0 || b>0)
    {
        cout<<"a or b is positive"<<endl;
    }
    
    else{
        cout<<"both negative";
    }
    
    
    
    
    return 0;
}
