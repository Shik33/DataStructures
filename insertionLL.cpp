#include <iostream>

using namespace std;

struct Node{
	int data;
	Node* next;
};

int append(struct Node **head,int new_data )
{
	Node* root= new Node();
	root->data= new_data;
	root->next=(*head);
	(*head)=root;
	while(root = NULL)
	{
		cout<<root->data;
		root = root->next;
	}
	return(0);
}
void printList(Node *node)  
{  
    while (node != NULL)  
    {  
        cout<<" "<<node->data;  
        node = node->next;  
    }  
} 


	int main()  
{  
    Node* head = NULL;  
    append(&head, 6);
    append(&head, 4);  
     append(&head, 5);
     cout<<"Created Linked list is: ";  
    printList(head);  
      
    return 0;  
}