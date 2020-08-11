#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         int arr[n];
         int sum=0;
         for(int i=0;i<n;i++)
         {
             cin>>arr[i];
             sum+=arr[i];
         }
         sum=sum/2;
         bool t[n+1][sum+1];
         for(int i=0;i<n+1;i++)
         {
             for(int j=0;j<sum+1;j++)
             {
                 if(j==0)
                 {
                     t[i][j]=true;
                 }
                 if(i==0)
                 {
                     t[i][j]=false;
                 }
             }
         }
         for(int i=1;i<n+1;i++)
         {
             for(int j=1;j<sum+1;j++)
             {
              if(arr[i]<=j)
              {
                  t[i][j]=t[i][j-arr[i-1]]||t[i-1][j];
              }
              else
              {
                  t[i][j]=t[i-1][j];
              }
             }
         }
         if(t[n][sum]==true)
         {
             cout<<"YES"<<endl;
         }
         else
         {
             cout<<"NO"<<endl;
         }
         
     }	//code
	return 0;
}
