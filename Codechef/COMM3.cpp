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
	int t;
	double k,d[3],x[3],y[3];
	
	cin>>t;
	tc(t){
		
		int c=0;
		cin>>k;
		rep(i,3){
			cin>>x[i]>>y[i];
			}
		d[0]=sqrt(pow((x[0]-x[1]),2)+pow((y[0]-y[1]),2));	
		d[1]=sqrt(pow((x[0]-x[2]),2)+pow((y[0]-y[2]),2));
		d[2]=sqrt(pow((x[1]-x[2]),2)+pow((y[1]-y[2]),2));
		rep(i,3){
			if(d[i]>k)
			c++;
		}
		if(c<=1)
		cout<<"yes\n";
		else
		cout<<"no\n";
		
		
		}
			
		
} 
