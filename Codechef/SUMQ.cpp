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
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	#endif	
	ull t,p,q,r;
	cin>>t;
	wh(t){
		cin>>p>>q>>r;
		ull sum=0;
		vull a(p),b(q),c(r),pa(p),pc(r);
		rep(i,p)
			cin>>a[i];
		rep(i,q)
			cin>>b[i];
		rep(i,r)	
			cin>>c[i];
		sort(all(a));
		sort(all(b));
		sort(all(c));
		pa[0]=a[0];
		pc[0]=c[0];
		Rep(i,1,p){
			pa[i]+=a[i]+pa[i-1];
		}
		Rep(i,1,r){
			pc[i]+=c[i]+pc[i-1];
		}
		ll x=0,y=0;
		ll I=0,J=0;
		rep(i,q){
			
			//cout<<I<<" "<<J<<endl;
			 I=upper_bound(a.begin(),a.end(),b[i])-a.begin();
			 J=upper_bound(c.begin(),c.end(),b[i])-c.begin();
			
		//	cout<<pa[I-1]<<" "<<pc[J-1];
			//cout<<(pa[I-1]+(I*b[i]))*(pc[J-1]+(J*b[i]));
			ull t=(pc[J-1]%MOD+((J%MOD)*(b[i]%MOD))%MOD)%MOD;
			ull s=(pa[I-1]%MOD+((I%MOD)*(b[i]%MOD))%MOD)%MOD;
			if(I-1>=0&&J-1>=0)
			sum=(sum%MOD+(t*s)%MOD)%MOD;
		
		}
		cout<<sum%MOD<<endl;
 
	}
 
}
 
