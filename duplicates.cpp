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
	set<int> s;
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin >> x;
		s.insert(x);
	}

	for(int x:s)
	{
		cout << x << " ";
	}
}


