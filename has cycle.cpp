#include<iostream>
#include<vector>
using namespace std;
struct Node{
	int val;
	Node* next;
	Node(int x){
		val=x;
		next=NULL;
	}
};
bool hascycle(Node* head){
	Node* slow=head;
	Node* fast=head;
	while(fast!=NULL&&fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast){
			return true;
		}
	}
	return false;
}
int main(){
	int n;
    cout << "Enter number of nodes: ";
    cin >> n;
 
    vector<int> values(n);
    cout << "Enter " << n << " node values: ";
    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }
	vector<Node*> nodes(n);
	for(int i=0;i<n;i++){
		nodes[i]=new Node(values[i]);
	}
	for(int i=0;i<n-1;i++){
		nodes[i]->next=nodes[i+1];
	}
	Node* head=nodes[0];
	int pos;
	cin>>pos;
	if(pos!=-1){
		nodes[n-1]->next=nodes[pos];
		cout<<"Has cycle: "<<(hascycle(head)?"true":"false")<<endl;
	}
	return 0;
}
