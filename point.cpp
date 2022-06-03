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
		int px,py,qx,qy;
		cin >> px >> py >> qx >> qy;

		int rx = 2*qx-px;
		int ry = 2*qy-py;
		cout << rx << " " << ry << endl;
	}
}