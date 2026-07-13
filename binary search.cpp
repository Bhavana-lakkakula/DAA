#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &arr,int x,int low,int high)
{
	if(low > high)
	 return -1;
	 else
	 {
	 	int mid = (low + high)/2;
	 	if(x == arr[mid])
	 	{
	 		return mid;
		 }
		 else if(x < arr[mid])
		 {
		 	binarySearch(arr,x,low,mid-1);
		 }
		 else
		 {
		 	binarySearch(arr,x,mid+1,high);
		 }
	 }
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " sorted elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cout << "Enter element to search: ";
    cin >> x;

    int result = binarySearch(arr, x, 0, n - 1);

    if(result == -1)
        cout << "Element not found";
    else
        cout << "Element found at index " << result;

    return 0;
}
