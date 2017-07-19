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
		string  a;
		stack<char> s;
		cin>>a;
		rep(i,a.size())
		{
			if(a[i]>='a'&&a[i]<='z')
			cout<<a[i];
			else	if(a[i]==')')
					{
						while(s.top()!='(')
						{
							cout<<s.top();
							s.pop();
						}	
						s.pop();
					}
					else
						s.push(a[i]);
		}
		cout<<"\n";
	}
	
} 
