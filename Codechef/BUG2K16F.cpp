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
 
inline int sd()
{
	register char c=getchar_unlocked();
	ull n=0;
	while(c<'0'||c>'9') c=getchar_unlocked();
	for(;c>='0'&&c<='9';c=getchar_unlocked())
	n=(n<<1)+(n<<3)+(c-'0');
	return n;
}
 
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
	putchar_unlocked('\n');
}
 
 
bool subsetSum(vector<int>& a,int n,int sum){
 
	bool dp[n+1][sum+1];
	memset(dp,0,sizeof(dp));
 
	for(int i=0;i<=n;i++)
		dp[i][0]=1;
 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=sum;j++){
			if(j>=a[i-1])
			{
				dp[i][j]=dp[i-1][j]||dp[i-1][j-a[i-1]];
			}
			else
				dp[i][j]=dp[i-1][j];
		}
		
	}
	return dp[n][sum];
}
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,k;
	cin>>t;
	wh(t){
		cin>>n>>k;
		vi a(n);
		rep(i,n){
			cin>>a[i];
		}
		cout<<(subsetSum(a,n,k)?"YES!\n":"NO!\n");
			
	}
	return 0;
} 
