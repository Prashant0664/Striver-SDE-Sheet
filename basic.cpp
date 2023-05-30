#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=9;
   int arr[n]={1,2,3,4,5,5,6,7,8};
   int ans=0;
   for(int i=0;i<n;i++){
    // cout<<ans<<" ";
    // ans^=arr[i];
    ans^=(i+1);

   }
   int ne=35;
   cout<<((ne)&-ne);
}

// 110