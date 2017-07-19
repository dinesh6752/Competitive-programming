#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t,n,m,k,i,j;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>k;
		i=abs(n-m)-k;
		if(i<0)
		cout<<"0\n";
		else
		cout<<i<<"\n";
	}
 
}
	
 
 
	
 
