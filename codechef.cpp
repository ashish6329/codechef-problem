#include<iostream>
using namespace std;
int digitsum(long int n)
{
    long int r,sum=0;
	while(n!=0)
	{
		r=n%10;
		sum+=r;
		n=n/10;
	}
	return sum;
}
int main()
{
	 long int d;
	long int n;
	long int n1,r,n2;
	cin>>n1;
for(long int i=0;i<n1;i++)
	{
		long int count=1;

		cin>>n>>d;
	
		
        while(d!=r)
        {
		n2=n+d;
		r=digitsum(n2);
		n=n2;
		count++;

	    }
	  
	    
	    cout<<d<<" "<<count;
	}
		

	  //  return 0;
}