#include<iostream>
using namespace std;
int main()
{
 
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        char res;
        res=a>b?'>':((a<b)?'<':'=');
        cout<<res<<endl;
    }
}
 
