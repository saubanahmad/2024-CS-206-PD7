#include <iostream> 
using namespace std;

main()
{
    int visits, p, tp=0, d=7, utp=0, tpt, utpt=0;
    cout<< "Enter Number of days you visited Hospital: ";
    cin>> visits;
    for(int n= 1; n<=visits; n++)
    {
        if(n%3==0 && utp>tp)
        {
            d++;
        }
        cout<< "Number of patients who visited hospital on Day "<<n<<": ";
        cin>>p;

        
        if(p>d)
        {
            tpt=d;
            utpt=p-d;
        }
        else{
            tpt=p;
            utpt=0;
        }
        
        tp=tp+tpt; 
        
        utp=utpt+utp; 
     
    }
    cout<<tp<<endl;
    cout<<utp;

}