#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    while(a>0&&b>0)
    {
        if(a>b)
        {
            a%=b;
        }
        else
        {
            b%=a;
        }
    }
    return a+b;
}
int main ()
{
 
    short t,n,a[1000],i,j,cnt,g;
 
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
 
            cin>>a[i];
 
        }
 
        /*for(i=max;i>=1;i--)
        {
            cnt=0;
            for(j=0;j<n;j++)
            {
                if(a[j]%i==0)
                    cnt++;
            }
            if(cnt==n)
                break;
        }*/
        g=a[0];
        for(i=1;i<n;i++)
        {
            g=gcd(g,a[i]);
        }
 
        for(j=0;j<n;j++)
            cout<<a[j]/g<<" ";
            cout<<"\n";
    }
}
 
