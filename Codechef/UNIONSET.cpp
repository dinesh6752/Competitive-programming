#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef  vector<unsigned long long > vull;
 
#define pb push_back
#define mp make_pair
#define X first
#define Y second
 
#define rep(i,n) for(int i=0;i<(n);i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define wh(t) while(t--)
#define all(x) (x).begin(),(x).end()
#define sz(a) a.size()
 
#define MOD 1000000007
 
 
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	#endif	
	ll t;
	cin>>t;
	wh(t){
	ll n,k;
	cin>>n>>k;
	std::vector<ll> a;
	std::vector<std::vector<int > > arr;
	rep(foo,n){
		ll len,x=0,temp;
		std::vector<int> v;
		cin>>len;
		rep(i,len){
			cin>>temp;
			v.pb(temp);
			
		}
		
		sort(all(v));
		arr.pb(v);
	}
	ll xr=0;
	ll loop=0;
	ull pairs=0;
		rep(i,sz(arr)){
			Rep(j,i+1,sz(arr)){
				ll ic=0;
				loop++;
 
				rep(I,sz(arr[i])){
					
					if(binary_search(all(arr[j]),arr[i][I])){
					
						ic++;
					}
				}
 
				if(sz(arr[i])+sz(arr[j])-ic==k){
					
					pairs++;
				}
			}
		}
		
		cout<<pairs<<endl;
	}	
 
}
 
