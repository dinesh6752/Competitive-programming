#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    typedef long long ll;
    ll tt;
    cin>>tt;
    while(tt--){
        ll x,y,n,a,s;
        cin>>x>>y>>s;
        n=s*2/(x+y);
 
        ll d=(y-x)/(n-5);
       cout<<n<<endl;
         a=x-2*d;
        for(int i=0;i<n;i++){
             cout<<a<<" "; a+=d;
        }
 
 
    }
}
 
 