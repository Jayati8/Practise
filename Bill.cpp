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
	int n,k;
	cin >> n >> k;
	int bill[1000];
	for(int i=0;i<n;i++)
	{
		cin >> bill[i];
	}
	int b;
	cin >> b;
    
    int sum =0;
    int sum2=0;
    int btotal=0;
    int bactual=0;
	for(int i=0;i<n;i++)
	{
       sum = sum + bill[i];
       btotal = sum/2;
       sum2 = sum - bill[k];
       bactual= sum2/2;
	}
	 if(b==btotal)
	 {
	 	int bc = btotal-bactual;
	 	cout << bc;
	 }
	 else
	 {
	 	cout << "Bon Appetit";
	 }
}
