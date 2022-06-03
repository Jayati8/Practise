#include<bits/stdc++.h>
using namespace std;

void run(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif 
}
int main(){
	run();
	int n;
	int arr[1000];
	int output = 0;
	cin >> n;

	for(int i=0;i<n;i++)
	{
      cin >> arr[i];
	}

	for(int i=0;i<n;i++)
	{

	for(int j=n-1;j>=0;j--)
	{
		if(arr[i]==arr[j]){
       output = max(output,j-i);
       // cout << output << endl;
    }
	}
  }
  cout << output ;
 return 0;
}