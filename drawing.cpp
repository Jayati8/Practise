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
	int p;
	int f,b;
	cin >> n;
	cin >> p;

	if(p & 1)
	{
		p--;
	}

	f = p/2;
	b = (n-p)/2;

	cout << min(f,b) << endl;
}
