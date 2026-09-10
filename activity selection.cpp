#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Activity{
	int number;
	int start;
	int finish;
};

bool compare(Activity a , Activity b)
{
	return a.finish < b.finish;
}

int main()
{
	int n;
	cout<<"Enter number of activities: ";
	cin>>n;
	vector<Activity> activities(n);
	
	cout<<"Enter start times\n ";
	for(int i=0;i<n;i++)
	{
		cin>>activities[i].start;
		activities[i].number = i+1;
	}
	cout<<"Enter finish times\n ";
	for(int i=0;i<n;i++)
	{
		
		cin>>activities[i].finish;
	}
	sort(activities.begin(),activities.end(),compare);
	cout<<"Selected activities: ";
	cout<<activities[0].number<<" ";
	
	int lastFinish = activities[0].finish;
	
	for(int i=1;i<n;i++)
	{
		if(activities[i].start>=lastFinish)
		{
			cout<<activities[i].number<<" ";
			
			lastFinish=activities[i].finish;
		}
	}
	return 0;
	
}
