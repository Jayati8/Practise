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
	int temp=0;
	int i,j;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
	}

	for(i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>temp)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1]=temp;
		 
}
	for(int i=0;i<n;i++)
	{
	cout << arr[i] << " ";
}
}