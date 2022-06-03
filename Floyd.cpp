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
	int num =0;
	cin >> n;

	for(int rows =1;rows<=n;rows++)
	{
		for(int column=1;column<=rows;column++)
		{
			num++;
			cout << num << " ";
}
       cout << endl;
		}

	}
	
