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
#define sz(a) a.size()
 
#define MOD 1000000007
#define PI 3.14159265358979
#define endl '\n'
 
 
 
inline void pd(ull n)
{
	char c[20];
	int i=0;
	do
	{
	c[i++]=n%10+'0';
	n/=10;
	}while(n!=0);
	i--;
	while(i>=0)
	putchar_unlocked(c[i--]);
	putchar_unlocked(' ');
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n;
	cin>>t;
	wh(t)
	{
		cin>>n;
		vi a(n),dp(n,1);
		
		rep(i,n)
		cin>>a[i];
		for(int i=n-1;i>0;i--)
		{
		//cout<<a[i]<<a[i-1];
			if(a[i]<0&&a[i-1]>0)
			{
				
				dp[i-1]=dp[i]+1;
			}
			else if(a[i]>0&&a[i-1]<0)
			{
				dp[i-1]+=dp[i];
				
			}
		}
		rep(i,n)
		cout<<dp[i]<<" ";
		cout<<"\n";
	}
	
	return 0;
} 
