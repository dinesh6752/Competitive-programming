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
	ull n,t;
	cin>>t;
	wh(t){
		cin>>n;
		vull a(n),b(n);
		ull x=0,y=0;
		rep(i,n){
			cin>>a[i];
		}
		rep(i,n){
			cin>>b[i];
		}
		rep(i,n){
			if(i&1){
				x+=a[i];
			}
			else
				x+=b[i];
		}
		Rep(i,1,n+1){
		if(i&1){
				y+=a[i-1];
			}
			else
				y+=b[i-1];	
		}
		//cout<<x<<"ff "<<y<<endl;
		cout<<min(x,y)<<endl;
	}
	return 0;
 
}
	 
