#include <bits/stdc++.h>
using namespace std;

int main() {
    int m,n;
    cin>>m>>n;
    string s1,s2;
    cin>>s1>>s2;
    int t[m+1][n+1];
    for(int i=0;i<m+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            if(i==0||j==0)
            {
                t[i][j]=0;
            }
        }
    }
    for(int i=1;i<m+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                t[i][j]=1+t[i-1][j-1];
            }
            else
            {
                t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
    }
    int i=n+1,j=m+1;
    string s="";
    while(i>0&&j>0)
    {
        if(s1[i-1]==s2[j-1])
        {
          s.push_back(s1[i-1]);
          i--;
          j--;
        }
        else
        {
            if(t[i-1][j]>t[i][j-1])
            {
             i--; 
            }
            else
            {
                j--;
            }
        }
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
	return 0;
}
