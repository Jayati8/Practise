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
	int a[1000];
	vector<int> freq(10000001,0);
	bool flag = true;
    cin >> n;
	for(int i=0;i<n;i++)
	{
      cin >> a[i];
	}

	for(int i=0;i<n;i++)
	{
		freq[a[i]]++;	}

		for(int i=0;i<n;i++)
		{
			if(freq[a[i]]>1)
			{
				cout << i;
			    flag = false;
			    break;
		    }

        }
        if(flag)
        {
        cout<<"-1";
        }  

}