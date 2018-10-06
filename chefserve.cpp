#include<iostream>
using namespace std;
main()
{
	long long int  p1,p2,k;
	long int n;
	cin>>n;
	for(long int i=0;i<n;i++)
	{
	cin>>p1>>p2>>k;
	
	long long int sum=0;
	sum=p1+p2;
	long long int s=sum/k;
//}
//for(long int i=0;i<n;i++)
//	{
	
	if(s%2==0)
		cout<<"CHEF"<<endl;
	else
		cout<<"COOK"<<endl;
	}
}