#include <bits/stdc++.h>
using namespace std;

//LAZY :P

#define T  long t;cin>>t;while(t--)
#define rep(i,n) for(int i=0;i<(n);i++)
#define Rep(i,x,y) for(int i=(x);i<(y);i++)

typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef  vector<unsigned long long > vull;

#define sz(x) (int)x.size()
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()

#define X first
#define Y second

#define MOD 1000000007

#define db1(x) cerr<<#x<<"="<<(x)<<"\n\n"
#define db2(x,y) cerr<<#x<<"="<<(x)<<'\n'<<#y<<"="<<(y)<<"\n\n";
#define db3(x,y,z) cerr<<#x<<"="<<(x)<<'\n'<<#y<<"="<<(y)<<'\n'<<#z<<"="<<(z)<<"\n\n"

void dba(std::vector<ll> &a){
	for(int i=0;i<sz(a);i++)
		cout<<a[i]<<" ";
}
//#define db1(x) (cerr)
//#define db2(x,y) (cerr)
//#define db3(x,y,z) (cerr)
//#define dba(x) 

#define ra(x,n) std::vector<ll> x(n); readArray(x,n)
void readArray(std::vector<ll> &a,ll n){
	for(int i=0;i<n;i++)
		cin>>a[i];
}

void init(){
	//ios_base::sync_with_stdio(0);
	//cin.tie(0);
	#ifndef ONLINE_JUDGE
	//freopen("/home/dinesh/input.txt", "r", stdin);
	#endif
}

map<ull,ull> m;
ull maxCoin(ull n){
	
	if(n==0)
		return 0;
	if(m.count(n)>0){
		
		return m[n];
	}
	
	return m[n]=max(n,maxCoin(n/2)+maxCoin(n/3)+maxCoin(n/4));
}

int main()
{
	init();
	ull n;
	//cin>>n;
	while(scanf("%llu",&n)!=EOF){
		
	cout<<maxCoin(n)<<"\n";
	}
}


