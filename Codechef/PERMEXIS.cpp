#include<bits/stdc++.h>
//#define rep(i, a, b) for(int i=int(a);i<int(b); i++)
    using namespace std;
    int main()
    {
       
       int t,a[1000001],n,i;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
        cin>>t;
        while(t--)
        {
            cin>>n;
            bool ok=true;
            for(i=0;i<n;i++)
            cin>>a[i];
            sort(a,a+n);
            for(i=1;i<n;i++)
            {
            	if(abs(a[i-1]-a[i])>1)
            	{
            //	cout<<t<<" "<<a[i-1]-a[i];
            		ok=false;
            		break;
            	}
            }
            ok?cout<<"YES\n":cout<<"NO\n";
			
	
        }
    }
      
