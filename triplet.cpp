#include <iostream>
using namespace std;
int main()
{
	long long int n,a[100000],count=0,t;
	
	cin>>t;
	for(long long int l=0;l<t;l++)
	{
		cin>>n;
	for(long long int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	count=0;
	for(long long int i=0;i<n-2;i++)
	{
		for(long long int j=i+1;j<n-1;j++)
		{
			for(long long int k=j+1;k<n;k++)
			{
			if((a[i]*a[j]==a[k])||(a[i]*a[k]==a[j])||(a[j]*a[k]==a[i]))
				count++;

			}
		}
	}
	if(count!=0)
		cout<<"Case "<<l<<"#:"<<count<<endl;
	else
		z
}
}
