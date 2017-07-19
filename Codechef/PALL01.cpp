#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  string r,s;
 
 
    cin>>t;
    while(t--)
    {
        cin>>s;
        r=s;
        reverse(s.begin(),s.end());
        if(r==s)
            cout<<"wins\n";
        else
            cout<<"losses\n";
 
    }
}
 
