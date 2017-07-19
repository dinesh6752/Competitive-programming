#include<iostream>
using namespace std;
int main()
{
   long int t,a,l;
    cin>>t;
    while(t--)
    {
        int sum=0;
        cin>>a;
        l=a%10;
        while(a!=0)
        {
            sum=a%10;
            a/=10;
 
        }
        sum=sum+l;
cout<<sum<<endl;
 
}    }
 
