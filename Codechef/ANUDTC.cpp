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
	int n,t;
	cin>>t;
	wh(t)
	{
		cin>>n;
		
	if(360%n==0)
	cout<<"y ";
	else cout<<"n ";
	if(n<=360)
	cout<<"y ";
	else cout<<"n ";
	if((n*(n+1))/2<=360)
	 cout<<"y\n";
	 else cout<<"n\n";
	
 
	}
		 
} 
