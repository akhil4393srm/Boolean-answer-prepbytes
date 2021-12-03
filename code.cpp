#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  for(int x=0;x<t;x++)
 {
  int n,m;
  cin>>n>>m;
  int arr[n][m];
  int l=-1,mx=0,c;
  for(int i=0;i<n;i++)
  {
    c=0;
    for(int j=0;j<m;j++)
    {
      cin>>arr[i][j];
      c+=arr[i][j];
    }
    if(c>mx)
    {
     l=i;
     mx=c;
    }
  }
  cout<<l<<endl;
 }
  return 0;
}
