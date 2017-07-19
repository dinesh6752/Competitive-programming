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
	int t,n,m,max,min,x;
	cin>>t;
	wh(t){
		cin>>n>>m;
	
		min=INT_MAX;
		max=INT_MIN;	
		wh(m){
			cin>>x;
			if(x>max)
				max=x;
			if(x<min)
				min=x;
		}
		rep(i,n){
			if(abs(i-min)>abs(i-max))
				cout<<abs(i-min)<<" ";
			else
				cout<<abs(i-max)<<" ";
		}
		cout<<endl;
	}
	return 0;
} 
