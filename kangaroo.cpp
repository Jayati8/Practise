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
	int x1,x2,v1,v2;
	cin >> x1;
	cin >> v1;
	cin >> x2;
	cin >> v2;

    if ((v1 <= v2) || ((x2 - x1) % (v2 - v1))) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    return 0;
}