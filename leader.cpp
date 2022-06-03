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
	int arr[1000];
	bool flag;
	vector<int> lead;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	for(int i=0;i<n;i++)
	{
       flag = true;
		for(int j=i+1;j<n;j++)
		{
           if(arr[i]>=arr[j]) continue;
           else
           	{
           		flag=false;
           		break;	 
		    }
}
		    if(flag)
		    {
		    	lead.push_back(arr[i]); 
		    }
	
  }
	for(int i=0;i<(int)lead.size();i++)
	{
		cout << lead[i] << " ";
	}
	

// }

// int main(){
// 	run();
// 	int n;
// 	int arr[1000];
// 	vector<int> lead;

// 	cin >> n;

// 	for(int i=0;i<n;i++)
// 	{
// 		cin >> arr[i];
// 	}

// 	int max = arr[n-1];
// 	lead.push_back(arr[n-1]);

// 	for(int i = n-2;i>=0;i--)
// 	{
// 		if(arr[i]>max)
// 		{
// 			max = arr[i];
// 			lead.push_back(arr[i]);
// 		}
// 	}


//    for(int i=lead.size()-1;i>=0;i--)
//    {
// 	cout << lead[i] << " ";
//  }
// }