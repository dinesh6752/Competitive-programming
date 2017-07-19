#include<iostream>
using namespace std;
int main()
{
   long int gcd,t;
 
    long int a,b;
    cin>>t;
    while(t--)
    {
 
    cin>>a>>b;
long    int t1=a,t2=b;
    while(a>0&b>0)
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
    gcd=a+b;
    cout<<gcd<<" "<<(t1*t2)/gcd<<endl;
 
 
 
}
}
 
