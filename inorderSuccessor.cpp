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
  	void inorderSucess(node *root, int k);
  

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

int count = 0;

void bst::inorderSucess(node *root, int k){
    	
    	
	
}
main()
{
    int a[] = {20,8,22,4,12,10,14};
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
    int k;
    cin>>k;
    tree->inorderSucess(tree->root,k);
    
    getch();
}

