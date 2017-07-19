#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef  vector<unsigned long long > vull;
 
#define pb push_back
#define mp make_pair
 
#define rep(i,n) for(int i=0;i<(n);i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define repr(i,n) for(int i=(n-1);i>=0;i--)
#define tc(t) while(t--)
#define all(x) (x).begin(),(x).end()
 
#define MOD 1000000007 
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,maxIndex,max;
	cin>>t;
	tc(t){
		cin>>n;
		vi l(n);
		vi r(n);
		rep(i,n)
		cin>>l[i];
		rep(i,n)
		cin>>r[i];
		max=0;
		maxIndex=0;
		rep(i,n){
			if(l[i]*r[i]>max){
				max=l[i]*r[i];
				maxIndex=i;
				}
				if(l[i]*r[i]==max){
						if(r[i]>r[maxIndex]){
						max=l[i]*r[i];
						maxIndex=i;
						}
					}
			}
				cout<<maxIndex+1<<"\n";
		}	
 
} 
