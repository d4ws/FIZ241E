#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int sum,val,flag;

    sum = 0;
    flag = 1;

    while (flag ==1)
    {
        cout<<"Enter the value: (-1 to break)"<<endl;
        cin>>val;
        cout<<"\n";

        if (val != -1)
        {
            sum = sum + val;
        }
        else{
            break;
        }
        
        cout<<"Sum: "<< sum <<endl;
    }
    
    return 0;
}
