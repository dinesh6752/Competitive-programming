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
	ull t,x,ye,z,m,o,p,y,r,g;
	cin>>t;
	tc(t)
	{
	m=o=p=ye=r=g=0;
		rep(i,3)
		{
		cin>>x>>y>>z;
		g+=x;
		ye+=y;
		r+=z;
		if(i==0)
		m=x+y+z;
		if(i==1)
		o=x+y+z;
		if(i==2)
		p=x+y+z;
		
		}
		vull v(6);
		v[0]=g;
		v[1]=ye;
		v[2]=r;
		v[3]=m;
		v[4]=o;
		v[5]=p;
		//rep(i,6)
		//cout<<v[i]<<endl;
		//vull iterator r;
		if(*max_element(v.begin(), v.end())==0)
		cout<<"0\n";
	else if(*max_element(v.begin(), v.end())%2==0)
		cout<<*max_element(v.begin(), v.end())-1<<endl;
		else
		cout<<*max_element(v.begin(), v.end())<<endl;
		
		
	}
 
 
} 
