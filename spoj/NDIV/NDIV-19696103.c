
#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull ;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef  vector<unsigned long long > vull ;

#define pb push_back
#define mp make_pair
#define X first
#define Y second

#define rep(i,n) for(ull i=0;i<(n);i++)
#define Rep(i,a,b) for(ull i=(a);i<(b);i++)
#define wh(t) while(t--)
#define all(x) (x).begin(),(x).end()


#define MOD 1000000007
#define sz 32000
vector<int> primes;
bool p[sz];
void sieve(){


    ll i,j,c=0;
    primes.clear();
    memset(p,true,sizeof(p));  
    for(i=2;i<=sz;i++){
          if(p[i]==true){
       
    primes.push_back(i);        
    
        for(j=i*i;j<sz;j+=i){
            p[j]=0;
        }
    }
    }
}




int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    sieve();
    
    ull a,b,n,c=1,k,ans=0;
    cin>>a>>b>>k;
    for(ull j=a;j<=b;j++){
        n=j;
        map<int,int> mp;
        for(ull i=0;primes[i]*primes[i]<=j;i++){
              while(n!=1&&n%primes[i]==0){
                n/=primes[i];
                mp[primes[i]]++;
             }    
        }
        if(n!=1)
        mp[n]++;
        c=1;
        for(auto x:mp){
            c*=(x.Y+1);
        }
        if(c==k)
            ans++;
       // cout<<j<<" "<<c<<endl;
    }
    cout<<ans<<endl;
    return 0;
}
