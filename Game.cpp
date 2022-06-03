#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
int arr[100];
cin >> n;
for(int i = 0;i<n;i++)
{
	cin >> arr[i];
}

for(int i=0;i<n-1;i++)
{
	arr[i] =  arr[i]  ^ arr[i+1];
}

for(int i =0 ;i<n;i++)
{
	cout << arr[i] << " ";
}
 
}