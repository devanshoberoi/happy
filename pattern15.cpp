#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"Rows = ";
    cin>>n;
    cout<<1<<endl;
    for(i=2;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1)
            cout<<i;
            else if(j==i)
            cout<<i;
            else
            cout<<0;
        }
        cout<<endl;
    }
return 0;
}