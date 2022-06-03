 

int main()
{
	int n;
	int arr[200];
	int temp = 0;
	cin >> n;
	for(int i = 0;i<n;i++)
	{
		cin >> arr[i];
	}
 
  temp = arr[0];
  arr[0] = arr[n-1];

  for(int i = n-1 ; i > 1 ; i--)
  {
  	arr[i] = arr[i-1];
  }
  arr[1] = temp;
  for(int i = 0;i<n;i++)
	{
		cout << arr[i] << " ";
	}
return 0;
}