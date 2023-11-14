#include <iostream>
#include <valarray>
using namespace std;

int main()
{
    valarray<int> myarray (10);
    
    myarray[0] = 0;
    myarray[1] = 1;
    
    for(int i = 2; i < 10; i++){
        myarray[i] = myarray[i-2] + myarray[i-1];
    }
    
    for(int i : myarray){
        cout<<i<<" ";
    }
    
    
    return 0;
}
