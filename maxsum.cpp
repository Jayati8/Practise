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
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}

	 int inc = a[0];
	 int exc = 0;

	for(int i = 1;i<n;i++)
	{
		int ninc = exc+ a[i];
		int nexc = max(inc,exc);

		inc = ninc;
		exc = nexc;
	}

	int ans = max(inc,exc);
	cout << ans;

}