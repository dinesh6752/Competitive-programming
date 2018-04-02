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

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007 
     


     bool isV(char c){
     	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y'){
     		return 1;

     	}
     	return 0;
     }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vll a(n);
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    }

    sort(a.begin(), a.end());
    vll b(n),c(n);
    for (int i = 0; i < n; ++i)
    {
    	b[i]=a[i]-1;
    	c[i]=abs(1000000-a[i]);
    }


    ll ans=INT_MAX;
    for (int i = 1; i < n; ++i)
    {
    	ans=min(min(max(b[i-1],c[i]),max(b[i],c[i-1])),ans);
    }


    cout<<min({ans,a[n-1]-1,1000000-a[0]});


}