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
	int t,a,b,c;
	string  s;
	bool ans,lead;
	cin>>t;
	wh(t)
	{
		a=b=c=0;
		lead=false;
		ans=false;
		cin>>s;
		rep(i,s.size())
		{
			if(s[i]=='1')
			a++;
			else
			b++;
			if(abs(a-b)==2&&lead)
			{
				ans=(a>b?true:false);
				break;
			}
			if(!lead&&(a==11||b==11))
			{
				a==11?ans=true:ans=false;
				
				break;			
			}
			if(a==10&&b==10)
			{
				lead=true;
				
			}	
		}
		ans?cout<<"WIN\n":cout<<"LOSE\n";
	}
} 
