#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int t,i,n,d;
	register char c;
	cin>>t;
	getchar_unlocked();
	while(t--)
	{
	bool a[10]={false};
	d=0;
		while((c=getchar_unlocked())!='\n')
		{
			n=c-'0';
			a[n]=true;
		}
		for(i=0;i<10;i++)
		{
			if(a[i]==true)
			d+=i;
		}
		cout<<d<<"\n";
	}
	
} 
