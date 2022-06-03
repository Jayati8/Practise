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
	cin >> n;
	vector<string> a;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}

	sort(a.begin(), a.end());
	 
	for(int i=0;i<n;i++)
	{
		cout << a[i] << endl;
	}
}