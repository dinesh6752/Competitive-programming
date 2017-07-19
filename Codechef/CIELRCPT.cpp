#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,j,val,cnt,t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cnt=0;
        val=n;
        for(i=12;i>=1;i--)
        {
            if(pow(2,i-1)<=val)
            {
                if((val-pow(2,i-1)>=0))
                {
                    cnt++;
 
                  // cout<<"cout"<<cnt<<endl;
                   //cout<<(pow(2,i-1))<<endl;
 
                    val-=pow(2,i-1);
                    i++;
                    //cout<<val<<endl;
                }
 
            }
        }
        cout<<cnt<<"\n";
    }
}
 
