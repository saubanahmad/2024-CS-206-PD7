#include <iostream>
using namespace std;

bool isPrime(int num);

main()
{
    int num;
    cout<<"Enter Number: ";
    cin>> num;
    cout<< isPrime(num);
}

bool isPrime(int num)
{
    if(num<=1)
    {
        return false;
    }
    for(int x=2; x<num; x++)
    {
        if(num%x==0)
        {
            return false;
        }
    }
    return true;
}
