#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter = ";
    cin>>n;
    int a[n],i,j,sum=0;
    for(i=0;i<n;i++)
    {
        cout<<"enter a =";
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            sum++;
        }
        if(sum==1)
        {
            cout<<a[i];
        }
    }
    return 0;
}