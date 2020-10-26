#include<iostream>
#include<queue>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;

};
struct node *root=NULL;

int inorder(struct node *t)
{
    if(t==NULL)
    {
        return 0;
    }
    else
    {
        inorder(t->left);
        cout<<t->data<<" ";
        inorder(t->right);
    }
}



void insert(int no)
{
    struct node *temp;
    temp=new node;
    temp->data=no;
    temp->left=NULL;
    temp->right=NULL;




    queue<struct node*> q;
    q.push(temp);


    while (!q.empty()) {
        struct node* temp = q.front();
        q.pop();

        if (!temp->left) {
            temp->left = insert(no);
            break;
        } else
            q.push(temp->left);

        if (!temp->right) {
            temp->right = insert(no);
            break;
        } else
            q.push(temp->right);
    }



}

int main()
{
    int n;
    cout<<"Total no of nodes "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
         cout<<"Enter x: "<<endl;
        cin>>x;
        insert(x);

    }


    cout<<"Inorder traversal is "<<" ";
    inorder(root);

}
