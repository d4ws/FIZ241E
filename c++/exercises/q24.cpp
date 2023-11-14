#include <iostream>
#include <valarray>

using namespace std;


void centerofmass(valarray<double> massvec,valarray<double> xvec,valarray<double> yvec){
    
    double xcm,ycm;
    
    xcm = (massvec * xvec).sum() / massvec.sum();
    ycm = (massvec * yvec).sum() / massvec.sum();
    
    cout <<"center x: "<< xcm<<endl;
    cout <<"center y: "<< ycm<<endl;
}

int main(){
    
    int N = 4;
    valarray<double> massvec(N), xvec(N), yvec(N);
    
    cout<<"Enter the mass values: ";
    for(int i = 0; i < N; i++){
        cin>>massvec[i];
    }
    
    cout<<"Enter the x-coordinates values: ";
    for(int i = 0; i < N; i++){
        cin>>xvec[i];
    }
    
    cout<<"Enter the y-coordinates values: ";
    for(int i = 0; i < N; i++){
        cin>>yvec[i];
    }
    
    centerofmass(massvec,xvec,yvec);
    
    return 0;
}
