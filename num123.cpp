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
	int i;
	int a[1000];
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
 
	for(i=0;i<n;i++)
	{
		int rem;
		bool flag = true;
		int temp=a[i];
		while(a[i]>0)
		{
			rem = a[i] % 10;
			a[i] = a[i]/10;

		if(rem!=1 && rem!=2 && rem!=3)
		{
			flag = false;
			break;
		}
       }
			if(flag)
	{
		 ;
	} 
	}

 
}