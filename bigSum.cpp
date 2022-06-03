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
	long long sum = 0;
	cin >> n;
	for(int i=0;i<n;i++)
	{
	cin >> a[i];
	}

	for(int i=0;i<n;i++)
	{
	sum = sum + a[i];
	}

	cout << sum;
	}

