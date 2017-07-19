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
	int t,g,n,I,q;
	cin>>t;
	wh(t)
	{
		cin>>g;
		wh(g)
		{
			int c=0;
			cin>>I>>n>>q;
			if(n&1)
			{
				if(I==1)
				{
					if(q==2)
					c=n/2+1;
					else
					c=n/2;
				}
				else
				{
					if(q==1)
					c=n/2+1;
					else
					c=n/2;
				}
			}
			else
				c=n/2;
			/*while(n)
			{
				if(n&1)
				{
					if(I==1)
					q==2?c++:0;
					else
					q==1?c++:0;
					
				}
				else
				q==I?c++:0;
				n--;
			}*/
			cout<<c<<"\n";
		}
	}
	
} 
