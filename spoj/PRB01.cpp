#include<iostream>
using namespace std;
bool prime(int n)
{
 
       for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
               return false;
        }
        return true;
 
}
int main()
{
 
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(prime(n)==true)
            cout<<"yes\n";
        else
            cout<<"no\n";
 
    }
}
 
