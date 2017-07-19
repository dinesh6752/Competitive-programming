#include<iostream>
using namespace std;
int main()
{
 
    int t;
    cin>>t;
    while(t--)
    {
        int l,r,sum=0;
        cin>>l>>r;
        int rev,temp;
        for(int n=l;n<=r;n++)
        {
            rev=0;
            temp=n;
 
 
            while(n>0)
            {
 
               rev=rev*10+n%10;
               n=n/10;
            }
            if(temp==rev)
            {
               sum+=temp;
            }
            n=temp;
 
        }
        cout<<sum<<endl;
 
    }
 
} 
