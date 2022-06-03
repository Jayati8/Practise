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
	int t;
	cin >> t;
	while (t--)
	{
      int n;
      cin >> n;
      int a[1000];
      vector<int> ps(n,0);
      for(int i=0;i<n;i++)
      {
      	cin >> a[i];
      }
 ps[0]=a[0];
 cout << ps[0] << " ";
for(int i=1;i<n;i++)
{

	ps[i]= ps[i-1] + a[i];
	cout << ps[i] << " " ;
}
}
}
