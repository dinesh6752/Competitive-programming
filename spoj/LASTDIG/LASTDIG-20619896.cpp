#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll me(ll a,ll n,ll p){
    ll res=1;
    while(n>0){
        if(n&1){
            res=((res%p)*(a%p))%p;
        }
        a=((a%p)*(a%p))%p;
        n/=2;
    }
    return res%p;
}
int main(){
    ll t,a,b;
    cin>>t;
    while(t--){
       cin>>a>>b;
       cout<<me(a,b,10)<<endl;
    }
}