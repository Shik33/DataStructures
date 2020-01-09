#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

void midLL(Node *head_ref)
{
	int c = 0;
	struct Node *m = head_ref;
	while(head_ref != NULL)
	{
		if (c & 1)
			m = m->next;
			
		++c;
		head_ref = head_ref->next;
	}
	if (m != NULL)
		cout<<"The midpoint is"<<m->data<<"\n";
}
void linkedList(struct Node** head_ref, int n_data){
	struct Node* n = (struct Node*) malloc (sizeof(struct Node*));
	n->data = n_data;
	n->next = (*head_ref);
	(*head_ref) = n;
}
void print(struct Node* ptr)
{
	while(ptr != NULL)
	{
		cout<<ptr->data<<"->";
		ptr=ptr->next;
	}
	cout<<"NULL";
}

int main()
{
	struct Node  *head = NULL;
	int n;
	int i;
	
	cin>>n;
	i = n;
	while(i >= 0)
	{
		linkedList (&head,i);
		print(head);
		midLL(head);
		i--;
	}
	
	return(0);
}
