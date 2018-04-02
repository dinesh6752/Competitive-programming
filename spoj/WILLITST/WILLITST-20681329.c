#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    typedef unsigned long long ll;
    ll n;
    cin>>n;
    if(n<2||((n&(n-1))==0))
       puts("TAK");
      else
        puts ("NIE");
}
 
