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
	int t,n;
	cin>>t;
	wh(t)
	{
		string s;
		bool lap=true;
		int f[26]={0},l[26]={0};
		cin>>s;
		n=s.size();
		rep(i,n/2)
		f[s[i]-'a']++;
		if(n&1)
		{
			Rep(i,(n/2)+1,(n))
			l[s[i]-'a']++;
		}
		else
		{
			Rep(i,(n/2),(n))
			l[s[i]-'a']++;
		}
		rep(i,26)
		{
			if(l[i]!=f[i])
			{
				lap=false;
				break;
			}
		}
		lap?cout<<"YES\n":cout<<"NO\n";
	}
} 
