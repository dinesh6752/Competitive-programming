#include<iostream>
using  namespace std;
int main()
{

    long int t,a,n=0;
    cin>>t;
    while(t--)
    {
        cin>>a;
        n=0;
        while(a/5>0)
        {
            n+=a/5;

            a=a/5;
        }
        cout<<n<<endl;

    }
}
