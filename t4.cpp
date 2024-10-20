#include <iostream>
using namespace std;

int dots(int num);

main()
{
    int num;
    cout<<"Enter number of Triangle: ";
    cin>> num;
    cout<<"Dots in the Triangle: "<<dots(num);    
}

int dots(int num){
    int dots=0;
    for(int x=num; x>=1; x--)
    {
        dots=dots+x;
    }
    return dots;
}