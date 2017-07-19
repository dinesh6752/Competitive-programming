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

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int x,y,t,n;
	bool prime;
	cin>>t;
	wh(t)
	{
		
		cin>>x>>y;
		for(int i=x+y+1;;i++)
		{
		prime=true;
			
			for(int j=2;j*j<=i;j++)
			{
				if(i%j==0)
				{
					prime=false;
					break;
				}
				//cout<<j;
			}
			if(prime)
			{
				cout<<i-(x+y)<<"\n";
				break;
			}
		}
	}
}
