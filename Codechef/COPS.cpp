#include<bits/stdc++.h>
 
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef  vector<unsigned long long > vull;
 
#define pb push_back
#define rep(i,n) for(int i=0;i<(n);i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define repr(i,n) for(int i=(n-1);i>=0;i--)
#define tc(t) while(t--)
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x,y,m,pos,index;
	cin>>t;
	tc(t){
		int a[100]={0};
		cin>>m>>x>>y;
		rep(i,m){
				cin>>pos;
				pos--;
				index=pos;
					for(int j=0;j<=x*y&&index<100;j++){
						a[index]=-1;
						index++;
					}
					/*rep(k,100){
						cout<<k<<a[k]<<" ";
					}*/
					index=pos;
				for(int j=0;j<=x*y&&index>=0;j++){
						a[index]=-1;
						index--;
					}
									
					/*rep(k,100){
							cout<<k<<a[k]<<" ";
					}*/
				
								
			}
			/*rep(k,100)
				cout<<k<<a[k]<<" ";*/
			cout<<count(a,a+100,0)<<"\n";
		}	
	
} 
