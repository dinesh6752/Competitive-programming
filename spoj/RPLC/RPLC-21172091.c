#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
   int t;
   cin>>t;
   int tc=1;
   while(t--){
    ll n;
    cin>>n;
    ll ans=1,curr=1;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        curr+=x;
        if(curr<=0){
            ans+=(-curr)+1;
            curr=1;
        }
    }
    cout<<"Scenario #"<<tc++<<": "<<ans<<"\n";
   }
}