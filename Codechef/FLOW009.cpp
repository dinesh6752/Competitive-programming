#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int main()
{
 
    int t;
    double q,p;
    cin>>t;
    while(t--)
    {
 
        cin>>q>>p;
        if(q<1000)
 
        {
           cout<<fixed<<setprecision(6)<<p*q<<"\n";
        }
        else
        {
            cout<<fixed<<setprecision(6)<<(q*p)-((q*p)/10)<<"\n";
        }
 
}
}
 
