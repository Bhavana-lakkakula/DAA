#include<iostream>
#include<vector>
using namespace std;

void MinMax(vector<int>&arr,int i,int j, int &max,int &min)
{
	if(i==j)
	 max=min=arr[i];
	 else if(i==j-1)
	 {
	 	if(arr[i]<arr[j])
	 	{
	 		max=arr[j];
	 		min=arr[i];
		 }
		 else
		 {
		 	max=arr[i];
		 	min=arr[j];
		 }
	 }
	 else
	 {
	 	int mid = (i+j)/2;
	 	int max1,min1;
	 	MinMax(arr,i,mid,max,min);
	 	MinMax(arr,mid+1,j,max1,min1);
	    if(max<max1)
	     max=max1;
	     if(min>min1)
	     min=min1;
	 }
}

int main()
{
	int n;
	
	cout<<"Enter the size of array "<<endl;
	cin>>n;
	
	vector<int>arr(n);
	cout<<"Enter "<<n<<" Elements: \n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int max, min;

    MinMax(arr, 0, n - 1, max, min);

    cout << "Maximum element = " << max << endl;
    cout << "Minimum element = " << min << endl;

    return 0;	
}
