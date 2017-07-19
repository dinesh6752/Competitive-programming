    #include<iostream>
    using namespace std;
    typedef unsigned long long ull;
    int main ()
    {
       ull t,x,min,n,i;
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);
        cin>>t;
        while(t--)
        {	
    		min=10000000;
    		cin>>n;
    		for(i=0;i<n;i++)
    		{
    			cin>>x;
    			if(x<min)
    			min=x;
    		}
    		cout<<min*(n-1)<<"\n";
    		
     		
     
     
        }
    }  
