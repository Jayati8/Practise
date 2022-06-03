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
	int m=0;
	int grade[1000];

	for(int i=0;i<n;i++)
	{
		cin >> grade[i];
	}


  for(int i=0;i<n;i++)
  {
  	 m = (5-(grade[i]%5));
   if(m < 3 && grade[i]>=38)
   {
        grade[i]+=m;
   }
    
}

   for(int i=0;i<n;i++)
   {
   	cout << grade[i] << " ";
   	 }
 }