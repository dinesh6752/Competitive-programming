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
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ull n,m,cmin,cmax,cost,ans=0,x,y,z,c=0;
	vector<pair<ull,pair<ull,ull> > > a;
	cin>>n>>m;
	rep(i,m){
		cin>>x>>y>>z;
		ans=ans+(x*z);
		c+=x;
		a.pb(mp(z,mp(x,y)));
	}
	sort(all(a));
	
	int rem;
	//cout<<ans<<endl;
	for(int i=0;i<m&&c<=n;i++){
		//cout<<ans<<c<<" "<<rem<<endl;
		rem=((a[i].Y.Y)-a[i].Y.X);
		if(rem+c<=n){
			
			ans=ans+(a[i].X*rem);
			c=c+rem;
	//		cout<<ans<<c<<" y "<<rem<<endl;
		}
		else
		{
			
			ull extra=(rem+c)-n;
			ans=ans+(a[i].X*(rem-extra));
			c=c+(rem-extra);
	//		cout<<ans<<c<<" z "<<rem<<extra<<endl;
		}
	
	}
 
	cout<<ans;
	return 0;
} 
