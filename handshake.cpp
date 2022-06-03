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
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << (n*(n-1)/2) << endl;
	}
}