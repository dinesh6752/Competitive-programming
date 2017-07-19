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
	int t,n,x;
	cin>>t;
	wh(t)
	{
		int a[100001]={0};
		cin>>n;
		rep(i,n)
		{
			cin>>x;
			a[x]++;
		}
		rep(i,100001)
		{
			if(a[i]!=2&&a[i]!=0){
			cout<<i<<"\n";
			break;
			}
		}
	}
	return 0;
}
 
 
 
 
 
