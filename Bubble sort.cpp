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
	int temp =0;
	int a[1000];
	cin >> n;
	 for(int i=0;i<n;i++)
	 {
	 	cin >> a[i];
	 }

	 for(int i=0;i<n-1;i++)
	 {
	 	flag =0;
	 	for(int j=0;j<n-1-i;j++)
	 	{
	 		if(a[j]>a[j+1])
	 		{
               temp = a[j];
               a[j] = a[j+1];
               a[j+1] = temp;
	 		}
	 	}
	 }

	 for(int i=0;i<n;i++)
	 {
	 	cout << a[i] << " ";
	 }
  }