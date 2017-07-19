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
	int t;
	cin>>t;
	string a,b;
	wh(t)
	{
		bool ans=false;
		int  A[27]={0},B[27]={0};
		cin>>a>>b;
		rep(i,a.size())
		A[a[i]-'a']++;
		rep(i,b.size())
		B[b[i]-'a']++;
		rep(i,26)
		{
			if(A[i]>0&&B[i]>0)
			{
				ans=true;
				break;
			}
		}
		ans?cout<<"Yes\n":cout<<"No\n";
	}
} 
