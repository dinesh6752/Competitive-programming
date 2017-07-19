#include<bits/stdc++.h>
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
#define repr(i,n) for(int i=(n-1);i>=0;i--)
#define wh(t) while(t--)
#define all(x) (x).begin(),(x).end()
 
#define MOD 1000000007
#define PI  #define PI 3.14159265358979
#define endl '\n'
 
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,q[4],x;
	cin>>t;
	wh(t)
	{
		cin>>n>>q[0]>>q[1]>>q[2]>>q[3];
		vll a;
		int neg=0;
		ll tmp,m;
		rep(i,n)
		{
			cin>>x;
			if(x!=q[0]&&x!=q[1]&&x!=q[2]&&x!=q[3])
			a.pb(x);
			else
			a.pb(LLONG_MIN);
		}
		
		rep(i,n)
		{
			if(a[i]<0)
			neg++;
		}
		if(neg==n)
		{
			cout<<*max_element(all(a))<<"\n";
		}
		else
		{
			tmp=m=0;
			rep(i,n)
			{	tmp+=a[i];
				if(tmp<0)
				tmp=0;
				else if(tmp>m)
				m=tmp;
			}
			cout<<m<<"\n";
		}
	}
	
	return 0;
} 
