#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef  vector<unsigned long long > vull;
 
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
 
#define rep(i,n) for(int i=0;i<(n);i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define repr(i,n) for(int i=(n-1);i>=0;i--)
#define wh(t) while(t--)
#define all(x) (x).begin(),(x).end()
 
#define MOD 1000000007 
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,k;
	cin>>t;
	wh(t)
	{
		long double s=0;
		cin>>n>>k;
		vi a(n);
		rep(i,n)
		{
			cin>>a[i];
		}
		sort(all(a));
		Rep(i,k,n-k)
		{
			s+=a[i];
		}
		//cout<<"\nsum is"<<s<<" \n";
		cout<<fixed<<setprecision(6)<<s/(n-(2*k))<<"\n";
	}
} 
