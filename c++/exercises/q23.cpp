#include <iostream>
#include <valarray>
#include <cmath>

using namespace std;


double func1(double x , int N){
    
    double y = 0;
    
    for(int k = 0; k <=N; k++){
        y = y + pow(x,double(k));
    }
    
    return y;
}


double func2(double x){
    
    double y = 0;
    y = 1/(1-x);
    return y;
}

int main(){
    
    double result;
    double x = 0;
    int N = 0;
    cout<<"Enter a number: ";
    cin>>x;
    
    if(x >= -1 && x <= 1){
        
        cout<<"Enter another number: ";
        cin>>N;
        
        result = func1(x,N);
        cout<<"result is: "<<result<<endl;
    }
    
    else{
        result = func2(x);
        cout<<"result is: "<<result<<endl;
    }
    
    return 0;
}
