#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter = ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<"    ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<i+j-1<<"    ";
        }
        for(j=1;j<i;j++)
        {
            int a=(2*i)-1-j;
            cout<<a<<"    ";
        }
        cout<<endl;
    }
    
return 0;
}