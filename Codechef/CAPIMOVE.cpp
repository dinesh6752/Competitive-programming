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
	int t;
	cin>>t;
	while(t--){
		int n,x,y,j;
		cin>>n;
		std::vector<map<int,bool> > l(n+1);
		std::vector<pair<int ,int>  > a(n);
		rep(i,n){
			cin>>a[i].X;
			a[i].Y=i+1;
		}
		
		sort(a.rbegin(),a.rend());
		rep(i,n-1){
			cin>>x>>y;
			l[x][y]=true;
			l[y][x]=true;
		}
		/*rep(i,n){
			for(map<int,bool> ::iterator it=l[i].begin();it!=l[i].end();it++)
				cout<<it->first;
			cout<<endl;
 
		}*/
		
		rep(i,n){
			
			for(j=0;j<n;j++){
				if(i+1!=a[j].Y&&l[i+1].count(a[j].Y)==0){
					cout<<a[j].Y<<" ";
					break;
				}
			}
			if(j==n){
				cout<<"0 ";
			}
			
		}
		cout<<endl;
	}
	return 0;
} 
