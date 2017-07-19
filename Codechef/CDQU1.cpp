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
#define SIZE 5000001
vector<bool> primes(SIZE);
inline int sd()
{
	register char c=getchar_unlocked();
	int n=0;
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
void sieve()
{
	rep(i,SIZE+1)
	primes[i]=1;
	Rep(i,2,sqrt(SIZE)+1)
	{
		if(primes[i]==1)
		{
			for(int j=2;i*j<=SIZE;j++)
			{
				primes[i*j]=0;
			}
		}
	}
}
vull sum(SIZE);
void primeSum()
{
	Rep(i,2,SIZE+1)
	{
		if(primes[i])
		sum[i]+=i;
		sum[i]+=sum[i-1];
	}
} 
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int t,n,m;
	t=sd();
	sieve();
	primeSum();
	wh(t)
	{
		m=sd();
		n=sd();
		m=min(m,n);
		n=max(m,n);
		//rep(i,100)
		//pd(sum[i]);
		pd(sum[n]-sum[m-1]);
	}
	
	return 0;
} 
