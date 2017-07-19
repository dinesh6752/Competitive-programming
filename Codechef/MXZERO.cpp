#include<iostream>
using namespace std;
int main()
{
    int t,n,i,c,a[100000];
 
 
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=0;
        for(i=0;i<n;i++)
            cin>>a[i];
 
             for(i=0;i<n;i++)
             {
                 if(a[i]==1)
                    c++;
             }
             if(c%2==0)
             {
                 c=n-c;
             }
 
 
        cout<<c<<"\n";
 
 
 
    }
}
 
