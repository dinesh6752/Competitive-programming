#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef  vector<unsigned long long > vull;
#define rep(i,n) for(int i=0;i<(n);i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define repr(i,n) for(int i=(n-1);i>=0;i--)
#define tc(t) while(t--)
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,k,c=0,z=0;
	cin>>n>>k;
	vi a(n+1);
	Rep(i,1,n+1){
		cin>>a[i];
	}
		Rep(i,k+1,n+1){
		if(i<=n&&a[i]==a[k])
		c++;
		else
		break;
	}
//	cout<<k<<c;
	Rep(i,1,k+c+1){
		if(a[i]<=0)
		z++;
	}	
		cout<<k+c-z;

}