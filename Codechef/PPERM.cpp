#include <bits/stdc++.h>
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
#define foreach(i, c) for( __typeof( (c).begin() ) i = (c).begin(); i != (c).end(); ++i )
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
#define maxn 5000003
ull prime[maxn]; 
//ull count[maxn];
ull perm[maxn];
void sieve(){
	ull i,j;
	for(i=2;i<maxn;i++){
		if(prime[i]==0){
 
			for(j=i;j*i<maxn;j++){
 
				prime[i*j]=1;
			}
		}
	}
	
	ull pc=1;
	perm[1]=1;
	for(i=2;i<maxn;i++){
		if(prime[i]==0){
			pc++;
			perm[i]=((perm[i-1]%MOD)*(pc%MOD))%MOD;
			
		}
		else
		{
			perm[i]=((perm[i-1]%MOD)*(pc%MOD))%MOD;
		}
	}
 
	/*for(i=2;i<100;i++){
		cout<<perm[i]<<" ";
	}*/
}
 
 
 
 
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	sieve();
	ull t,n,c;
	cin>>t;
	wh(t){
		cin>>n;
		cout<<perm[n]<<endl;
 
	}
 
	return 0;
}
 
