    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	unsigned long long n,x,max=0;
    	int i=0,c;
    	vector<unsigned long long> a;
    	cin>>n;
    	for(i=0;i<n;i++)
    	{
    		cin>>x;
    		a.push_back(x);
    	}
    	sort(a.begin(),a.end());
     
    	/*for(i=0;i<n;i++)
    	{
    	c=0;
    		
    		for(int j=0;j<n;j++)
    		{
    			if(a[j]>=a[i])
    			c++;
    		}
    		if(c*a[i]>max)
    		max=a[i]*c;
    		
    	
    	}*/
    	i=1;
    	for(int j=n-1;j>=0;j--)
    	{
    	
    		while(j-1>=0&&a[j-1]==a[j]){
    		i++;
    		j--;
    		}
    		
    			
    		if(a[j]*i>max)
    		max=a[j]*i;
    		i++;
    	}
    	
    	cout<<max;
    	
    } 