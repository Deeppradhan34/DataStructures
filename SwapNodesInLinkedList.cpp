#include<iostream>
#include<conio.h>
using namespace std;
class Node
{
	public:
		int key;
		Node  *next;
		
};
void swap(int a, int b);
class Nod
{
	public:
		Node *p;
		Node *head;
		void insert(Node *n2);
		Node* create(int n);
		void display(Node *head);
		void swapPairWise(Node *head);
		Nod();

};

Nod::Nod()
{
	p=NULL;

}
Node* Nod::create(int n)
{

	Node *n1=new Node;
	n1->key=n;
	n1->next=NULL;
	return n1;
}

void Nod::insert(Node *n2)
{
	Node *prev,*next;
	if(p==NULL)
	{	head = n2;
		p=n2;
	}
	else
	{
		p->next = n2;
		p = p->next;
	}

}

void Nod ::display(Node *head){
	
	while(head != NULL){
	
		cout<<head->key<<" ";
		head = head -> next;
	}
}
void Nod::swapPairWise(Node *head){
	
	while(head != NULL && head -> next != NULL){
		
		Node *temp = head;
		Node *tempNext = head -> next;
		
	    int temp1 = head -> key;
	    head ->key = head -> next->key;
	    head -> next->key = temp1;
	    head = head -> next->next;
		
	}

}
 

int main()
{
	int n;
	cout<<"ENTER THE NUMBER OF NODES?";
	cin>>n;
	int num;
	Nod ob;
	for(int i=1;i<=n;i++)
	{
		cout<<"ENTER ANY NUMBER IN NODE";
		cin>>num;
		Node *nn;
		nn=ob.create(num);
		ob.insert(nn);
	}
	ob.display(ob.head);
		cout<<"\n";
	ob.swapPairWise(ob.head);

	ob.display(ob.head);
	
	getch();
}



