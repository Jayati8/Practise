#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int arr[1000];
	int sum =0;
	// int m=0;

	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}

	 for(int i=0;i<n;i++)  
     {
     	sum = sum + arr[i];
     }    
     
    
     
    return 0;
}