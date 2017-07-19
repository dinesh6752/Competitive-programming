#include<iostream>
using namespace std;
int main()
{
 
    int t,s,d,i,n;
    cin>>t;
    while(t--)
    {
        cin>>d>>n;
       int s=0;
        for(i=0;i<d;i++)
        {
            s=(n*(n+1))/2;
            n=s;
        }
        cout<<s<<"\n";
    }
}
 
