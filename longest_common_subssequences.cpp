#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n,m;
         cin>>n>>m;
         string s1,s2;
         cin>>s1>>s2;
         int dp[n+1][m+1];
         for(int i=0;i<n+1;i++)
         {
             for(int j=0;j<m+1;j++)
             {
                 if(i==0||j==0)
                 {
                     dp[i][j]=0;
                 }
             }
         }
         int maxi=0;
         for(int i=1;i<n+1;i++)
         {
             for(int j=1;j<m+1;j++)
             {
                 if(s1[i-1]==s2[j-1])
                 {
                    dp[i][j]=1+dp[i-1][j-1];
                 }
                 else
                 {
                     dp[i][j]=0;
                 }
                 if(dp[i][j]>maxi)
                 {
                     maxi=dp[i][j];
                 }
             }
         }
         cout<<maxi<<endl;
     }//code
	return 0;
}
