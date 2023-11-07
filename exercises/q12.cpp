#include <cmath>
#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    double sum = {};
    int input = {};
    cout<<"enter value (-1 to exit)"<<endl;
    cin>>input;

    while (input != -1)
    {
        sum += input;
        cin>>input;
    }

    cout<<sum;
    

       
    return 0;
}
