
// CPP program to construct a binary tree in level order.
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int key;
	Node* left;
	Node* right;
};
struct Node* newNode(int value)
{
	Node* n = new Node;
	n->key = value;
	n->left = NULL;
	n->right = NULL;
	return n;
}

struct Node* insertValue(struct Node* root, int value,
						queue<Node *>& q)
{
	Node* node = newNode(value);
	if (root == NULL)
		root = node;

	else if (q.front()->left == NULL)
		q.front()->left = node;

	else {
		q.front()->right = node;
		q.pop();
	}

	q.push(node);
	return root;
}

// This function mainly calls insertValue() for
// all array elements. All calls use same queue.
Node* createTree(int arr[], int n)
{
	Node* root = NULL;
	queue<Node*> q;
	for (int i = 0; i < n; i++)
	root = insertValue(root, arr[i], q);
	return root;
}

// This is used to verify the logic.
void levelOrder(struct Node* root)
{
	if (root == NULL)
		return;
	queue<Node*> n;
	n.push(root);
	while (!n.empty()) {
		cout << n.front()->key << " ";
		if (n.front()->left != NULL)
			n.push(n.front()->left);
		if (n.front()->right != NULL)
			n.push(n.front()->right);
		n.pop();
	}
}
vector<int> FirstOrder(Node*root)
{
     vector<int>v;
    if(root==NULL)
    {
        return v;
    }

    stack<Node*>s;
    s.push(root);
    while(!s.empty())
    {
        Node*curr=s.top();
        s.pop();
        v.push_back(curr->key);
        if(curr->right!=NULL)
        {
            s.push(curr->right);
        }
        if(curr->left!=NULL)
        {
            s.push(curr->left);
        }

    }
    return v;

}
vector<int> SecondOrder(Node*root)
{
     vector<int>v;
    if(root==NULL)
    {
        return v;
    }

    stack<Node*>s;
    s.push(root);
    while(!s.empty())
    {
        Node*curr=s.top();
        s.pop();
        v.push_back(curr->key);
        if(curr->left!=NULL)
        {
            s.push(curr->left);
        }
        if(curr->right!=NULL)
        {
            s.push(curr->right);
        }

    }

    return v;

}

// Driver code
int main()
{
	int arr[] = {1,2,2,3,4,4,3};
	int n = sizeof(arr) / sizeof(arr[0]);
	Node* root = createTree(arr, n);
	//levelOrder(root);
	vector<int>v1;
	v1=FirstOrder(root);
	for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    vector<int>v2;
	v2=SecondOrder(root);
	cout<<endl;
	for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
	return 0;
}

