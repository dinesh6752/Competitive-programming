#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t,n,c,x,flag;
 
 
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=0;
         vector<int> a,check;
        while(n--)
        {
            cin>>x;
            a.push_back(x);
        }
        for(int i=0;i<a.size();i++)
        {
            c=0;
            for(int j=0;j<a.size();j++)
            {
                if(a[i]==a[j])
                    c++;
 
            }
 
                if(c%2!=0)
                {
                  cout<<a[i]<<"\n";
                  break;
                }
 
        }
 
 
 
 
    }
}
 
