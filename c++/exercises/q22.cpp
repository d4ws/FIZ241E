#include <iostream>
#include <valarray>
using namespace std;

void func1(valarray<int> arr , int count){
    
    for(int i : arr){
        if(i > 3){
            //cout<<i<<" ";
            count++;
        }
    }
    cout<<"count: "<<count<<endl;
}

int func2(valarray<int> arr){
    
    int count = 0;
    valarray<int> locarr;
    locarr = arr;
    for(int i : arr){
        if(i > 3){
            count++;
            //cout<<i<<" ";
        }
    }
    return count;
}


int main()
{
    int count = {};
    valarray<int> myarray (7);
    for(int i = 0; i < 7; i++){
        cin>>myarray[i];
    }
    
    func1(myarray, count);
    
    count = func2(myarray);
    cout<<"count: "<<count;

    return 0;
}
