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
//     int n;
//     cin >> n;
// 	int i;
// 	bool flag = true;
// 	string s = to_string(n);
    
//     for(i=0;i<(int)s.length()/2;i++)
//     {
//     	if(s[i]!=s[s.length()-i-1])
//     	{
//     		cout << "no" << endl;
//     		flag = false;
//     		break;
//     	}
    	  
//     }

//     	if(flag)
//     	{

//     	 cout << "yes" << endl;
//     }
    	
// }

int n;
cin >> n;
int rem=0;
int rev=0;

int num = n;
while(n>0)
{
	rem=n%10;
	rev=(rev*10)+rem;
	n /= 10;
}
 
if (num==rev)
{
	cout << "yes" << endl;
}
else
{
	cout << "no" << endl;
}
}