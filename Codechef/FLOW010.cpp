#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    char c;
    cin>>t;
    while(t--)
    {
        cin>>c;
 
        switch(c)
        {
            case 'b':
            case 'B':
                cout<<"BattleShip\n";
                break;
            case 'c':
            case 'C':
                cout<<"Cruiser\n";
                break;
            case 'd':
            case 'D':
                cout<<"Destroyer\n";
                break;
            case 'f':
            case 'F':
                cout<<"Frigate\n";
                break;
 
 
        }
    }
}
 
