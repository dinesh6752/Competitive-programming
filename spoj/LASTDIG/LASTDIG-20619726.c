#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t,a,b;
    cin>>t;
    while(t--){
       cin>>a>>b;
       if(a==0)
        cout<<"0\n";
        else if(b==0)
            cout<<"1\n";
        else{
            ll p=0,ld;
            map<ll,ll> mp;
            std::vector<ll> ans;
            ld=a%10;
            for(ll i=0;i<10;i++){
                if(mp[ld]==1)
                    break;
                mp[ld]=1;
                ans.push_back(ld);
                ld=(ld*a)%10;
            }
            p=mp.size();
            ll idx=((b-1)%p);
            cout<<ans[idx]<<endl;

        }
    }
}