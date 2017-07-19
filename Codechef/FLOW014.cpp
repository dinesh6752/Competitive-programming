#include<iostream>
using namespace std;
int main()
{
	int T,tc,cc,hc;
	float t,h,c;
	cin>>T;
	while(T--)
	{
		cin>>h>>c>>t;
		tc=hc=cc=0;
		if(t>5600)
		tc=1;
		if(c<0.7)
		cc=1;
		if(h>50)
		hc=1;
				if(tc&&cc&&hc)
		cout<<10<<"\n";
			else	if(hc==1&&cc==1&&tc==0)
		cout<<9<<"\n";
			else	if(hc==0&&cc==1&&tc==1)
		cout<<8<<"\n";
			else	if(hc==1&&cc==0&&tc==1)
		cout<<7<<"\n";
			else	if(hc||cc||tc)
		cout<<6<<"\n";
			else	if(hc==0&&cc==0&&tc==0)
		cout<<5<<"\n";
		
		
	}	
} 
