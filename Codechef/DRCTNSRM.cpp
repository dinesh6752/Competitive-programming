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
		int ns=0,ew=0;
		string s;
		cin>>s;
		rep(i,s.size())
		{
			if(s[i]=='N')
			ns++;
			if(s[i]=='S')
			ns--;
			if(s[i]=='E')
			ew++;
			if(s[i]=='W')
			ew--;
		}
		if(ns>0&&ew==0)
		cout<<"NORTH\n";
		if(ns<0&&ew==0)
		cout<<"SOUTH\n";
		if(ns==0&&ew>0)
		cout<<"EAST\n";
		if(ns==0&&ew<0)
		cout<<"WEST\n";
		if(ns>0&&ew>0)
		cout<<"NORTHEAST\n";
		if(ns>0&&ew<0)
		cout<<"NORTHWEST\n" ;
		if(ns<0&&ew>0)
		cout<< "SOUTHEAST\n";
		if(ns<0&&ew<0)
		cout<< "SOUTHWEST\n";
	}
	
} 
