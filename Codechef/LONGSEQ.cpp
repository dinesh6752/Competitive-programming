#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c=0;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                c++;
            }
        }
        if(c==1||c==s.size()-1)
        {
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
}
 
