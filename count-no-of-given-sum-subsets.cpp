#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t,i,j;
        int n;
        cin>>n;
        int a[n];
        int sum;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        cin>>sum;
        int b[n+1][sum+1];
           for(i=0;i<n+1;i++)
           {
           for(j=0;j<=sum+1;j++){
             if(i==0)
             {
                 b[i][j]=0;
             }
             if(j==0)
             {
                 b[i][j]=1;
             }
             
           }
           }
           for(i=1;i<n+1;i++)
           {
           for(j=1;j<sum+1;j++){
             if(a[i-1]<=j)
             {
                b[i][j]=b[i-1][j]+b[i-1][j-a[i-1]];
             }
             else
             {
                 b[i][j]=b[i-1][j];
             }
                
             
           }
           }
       cout<<b[n][sum]<<endl; 
        
	return 0;
}
