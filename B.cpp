#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; // variable to store number of elements
    int arr[100]; // to store array of integer type
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i]; // initializing array
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i] > arr[0])
            arr[0] = arr[i];
    }
    cout << arr[0];
    return arr[0];
}