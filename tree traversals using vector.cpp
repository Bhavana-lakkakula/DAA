#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct Node{
	int data;
	Node *left;
	Node *right;
	
	Node(int value)
	{
		data=value;
		left = NULL;
		right = NULL;
	}
};

void preorder(Node* root,vector<int>&result)
{
	if(root==NULL)
	 return;
	 
	 result.push_back(root->data);
	 preorder(root->left,result);
	 preorder(root->right,result);
}

void inorder(Node* root,vector<int>&result){
	if(root==NULL)
	return;
	
	inorder(root->left,result);
	result.push_back(root->data);
	inorder(root->right,result);
}

void postorder(Node* root,vector<int>&result)
{
	if(root==NULL)
	return;
	
	postorder(root->left,result);
	postorder(root->right,result);
	result.push_back(root->data);
}

void levelorder(Node* root,vector<int>&result){
	if(root==NULL)
	return ;
	
	queue<Node*>q;
	q.push(root);
	
	while(!q.empty())
	{
		
		Node* current=q.front();
		q.pop();
		
		result.push_back(current->data);
		
		if(current->left!=NULL)
		q.push(current->left);
		
		if(current->right!=NULL)
		q.push(current->right);
	}
}

void printVector(vector<int>&result)
{
	for(int i=0;i<result.size();i++)
	{
		cout<<result[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	Node* root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(15);
	
	root->left->left=new Node(2);
	root->left->right=new Node(7);
	
	root->right->left=new Node(12);
	root->right->right=new Node(20);
	
	vector<int>pre;
	vector<int>in;
	vector<int>post;
	vector<int>level;
	
	preorder(root,pre);
	inorder(root,in);
	postorder(root,post);
	levelorder(root,level);
	
	cout<<"Preorder: ";
	printVector(pre);
	
    cout << "Inorder: ";
    printVector(in);

    cout << "Postorder: ";
    printVector(post);

    cout << "Level Order: ";
    printVector(level);

    return 0;
}















