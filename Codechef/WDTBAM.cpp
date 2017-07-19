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
#define tc(t) while(t--)
#define all(x) (x).begin(),(x).end()
#define MOD 1000000007 
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	string x,y;
	cin>>t;
	tc(t){
		ull c=0,n,tmp,amt;
		int m=0;
		
		cin>>n;
		cin>>x>>y;
		rep(i,n){
		
			if(x[i]==y[i])
			c++;
			
		}
		//cout<<c<<"\n ";
 
		vi a(n+1);
		rep(i,n+1){
			cin>>a[i];
			}
			for(int k=0;k<=c&&c!=n;k++)
			m=max(a[k],m);
			
		if(c==n)
		cout<<a[c]<<"\n";
		else
		cout<<m<<"\n";			
			
	}	
} 
