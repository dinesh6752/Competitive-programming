#include<iostream>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>s;
    cin>>n;
    string a;
    while(n--)
    {
        cin>>a;
        int flag=0;
        for(int i=0;i<a.size();i++)
        {
            flag=0;
            for(int j=0;j<s.size();j++)
            {
               if(a[i]==s[j])
               {
                   flag=1;
               }
            }
            if(flag==0)
            {
                break;
            }
        }
        if(flag==1)
        {
            cout<<"Yes"<<endl;
 
        }
        else{
            cout<<"No"<<endl;
        }
 
    }
}
 
