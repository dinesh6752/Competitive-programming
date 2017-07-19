 #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int *a=new int[1000000];
        int t,n,i;
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
        cin>>t;
        while(t--)
        {
            cin>>n;
            for(i=0;i<n;i++)
                cin>>a[i];
           sort(a,a+n);
	cout<<a[0]+a[1]<<"\n";
     
        }
    } 
