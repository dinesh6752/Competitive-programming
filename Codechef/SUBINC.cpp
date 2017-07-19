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
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int t,n;
	t=sd();
	wh(t)
	{
		n=sd();
		vi a(n);
		vi m(n,1);
		rep(i,n)
		{
			a[i]=sd();
		}
		ull c;
		
	/*	BRUTE FORCE
	rep(i,n)
		{
			tmp=0;
			for(j=i+1;j<n;j++)
			{
				if(a[j]>=a[j-1]){
				//cout<<a[i]<<" "<<a[j];
				tmp++;
				}
				else
				break;
			}
			c+=tmp;
		}*/
		Rep(i,1,n)
		{
			if(a[i]>=a[i-1])
			m[i]+=m[i-1];
		}
		c=0;
		rep(i,n)
		c+=m[i];
		pd(c);
	}
	
	return 0;
} 
