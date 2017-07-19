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
 
#define MOD 1000000007 
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int A,n,k;
	cin>>A>>n>>k;
	vi a(k);
	while(A!=0)
	{
		if(a[0]<n)
		{
			if(A>=n&&a[0]==0){
			a[0]=n;
			A-=n;
			}
			else
			{
				a[0]++;
				A--;
				
			}
			
		}
		else if(a[0]==n)
		{
			a[0]=0;
			A--;
			for(int i=1;i<k;i++)
			{
				if(a[i]<n)
				{
					a[i]++;
					break;
				}
				else if(a[i]==n)
				{
					a[i]=0;
				}
							
			}
					
		}
	}
	rep(i,k)
	cout<<a[i]<<" ";
} 
