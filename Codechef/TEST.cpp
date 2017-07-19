#include<iostream>
using namespace std;
int  main()
{
	 int i=0,n=0,check=0,a[100000];
	while(1)
	{
 
		cin>>a[i];
		n++;
		if(a[i]==42||a[i-1]==42)
		{
			check++;
		}
 
		if(check==2)
        {
            break;
        }
 
		i++;
	}
for(int i=0;i<n;i++)
{
    if(a[i]==42)
        break;
    cout<<a[i]<<endl;
}
}
 
