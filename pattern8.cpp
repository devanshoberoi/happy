#include<iostream>
using namespace std;

int main()
{
    int i,j,sum=1,n;
    cout<<"Enter rows = ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for ( j=1; j<=i; j++)
        {
            cout<<sum;
            sum++;
        }
        cout<<endl;
    }
}
