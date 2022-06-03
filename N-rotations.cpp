#include<bits/stdc++.h>
using namespace std;
const int Max=1e7+1;

int main()
{ 

	int n,x;
	vector<int> arr(Max);
	 
	cin >> n;
	cin >> x;

	for(int i = 0;i<n;i++)
	{
		cin >> arr[i];
	}

   for(int i=x;i<n;i++)
   {
    cout << arr[i] << " ";
   }

	for(int i=0;i<x;i++)
	{
		cout<< arr[i] << " ";
	}

return 0;
}

