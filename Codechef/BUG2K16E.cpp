#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 
    int n,k,t,s=1;
    int sum,check,diff=0;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n>>k;
        sum=(n*(n+1))/2;
 
            for(int i=1;(pow(k,i)<=n);i++)
            {
 
 
                    sum-=pow(k,i);
 
 
 
            }
 
 
       cout<<"Case #"<<s++<<": "<<sum<<endl;
 
    }
}
 
 
