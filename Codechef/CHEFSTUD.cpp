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
	wh(t)
	{
		string s;
		int c=0;
		cin>>s;
		
		rep(i,s.size())
		{
			if(s[i]=='<')
			s[i]='>';
			else if(s[i]=='>')
			s[i]='<';
		}
		//cout<<s;
		for(int i=1;i<s.size();i++)
		{
			if(s[i-1]=='>'&&s[i]=='<')
			c++;
		}
		
		cout<<c<<"\n";
	}
} 
