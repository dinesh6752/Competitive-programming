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
	int t,n;
	cin>>t;
	wh(t){
		string s;
		cin>>n;
		int val=0;
		vector<pair<int,int> > a;
	int	cost[26]={0};
		int c[26]={0};
		//vi a(n);
		rep(i,26)
			cin>>cost[i];
			cin>>s;
			rep(i,sz(s)){
				int x,y;
				pair<int,int> tmp;
				tmp.X=cost[s[i]-'a'];
				tmp.Y=s[i]-'a';
				c[s[i]-'a']++;
				a.pb(tmp);
			}
			sort(a.rbegin(),a.rend());
			a.resize(distance(a.begin(),unique(all(a))));
			/*rep(i,sz(a)){
				cout<<a[i].X<<" "<<(char)(a[i].Y+'a')<< c[a[i].Y]<<endl;
			}*/
			//cout<<"u\n\n";
			int i=0;
			wh(n){
				if(c[a[i].Y]>0)
					c[a[i].Y]--;
				else{
					i++;
					n++;
				}
			}
			/*rep(i,sz(a)){
				cout<<a[i].X<<" "<<(char)(a[i].Y+'a')<< c[a[i].Y]<<endl;
			}*/
			rep(i,sz(a)){
				val+=(cost[a[i].Y]*c[a[i].Y]);
			}
			cout<<val<<endl;
	}
 
 
	return 0;
} 
