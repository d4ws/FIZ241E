#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    int input = {};
    int loop = {};


    while (loop == 0)
    {
        cout<<"Enter a number:"<<endl;
        cin>>input;

        if (input == 666)
        {
            cout<<"I do not like this number"<<endl;
            loop == input;
            break;
        }
        else{
            if (input % 2 != 0)
            {
                cout<< pow(input , 2)<<endl;
            }
            else{
                cout<<sqrt(input)<<endl;
            }

        }
        cout<<"Start over!"<<endl;
    }

    return 0;
}
