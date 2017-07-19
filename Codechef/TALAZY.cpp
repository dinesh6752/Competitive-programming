#include<iostream>
using namespace std;
int main()
 
{
 unsigned  long long t,n,b,m;
    cin>>t;
    while(t--)
    {
 
        cin>>n>>b>>m;
    long    long  sum=0;
      if(n==0)
            {
                sum=0;
                b=0;
 
            }
            else if(1==n)
            {
                sum=m;
                b=0;
            }
            else
            {
 
 
 
        while(n!=0)
        {
 
 
            if(n%2==0)
            {
                sum+=(n/2)*m+b;
                n=n-(n/2);
                m=2*m;
 
            }
            else
            {
 
                sum+=((n+1)/2)*m+b;
                n=n-((n+1)/2);
                m=2*m;
            }
 
        }
            }
         cout<<sum-b<<endl;
    }
} 
