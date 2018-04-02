#include<bits/stdc++.h>
using namespace std;
     
typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef  vector<unsigned long long > vull;
     
#define pb push_back
#define mp make_pair
#define rep(i,n) for(int i=0;i<(n);i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define repr(i,n) for(int i=(n-1);i>=0;i--)

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007 
     
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vll a(n) ;
    for(int i=0;i<n;++i){
      cin>>a[i]  ;
    }       
    ll s,f;
    cin>>s>>f;
    ll k=f-s;
    ll tc=0;
    for(int i=0;i<k;i++){
        tc+=a[i];
    }
    ll mx=tc,mxi=1;
    for(int i=k;i<n+k;i++){
        tc=tc-a[i-k]+a[i%n];
        
        if(tc>mx){
            mx=tc;
            
        }
    }
    tc=0;
     for(int i=0;i<k;i++){
        tc+=a[i];
    }
    ll ans=LLONG_MAX;
     if(tc==mx){
        ans=s;
     }
    for(int i=k;i<n+k;i++){
        tc=tc-a[i-k]+a[i%n];
        if(tc==mx){
        ans=min(ans,(s+(n-(i-k+2)+1)-1)%n+1);
     }
        
    }
    cout<<ans;
}