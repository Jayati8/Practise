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
	unordered_map<int,int> mp;
	bool flag = true;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		mp.insert({a[i],mp[a[i]]++});
	}

	for(int i=0;i<n;i++)
	{
		if(mp[a[i]]==1)
		{
			cout << a[i];
			flag = false;
			break;
		}
	}

	if(flag)
	{
		cout << 0 << endl;
	}
	
}