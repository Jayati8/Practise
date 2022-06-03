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
	int i;
	cin >> n;
	 for(int i=0;i<n;i++)
	 {
	 	cin >> a[i];
	 }

	 for(i=0;i<n-1;i++)
	 {
	 	for(int j=0;j<n-1;j++)
	 	{
	 		if(a[j]>a[j+1])
	 		{
               temp = a[j];
               a[j] = a[j+1];
               a[j+1] = temp;
	 		}
	 	}
	 }

	     
	 	cout << "Array is sorted in" << " " << i << " "<< "swaps" << endl;
	 	cout << "First Element:" << a[0] << endl;
	 	cout << "Last Element: " << a[n-1] << endl;
	 
  }