#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter size of array:";
	cin>>n;
	
	int a[n];
	cout<<"Enter array elements: ";
	for(int i=0;i<n;i++)
	{
		
		cin>>a[i];
	}
	int ans=0;
	for(int i=0;i<n;i++)
	{
		ans = ans ^ a[i];
	}
	cout<<"single number : "<<ans<<endl;
	
	return 0;
}
