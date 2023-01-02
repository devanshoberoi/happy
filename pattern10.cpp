#include<iostream>
using namespace std;
int main()
{
    int i,j,n,sum=1;
    cout<<" Enter number of rows ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=5;j++)
        {
            cout<< i*10 + sum;
            sum++;
        }
        cout<<endl;
        sum=1;
    }
}