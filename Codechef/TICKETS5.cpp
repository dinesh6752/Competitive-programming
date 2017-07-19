#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef  vector<unsigned long long > vull;
 
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
 
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
	int t;
	cin>>t;
	wh(t)
	{
		string a;
		bool lucky=true;
		cin>>a;
		if(a[0]==a[1])
		lucky=false;
		for(int i=2;i<a.size()&&lucky;i=i+2)
		{
			if(a[0]!=a[i])
			{
				lucky=false;
				
			}
		}
		for(int i=3;lucky&&(i<a.size());i=i+2)
		{
			if(a[1]!=a[i])
			{
				lucky=false;
			}
		}
		lucky?cout<<"YES\n":cout<<"NO\n";
		
	}
} 
