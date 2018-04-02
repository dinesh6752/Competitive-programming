#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef vector<ll> vll;
typedef pair<ll, ll> pii;
typedef pair<ll, ll> pll;
typedef vector< vector<ll> > vvii;

#define make_pair mp
const ll MOD = 1e9 + 7, N = 1e6 + 5;



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n,req = 0;

    cin >> n;

    ll a[n],b[n];

    for(ll i=0;i<n;++i){

        cin >> a[i];

    }

    for(ll i=0;i<n;++i){

        cin >> b[i];

    }


    for(ll i =0;i<n;++i){
        req += a[i];
    }

    sort(b,b+n);

    if(b[n-2]+b[n-1] < req) cout<<"NO\n";

    else cout<<"YES\n";
    
    return 0;
}