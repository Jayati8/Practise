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
	cin >> n;
	vector<int> freq(6,0);
	int arr[n];
	int max = 0;

	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}

	for(int i=0;i<n;i++)
	{
		freq[arr[i]]++;
	}
	  
	for(int i=0;i<=5;i++)
	{
		if(freq[i]>max)
		{
			max = freq[i];
		}
		// cout << freq[i] << " ";
	}
	 
	 for(int i=0;i<=5;i++)
	 {
	 	if(max==freq[i])
	 	{
	 		cout << i;
	 		break;
	 	}
	 }

	 // cout << max;
	}




