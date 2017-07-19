#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef  vector<unsigned long long > vull;
#define rep(i,n) for(int i=0;i<(n);i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define repr(i,n) for(int i=(n-1);i>=0;i--)
#define tc(t) while(t--)
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m,c,t;
	cin>>t;
	tc(t){
		bool yes=false,yes2=false;
		c=0;
		cin>>n;
		ll a[n];
		rep(i,n)
			cin>>a[i];
		cin>>m;
		ll s[m];
		rep(i,m)
			cin>>s[i];
		rep(i,n){
	
				if(s[c]==a[i])
				c++;
				if(c==m)
					break;
			}
			
				
			
			
			if(c==m)
				cout<<"Yes\n";
			else
				cout<<"No\n";	
		}	
} 
