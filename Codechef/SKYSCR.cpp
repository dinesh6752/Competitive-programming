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
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ull t,n,m;
	cin>>t;
	tc(t){
		cin>>n>>m;
		if(m>n)
		m^=n^=m^=n;
		cout<<(n-m)<<"\n";
	}	
} 
