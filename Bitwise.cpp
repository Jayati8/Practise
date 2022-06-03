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
	int num;
	cin >> num;

	if(num & 1)
	{
		cout << "number is odd" << endl;
	}

	if(!(num & 1))
	{
		cout << "number is even" << endl;
	} 
}