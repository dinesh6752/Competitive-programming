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
    vi a(n+1);
    for(int i=1;i<=n;++i){

               cin>>a[i];
    }   
    bool ok=0;    
    for(int i=1;i<=n;++i){
        if(a[i]==a[a[a[a[i]]]]){
            ok=1;
           // cout<<i<<" "<<a[i]<<"\n";
        }
    }if(ok)
    cout<<"YES";
    else
        cout<<"NO";

}