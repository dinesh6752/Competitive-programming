
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
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vi a(n);
		for(int i=0;i<n;i++)
		cin>>a[i];
		
//		sort(all(a));
	sort(all(a),greater<int>());
		int l[n];
		int r[n];
		
	
		
		l[0]=true;
		l[1]=true;
		
		for(int i=2;i<n;i++)
		{
			l[i]=(a[i]-a[i-1] == a[i-1]-a[i-2] and l[i-1]);
			
		}
		
		r[n-1]=true;
		r[n-2]=true;
		
		for(int i=n-3;i>=0;i--)
		{
			r[i]=(a[i]-a[i+1] == a[i+1]-a[i+2] and r[i+1]);
		
		}
		
		
		
			int res = 0;
	
			if(r[1])
			res = max(res,a[0]);
			if(r[2] and a[2]-a[0]==a[3]-a[2])
			res = max(res,a[1]);
			
			if(l[n-2])
			res = max(res,a[n-1]);
			
			if(l[n-3] and a[n-4]-a[n-3] == a[n-3]-a[n-1])
			res = max(res,a[n-2]);
			
			
			
	
		
			bool f=0;
			for(int i=2;i<n-2;i++)
			{
				if(l[i-1] and r[i+1] and a[i-1]-a[i-2]==a[i+2]-a[i+1])
				{
					res = max(a[i],res);
					f=1;
 
				}
			}
			
			
			 if (n <= 3) {
			    int re= INT_MAX;
			    for(int i=0;i<n;i++) {
			      re= min(re, a[i]);
			    }
			    cout<<re<<endl;
			  }
			
			else if(res==INT_MAX)
			cout<<-1<<endl;
			else
			cout<<res<<endl;
			
		
	}
	return 0;
	
 
} 
