#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t,i,j;
        cin>>t;
       while(t--){
        int n;
        cin>>n;
        int a[n];
        int sum=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            sum=sum+a[i];
        }
        int temp= sum/2;
        int b[n+1][temp+1];
       for(i=0;i<=n;i++){
           
           for(j=0;j<=temp;j++){
               
               if(j==0||i==0){
                   b[i][j]=0;
               }
               
              else if(j>=a[i-1]){
                   b[i][j]=max(b[i-1][j],b[i-1][j-a[i-1]]+a[i-1]);
               }else{
                   b[i][j]=b[i-1][j];
               }
           }
       }
       
      cout<<sum-2*b[n][temp]<<endl;
        

      }
	return 0;
}
