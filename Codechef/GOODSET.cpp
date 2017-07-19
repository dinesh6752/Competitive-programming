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
	ll n,i,j,t;
	cin>>t;
	wh(t){
		cin>>n;
		map<int,int> mp;
		vll a;
		i=3;
		while(a.size()<n){
			//cout<<"inf"<<a.size()<<" "<<n<<endl;
			if(mp[i]==0){
				rep(j,a.size()){
					mp[a[j]+i]=1;
				}
				a.pb(i);
			}
			i++;
		}
		rep(i,sz(a))
		cout<<a[i]<<" ";
		cout<<endl;
	}
 
 
}
 
 
 
