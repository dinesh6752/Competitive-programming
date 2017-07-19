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
	int t,n,k=1;
	cin>>t;
	wh(t){
		cin>>n;
		std::vector<string> a(n);
		rep(i,n)
		cin>>a[i];
		map<string,std::vector<string> > m;
		rep(i,n){
			string s;
			s.pb(a[i][a[i].size()-3]);
			s.pb(a[i][a[i].size()-2]);
			s.pb(a[i][a[i].size()-1]);
			//cout<<s<<"str\n";
			m[s].pb(a[i]);
			sort(all(m[s]));
		}
		map<string,std::vector<string> >::iterator it;
		int i=1;
		cout<<"Case : "<<k<<'\n';
	for(it=m.begin();it!=m.end();it++){
 
		rep(i,(it->Y).size())
		{
			cout<<it->Y[i]<<" ";
		}
		cout<<endl;
		//cout<<it->X;
		//cout<<endl;
 
	}
	
k++;
	}
	return 0;
} 
