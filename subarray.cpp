#include<iostream>
using namespace std;
int subarray(int arr[],int n,int sum)
{
int currarr,i,j;
for(i=0;i<n;i++)
{
        currarr=arr[i];
        for(j=i+1;j<=n;j++)
        {
                if(currarr==sum)
                {
                        cout<<"the sum found between"<<i<<"&"<<j-1;
                          return 1;
                 }
                 if(currarr>sum || j==n)
                 break;
                 currarr=currarr+arr[j];
           }
  }
        

return 0;
}
int main()
{
        int arr[10],i,n,sum;
        cout<<"enter the size of array"<<endl;
        cin>>n;
        for(i=0;i<n;i++)
        {
        cin>>arr[i];
        }
        cout<<"enter sum"<<endl;
        cin>>sum;
        subarray(arr,n,sum);
        return 0;
}
// tutor horizon done
//1 easy
//logObjective: Given a number n, write a program to calculate Log2n without using built-in function.


0
//Find the Circumference of a Circle – Java Program



///
