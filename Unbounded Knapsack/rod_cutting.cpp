#include<bits/stdc++.h>
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
         for(int i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         int t[n+1][n+1];
         for(int i=0;i<n+1;i++)
         {
             for(int j=0;j<n+1;j++)
             {
                 if(i==0||j==0)
                 {
                     t[i][j]=0;
                 }
             }
         }
         int length[n];
         for(int i=0;i<n;i++)
         {
             length[i]=i+1;
         }
         for(int i=1;i<n+1;i++)
         {
             for(int j=1;j<n+1;j++)
             {
                if(length[i-1]<=j)
                {
                    t[i][j]=max(t[i-1][j],arr[i-1]+t[i][j-length[i-1]]);
                }
                else
                {
                    t[i][j]=t[i-1][j];
                }
             }
         }
         cout<<t[n][n]<<endl;
     }//code
	return 0;
}
