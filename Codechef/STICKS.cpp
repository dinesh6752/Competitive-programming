#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,x,i;
	cin>>t;
	while(t--)
	{
		int a[1002]={0},flag=1,area=1;	
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>x;
			a[x]++;
			
		}
		for(i=1001;i>0;i--)
		{
 			
			if(a[i]>=2)
			{
				if(flag>2)
				break;
				
				if(a[i]>=4&&flag==1)
			{
			
				area=i*i;
				flag=3;
				break;
			}
					area*=i;
					flag++;
					
					
				}
			
			
			
		}
		if(flag<3)
		cout<<-1<<"\n";
		else
		cout<<area<<"\n";
		
		
		
	}
 
} 
