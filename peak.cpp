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
	int i;
	int a[1000];
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}

	for(i=0;i<n;i++)
	{
		if(i!=0 && i!=n-1){
		if(a[i] >= a[i-1] && a[i] >= a[i+1])
		{
			cout << i;
			break;
		}
	}
	else if(i==0)
	{
		if(a[i]>a[i+1])
		{
			cout << i;
			break;
		}
	}
	else if(i==n-1)
	{
		if(a[i]>a[i-1])
		{
			cout << i;
			break;
		}
	} 	 	
	 }
	 cout << i-1;
	}

