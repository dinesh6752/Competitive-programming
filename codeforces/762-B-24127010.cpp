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
	int a,b,C,n,u,p;
	u=p=0;
	ull x,c=0,k=0;;
	string s;
	vi A,B;
	cin>>a>>b>>C>>n;
	map<string,vull> m;
	wh(n){
		cin>>x>>s;
		m[s].pb(x);
	}
	sort(all(m["USB"]));
	sort(all(m["PS/2"]));
	for(int i=0;i<m["USB"].size()&&(a);i++){
		a--;
		c=c+m["USB"][i];
		u++;
		k++;
	}
	for(int i=0;i<m["PS/2"].size()&&(b);i++){
		b--;
		c=c+m["PS/2"][i];
		p++;
		k++;
	}
	wh(C){
		if(u<m["USB"].size()&&p<m["PS/2"].size())
		{
			if(m["USB"][u]<m["PS/2"][p])
			{
				c=c+m["USB"][u];		
				u++;
				k++;
			}	
			else
			{
				c=c+m["PS/2"][p];	
				p++;
				k++;
			}
		}
		else if(u<m["USB"].size()){
			c=c+m["USB"][u];		
				u++;
				k++;
		}
		else if(p<m["PS/2"].size()){
			c=c+m["PS/2"][p];	
				p++;
				k++;
		}

		
			}
			cout<<k<<" "<<c;

	return 0;
}