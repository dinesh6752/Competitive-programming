#include<iostream>
using namespace std;
int main()
{
   long int t,a;
    cin>>t;
    while(t--)
    {
        int sum=0;
        cin>>a;
        while(a!=0)
        {
            sum+=a%10;
            a/=10;
 
        }
cout<<sum<<endl;
 
}    }
 
