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
 
 
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,f,l;
	string s; 
	cin>>t;
	wh(t)
	{
	
		bool pal=true;
		cin>>s;
		f=0;
		l=sz(s)-1;
		while(f<=l)
		{
			if(f==l&&s[f]=='.')
			s[l]='a';
			else if(s[f]=='.'&&s[l]=='.')
			s[f]=s[l]='a';
			else if(s[f]=='.')
			s[f]=s[l];
			else if(s[l]=='.')
			s[l]=s[f];
			else if(s[l]!=s[f])
			{
				pal=false;
				break;
			}
			f++; l--;
		}
		if(pal)
		cout<<s<<endl;
		else
		cout<<"-1\n";
	}
	return 0;
}
 
 
 
 
