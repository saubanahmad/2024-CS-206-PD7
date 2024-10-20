#include <iostream>
using namespace std;

void printUpperStars(int size);
void printLowerStars(int size);

main(){
    int totalSize;
    cout<<"Enter desired number of rows: ";
    cin>> totalSize;
    int size=totalSize/2;

    
    printUpperStars(size);
    printLowerStars(size);
    

}

void printUpperStars(int size)
{
    int count=1;
    for(int row=size; row>=0; row--)
    {
        for(int col=row; col>0; col--)
        {
            cout<<" ";
        }
        for(int ro=1; ro<count; ro++)
        {
            for(int co=ro; co<=ro; co++)
            {
                cout<<"*";
            }
        }
        count++;
        cout<<endl;
    }
}

void printLowerStars(int size)
{
    int count=size;
    for(int row=0; row<=size; row++)
    {
        for(int col=1; col<=row; col++)
        { 
            cout<<" ";
        }
        for(int ro=count; ro>=1; ro--)
        {
            cout<<"*";            
        }
        count--;
        cout<<endl;
    }

}
