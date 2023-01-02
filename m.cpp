#include<iostream>
#include<math.h>
using namespace std;
int main() 
{
	int n,b=1,i,a,c,flag=0;
    cout<<"bbbbbb ";
	cin>>n;
    a=n;
	for(i=0;i<=n;i++)
	{
		b=pow(2,i);
		if(a-b<=0)
		{
			c=i-1;
			flag++;
            break
            
		}
        
    }
    cout<<flag;
		
return 0;
}