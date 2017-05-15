#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class node
{
    public:
    int key;
    node *left;
    node *right;
    node *parent;
};
//node *q[50];
class bst
{

    public:
    node *root;
    node *newt;


    bst()
    {
        root = NULL;

    }

    node* createNode(int data);
    void insertNode(node *newN);
  	void inOrder(node *root);
  	void sumOfKeysGreater(node *r);

};

node* bst::createNode(int data)
{
    node *nn = new node;
    nn->key = data;
    nn->left=nn->right=nn->parent=NULL;
    return nn;
}

void bst::insertNode(node *newN)
{
    node *temp,*prev;
    int last;
    if(!root)
    {
        root = temp = newN;
        return;
    }
    else
    {
        temp = root;
        last = 0;
        while(temp != NULL)
        {
            if(temp->key > newN->key)
            {
                prev = temp;
                temp = temp->left;
                last = 1;
                continue;
            }
            else if (temp->key < newN->key)
            {
                prev = temp;
                temp = temp->right;
                last = 0;
                continue;
            }
        }
        if(last == 0 ) prev->right = newN;
        else prev->left = newN;
        newN->parent = prev;
    }
}


int sum = 0;
void bst::sumOfKeysGreater(node *root){
    	
    	if(root ==  NULL)
    		return;
    		
       	sumOfKeysGreater(root -> right);
		 sum = sum + root -> key;
		 root -> key= sum; 
		sumOfKeysGreater(root -> left);
	
}
void bst::inOrder(node *root){
	if(root == NULL)
		return;
	inOrder(root -> left);
	cout<<root->key<<" ";
	inOrder(root -> right);	
}
main()
{
    int a[] = {2,5,13,7,20};
    int i;
    bst *tree;
    node *newN;
    tree = new bst;
    int count = sizeof(a)/sizeof(int);
    int count1=0;
    int count2=0;
    for(i=0;i<count;i++)
    {
        newN = tree->createNode(a[i]);
        tree->insertNode(newN);
    }
   tree->inOrder(tree->root);
    cout<<"\n";
    tree->sumOfKeysGreater(tree->root);
    tree->inOrder(tree->root);
    
    getch();
}

