#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>& nums,int start,int end)
{
	while(start<end)
	{
		swap(nums[start],nums[end]);
		start++;
		end--;
	}
}
void rotateRight(vector<int>&nums,int k){
	int n=nums.size();
	k=k%n;
	reverse(nums,0,n-1);
	reverse(nums,0,k-1);
	reverse(nums,k,n-1);
}
int main()
{
	int n;
	cout<<"Enter size ";
	cin>>n;
	
	vector<int>arr(n);
	cout<<"Enter "<<n<< " elements "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int k;
	cout<<"Enter k: "<<endl;
	cin>>k;
	rotateRight(arr,k);
	
	cout<<"Rotated array: ";
	for(int i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<" ";
		cout<<endl;
	}
	
	return 0;
}
