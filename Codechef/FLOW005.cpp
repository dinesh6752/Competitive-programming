#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a[]={1,2,5,10,50,100},n,cnt,i;
    cin>>t;
    while(t--)
    {
        cnt=0;
        i=5;
        cin>>n;
        while(n>0)
        {
            if(n>=a[i])
            {
                n-=a[i];
                cnt++;
            }
            else
                i--;
        }
 
    cout<<cnt<<"\n";
}
}
 
