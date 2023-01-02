#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0,count;
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
        
        count=0;
         if(a[i]==1)
            count++;
        for(int j=2;j<a[i];j++)
        {
           
            if(a[i]%j==0)
            count++;
        }
        if(count==0)
        sum=sum+a[i];
    }
    cout<<"sum of primes ="<<sum;
    return 0;

}