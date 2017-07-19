#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef  vector<unsigned long long > vull;
 
#define pb push_back
#define mp make_pair
 
#define rep(i,n) for(int i=0;i<(n);i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define repr(i,n) for(int i=(n-1);i>=0;i--)
#define wh(t) while(t--)
#define all(x) (x).begin(),(x).end()
 
#define MOD 1000000007 
int fact(int n)
{
	int	f=1;
	Rep(i,1,n+1)
	f*=i;
	return f;
}
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int t,n,m,c,val;
	char ch;
	cin>>t;
	wh(t)
	{
		val=c=0;
		cin>>n>>m;
		getchar();
		
		int a[11][11]={0};
		rep(i,n)
		{
		
			rep(j,m)
			{							
				ch=getchar();
				a[i][j]=ch-'0';
			}
			getchar();
		}
		rep(j,m)
		{
			c=0;
			rep(i,n)
			{
			
				if(a[i][j]==1)
				c++;
			}
			//cout<<"c"<<c;
		if(c>1)
		val+=(fact(c)/(2*fact(c-2)));
			
		}
		cout<<val<<"\n";
	
	}
} 
