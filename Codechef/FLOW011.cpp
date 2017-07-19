#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
unsigned long long   n;
 
    cin>>t;
    while(t--)
    {
        cin>>n;
        n<1500?cout<<n+n*0.1+n*0.9<<"\n":cout<<n+500.0+(0.98*n)<<"\n";
 
    }
}
 
