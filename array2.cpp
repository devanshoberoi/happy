#include<iostream>
using namespace std;
int main()
{
    int n,i,sum,count,b,r,add=0;
    cout<<"enter num = ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cout<<"enter a = ";
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        b=a[i];
        while(b!=0)
        {
        r=b%10;
        sum=sum*10+r;
        b=b/10;
        }
        if(sum==a[i])
        {
            add=add+a[i];
        }
    }
    cout<<"sum of palindroms = "<<add;
    return 0;

}