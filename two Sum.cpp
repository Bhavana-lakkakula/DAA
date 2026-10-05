#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>&arr,int target)
{
	unordered_map<int,int>mp;
	for(int i=0;i<arr.size();i++)
	{
		int temp=target-arr[i];
		
		if(mp.find(temp)!=mp.end()){
			return {mp[temp],i};
		}
		mp[arr[i]]=i;
	}
	return {};
}

int main()
{
	int n;
	cout<<"Enter no of elements: ";
	cin>>n;
	vector<int>arr(n);
	cout<<"Enter array elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int target;
	cout<<"Enter target sum: ";
	cin>>target;
	vector<int>result=twoSum(arr,target);
	
	if(result.empty())
	 cout<<"No valid pair found ";
	else
	cout<<"Indices: "<<result[0]<<" , "<<result[1]<<endl;
	
	return 0;
}
	
