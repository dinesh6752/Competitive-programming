#include<iostream>
using namespace std;
int main()
{
    int t,f=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        f=1;
        for(int i=1;i<=n;i++)
        {
            f*=i;
        }
        cout<<f<<endl;
    }
}
 
