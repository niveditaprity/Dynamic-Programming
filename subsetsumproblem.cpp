#include<bits/stdc++.h>
using namespace std;
bool issubsetsum(int n,int arr[],int sum)
{
  if(sum%2==1)
  {
      return false;
  }
  int target=sum/2;
        bool t[n+1][target+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<target+1;j++)
            {
                if(i==0)
                {
                    t[i][j]=false;
                }
                if(j==0)
                {
                    t[i][j]=true;
                }
            }
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<target+1;j++)
            {
                if(arr[i-1]<=j)
                {
                  t[i][j]=t[i-1][j]||t[i-1][j-arr[i-1]];  
                }
                else
                {
                    t[i][j]=t[i-1][j];
                }
            }
        }
        return t[n][target];
}
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
    if(issubsetsum(n,arr,sum)==true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
    //code
	return 0;
}
