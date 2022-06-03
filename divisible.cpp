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
    int ar[1000];
    int k;
    int cnt=0;
    cin >> n >> k;
    for(int i=0;i<n;i++)
    {
    	cin >> ar[i];
    }

    for(int i=0;i<n;i++)
    {
    	for(int j=1;j<n;j++)
    	{
    		if(i<j && (ar[i]+ar[j])%k==0)
    		{
                 // cout << ar[i]+ar[j];
                 cnt++;
    		}
    	}
    }
    cout << cnt;
}