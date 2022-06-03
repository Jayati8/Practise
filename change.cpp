#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   int arr[1000];
   cin >> n;
   for(int i=0;i<n ;i++)
   {
      cin >> arr[i];
   }

   for(int i= 0; i<n-2 ;i++)
   {
   	 swap(arr[i],arr[i+2]);
   }
   for(int i=0;i<n;i++){
   cout << arr[i] << " ";
}
   return 0;
}

 
 