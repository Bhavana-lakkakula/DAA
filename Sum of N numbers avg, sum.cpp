#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter no.of elements ";
	cin>>n;
	
	cout<<"Enter "<<n<<" elements";
	int num=0;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		sum += num;
	}
	
	float average = float((sum)/n);
	cout<<"Sum : "<<sum<<endl;
	cout<<"Average : "<<average<<endl;
	
	return 0;
}
