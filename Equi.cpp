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
      vector<int> ss(n,0);
      int equi = 0;
      bool flag = true;
      for(int i=0;i<n;i++)
      {
      	cin >> a[i];
      }
 
   ps[0]=a[0];
for(int i=1;i<n;i++)
{
	ps[i]= ps[i-1] + a[i];
}

   ss[n-1]=a[n-1];
for(int i=n-2;i>=0;i--)
{
	ss[i] = ss[i+1] + a[i];
}

for(int i = 0;i<n-2;i++)
{
if(ps[i] == ss[i+2])
{
	 equi = i+1;
	 flag = false;
	 break;
}
}
 
if(flag)
{
	cout << -1 << endl;
}

else
{
cout << equi << endl;
}
}
}

