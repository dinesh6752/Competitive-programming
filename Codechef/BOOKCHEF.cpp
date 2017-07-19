#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef  vector<unsigned long long > vull;
#define pb push_back
#define rep(i,n) for(int i=0;i<(n);i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define repr(i,n) for(int i=(n-1);i>=0;i--)
#define tc(t) while(t--)
bool foo(const pair<string,int>& a,const pair<string,int>& b){
	return a.second>b.second;
	}
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m,f,p,x;
	string s;
	cin>>n>>m;
	set<int> special;
	rep(i,n){
		cin>>x;
		special.insert(x);
		}
		
	vector<pair<string,int> > a;
	rep(i,m){
		cin>>f>>p>>s;
		if(special.count(f))
			a.pb({s,(int)1e9+p});
		else
			a.pb({s,p});
		}
		sort(a.begin(),a.end(),foo);
	rep(i,m)
		cout<<a[i].first<<"\n";		
} 
