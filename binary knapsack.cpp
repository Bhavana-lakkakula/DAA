#include<bits/stdc++.h>
using namespace std;

struct Item{
	int weight;
	int value;
};
bool cmp(Item a, Item b)
{
	return (double)a.value/a.weight > (double)b.value/b.weight;
}

double FractionalKnapsack(Item A[],int n,int Total_Capacity)
{
	sort(A,A+n,cmp);
	
	int cur_weight=0;
	double final_val=0.0;
	
	for(int i=0;i<n;i++)
	{
		if(cur_weight+A[i].weight<=Total_Capacity)
		{
			cur_weight += A[i].weight;
			final_val +=A[i].value;
		}
	}
	return final_val;
}
int main()
{
	Item A[]={ {10,60},{20,100},{30,120}};
	int n=3;
	int Total_Capacity=50;
	double answer= FractionalKnapsack(A,n,Total_Capacity);
	cout<<"Maximum profit: "<<answer<<endl;
	
	return 0;
}
