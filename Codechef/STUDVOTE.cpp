#include<iostream>
using namespace std;
int main()
{
 
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,a[1000]={0},i,c=0,k;
        cin>>n>>k;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            if(x==i)
            {
                a[i]=-n-1;
            }
            else{
                a[x]++;
            }
        }
        for(i=1;i<=n;i++)
        {
            if(a[i]>=k)
            {
                c++;
            }
        }
        cout<<c<<endl;
 
    }
 
}
 
