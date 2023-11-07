#include <iostream>
#define pi 3.14159
//mary boas => fiamzat
int main(int argc, char const *argv[])
{
    float r = 5;
    // float const pi = 3.1415;

    float area = pi*r*r;
    float circumference = 2*pi*r;

    std::cout<<"Area is: "<<area<< std::endl;
    std::cout<<"circumference is: "<<circumference<< std::endl;
    return 0;
}
