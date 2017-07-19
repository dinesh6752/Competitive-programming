#include<iostream>
using namespace std;
int main()
{
    int n,t,m,val,carry,i,j,k,index;
    int a[1000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        a[0]=1;
        m=1;
        for(i=1;i<=n;i++)
        {
            index=0;
            carry=0;
 
            for(j=1;j<=m;j++ )
            {
                val=a[index]*i+carry;
                a[index++]=val%10;
                carry=val/10;
 
            }
            while(carry>0)
            {
                m++;
                a[index++]=carry%10;
                carry=carry/10;
 
            }
        }
        for(int k=m-1;k>=0;k--)
        {
            cout<<a[k];
        }
        cout<<endl;
;
    }
}
 
