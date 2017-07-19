#include<iostream>
using namespace std;
int main()
{
    int t;
    int n;
    cin>>t;
    while(t--)
    {
        int i,sqr=1;
        cin>>n;
        for(i=1;sqr<=n;i++)
        {
            sqr=i*i;
        }
        cout<<i-2<<endl;
    }
}
 
