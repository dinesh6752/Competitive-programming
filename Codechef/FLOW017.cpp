#include<iostream>
using namespace std;
int main()
{
 
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,m2;
        cin>>a>>b>>c;
 
        m2=(a>b&&a<c||a<b&&a>c)?a:((b>a&&b<c||b<a&&b>c)?b:c);
        cout<<m2<<endl;
 
    }
 
}
 
