class Solution {
public:
    int longestCommonSubsequence(string s1, string s2) {
        int x=s1.size();
        int y=s2.size();
      int t[x+1][y+1];
 for(int i=0;i<x+1;i++)
 {
     for(int j=0;j<y+1;j++)
     {
         if(i==0||j==0)
         {
             t[i][j]=0;
         }
     }
 }
 for(int i=1;i<x+1;i++)
 {
     for(int j=1;j<y+1;j++)
     {
         if(s1[i-1]==s2[j-1])
         {
             t[i][j]=1+t[i-1][j-1];
         }
         else
         {
             t[i][j]=max(t[i][j-1],t[i-1][j]);
         }
     }
 }
 return t[x][y];
    // your code here
      
    }
};
