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
#define sz(x) x.size()
 
#define MOD 1000000007
#define PI  #define PI 3.14159265358979
#define endl '\n'
 
 
 
bool subSeq(string a,string b){
 
  //  vi dp(sz(a));
  int tmp;
  bool m,w;
  m=w=false;
int  i=0;
 
      Rep(j,0,sz(b))
	{
	if(a[i]==b[j])
	  {
	       i++;
	   }
	if(i==sz(a))
	  break;
	  
	}
    
      
      if(i==sz(a))
	  m=true;
	
i=0;
 Rep(j,0,sz(a))
	{
	if(b[i]==a[j])
	  {
	       i++;
	   }
	if(i==sz(b))
	  break;
	  
	}
      
 if(i==sz(b))
   w=true;
		
		if(m||w)
		  return true;
		 else
		    return false;
		    
}  
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	string m,w;
	cin>>t;
	wh(t){
	cin>>m>>w;
	if(subSeq(m,w))
	  cout<<"YES\n";
	else
	  cout<<"NO\n";
	}
	return 0;
}
 
