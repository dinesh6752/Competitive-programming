#include<iostream>
using namespace std;
int main()
{
    int T,N,a[100000];
    cin>>T;
    while(T--)
    {
        cin>>N; int fail=0,sum=0,avg=0,fs=0;
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
 
            sum+=a[i];
            if(a[i]==5)
            {
                fs++;
            }
            if(a[i]<=2)
			{
				fail=1;
 
			}
        }
 
 
		avg=sum/N;
		
		if(fail==0&&avg>=4.0&&fs)
		{
		    cout<<"Yes"<<endl;
 
		}
		else
		{
			cout<<"No"<<endl;
		}
 
    }
 
}
 
