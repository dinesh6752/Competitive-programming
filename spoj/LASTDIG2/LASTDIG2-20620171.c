#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
 
ll me(ll a,ll n,ll p){
    ll res=1;
    while(n>0){
        if(n&1){
            res=((res%p)*(a%p))%p;
        }
        a=((a%p)*(a%p))%p;
        n>>=1;;
    }
    return res%p;
}
int main(){
	string A;
    ll t,a,b;
    cin>>t;
    while(t--){
       cin>>A>>b;
       a=A[A.size()-1]-'0';
       cout<<me(a,b,10)<<endl;
    }
}