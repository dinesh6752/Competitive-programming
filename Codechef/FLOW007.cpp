#include<iostream>
using namespace std;
int main()
{
   long int t,a;
    cin>>t;
    while(t--)
    {
        int rev=0;
        cin>>a;
        while(a!=0)
        {
            rev=rev*10+a%10;
            a/=10;
 
        }
cout<<rev<<endl;
 
}    }
 
