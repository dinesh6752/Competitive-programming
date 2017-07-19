#include<iostream>
using namespace std;
int main()
{
    int n,l,lp=0,ls=0,rp=0,rs=0,a[1000],i,j,max=0,c;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ls>>rs;
        lp+=ls; rp+=rs;
       if(lp>rp)
       {
           c=1;
           j=lp-rp;
 
       }
       else{
        c=2;
        j=rp-lp;
       }
       if(j>max)
       {
          l=c;
          max=j;
       }
 
 
 
    }
cout<<l<<" "<<max;
}
 
