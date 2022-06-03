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
	int a[1000];
	int b[1000];
	int index=0;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(int i=0;i<n-1;i++)
	{
		cin >> b[i];
	}

	for(int i=0;i<n;i++)
	{
		if(a[i] != b[i]) 
		{
			index = i;
			break;
		}

	}

	cout<< index;
}



