#include <bits/stdc++.h>
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
#define wh(t) while(t--)
#define all(x) (x).begin(),(x).end()
#define sz(a) a.size()
 
#define MOD 1000000007
 
 
 
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int t;
	cin>>t;
	wh(t){
		int n;
		cin>>n;
		vi a(2*n+1);
		Rep(i,1,2*n+1)
		cin>>a[i];
		sort(all(a));
		cout<<a[n+((n+1)/2)]<<endl;
		Rep(i,1,n+1){
			cout<<a[i]<<" "<<a[n+i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
 
