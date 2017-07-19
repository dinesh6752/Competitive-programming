#include <bits/stdc++.h>
using namespace std;
#define sz 100000
#define pb push_back
 
typedef unsigned long long ll;
 
ll p[sz];
 
vector<int>primes;
 
void sieve(){
 
 
    ll i,j,c=0;
    primes.clear();
   
    for(i=2;i<=sz;i++){
 
        if(p[i]==0){
 
    primes.push_back(i);        
    
        for(j=i;j*i<sz;j++){
            p[j*i]=1;
        }
    }
    }
}
 
 
ll factorsSum(ll n){
    ll sum=1,i=0;
    map<ll,ll> mp;
    for(i=0;i<primes.size();i++){
    while(n!=1&&n%primes[i]==0){
        
        
            n/=primes[i];
            mp[primes[i]]++;
        
 
    }
 
}
if(n!=1){
 
	sum*=(n+1);
}
    for(auto x:mp){
//    	cout<<x.first<<" g"<<x.second;
        sum*=((pow(x.first,x.second+1)-1)/(x.first-1));
    }
    return sum;
 
}
 
 
/*ll factorsSum(ll n){

    ll i,j,c=0;
    for(i=1;i*i<=n;i++){
        if(n%i==0){
            c+=i;
            if(i!=(n/i))
                c+=(n/i);
        }
    }
    return c;
}*/
 
int main(){
 sieve();
    ll t,n;
    cin>>t;
    while(t--){
 
        cin>>n;
        cout<<factorsSum(n)<<endl;
    }
} 
