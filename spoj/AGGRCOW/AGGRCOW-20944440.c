#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ans,x;
ll n,c,t;vector<int> a;
bool p(ll x){
    bool ok=1;
    ll s=0,tmp=1;
    for(int i=1;i<n;i++){
        s+=(a[i]-a[i-1]);
        if(s>=x){
            s=0;
            tmp++;
        }
    }
    if(tmp>=c){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    
    cin>>t;
    while(t--){
        cin>>n>>c;    
        ans=-1;
        a.clear();
        a.resize(n);
        ll mx=0;
        for(int i=0;i<n;++i){
            cin>>a[i];
            mx=max(mx,(ll)a[i]);
        }
        sort(a.begin(), a.end());
        ll lo=0,hi=mx,mid;
        while(lo<hi){
            mid=round((lo+hi)/2.0);
            //cout<<"mid is   "<<mid<<"\n";
            if(p(mid)){
                //cout<<mid<<" ";
                ans=max(ans,lo);
                lo=mid;
            }
            else
            {
                hi=mid-1;
            }
        }
        cout<<lo<<"\n";
    }
    
}