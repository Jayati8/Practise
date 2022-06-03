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
	string s;
	cin >> s;
	bool flag = true;

	for(int i=(int)s.length()-1;i>=0;i--)
	{
		if(s[i]=='1')
		{
		   flag = false;
           cout << i;
           break;
		}
	}
	if(flag)
	{
		cout << -1;
	}
}

