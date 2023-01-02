#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"rows = ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        if(i==1||i==n)
        {
            for(j=1;j<=n;j++)
            cout<<"*";
        }
        else
        {
        cout<<"*";
        for(j=1;j<=(n-2);j++)
        {
            cout<<" ";
        }
        cout<<"*";
        }
        cout<<endl;
    }

}