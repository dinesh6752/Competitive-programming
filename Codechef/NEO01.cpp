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
	#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	#endif	
	ll t,n,x;
	cin>>t;
	wh(t){
		cin>>n;
		vll a,b;
		ll neg=0,pos=0,c=0;
		rep(i,n){
			cin>>x;
			if(x<0){
				neg+=x;
				a.pb(x);
			}
			else{
				pos+=x;
				c++;
			}
		}
		sort(all(a),greater<ll>());
		ll maxh=neg+(pos*c);
		
		rep(i,sz(a)){
			if(((c+1)*(pos+a[i]))+(neg-a[i])>maxh){
				maxh=((c+1)*(pos+a[i]))+(neg-a[i]);
				neg-=a[i];
				pos+=a[i];
				c++;
			}
			else{
				break;
			}
			
		}
		cout<<maxh<<endl;
 
	}
 
}
 
