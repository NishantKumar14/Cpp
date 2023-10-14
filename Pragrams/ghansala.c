#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* next=NULL;
} Node;

typedef struct nodeD{
	int data;
	struct nodeD* next;
	struct nodeD* prev;
} NodeD;

Node* creat (int n){
	Node *head=NULL,*p;
	int data;
	while(n--){
		Node *ptr=(Node*)malloc(sizeof(Node));
		scanf("%d",&data);
		ptr->data=data;
		if(head==NULL)
			head=ptr;
		else
			p->next=ptr;
		p=ptr;
	}
	p->next=NULL;
	return head;
}

Node* creatC (int n){
	Node *head=NULL,*p;
	int data;
	while(n--){
		Node *ptr=(Node*)malloc(sizeof(Node));
		scanf("%d",&data);
		ptr->data=data;
		if(head==NULL){
			head=ptr;
		}
		else
			p->next=ptr;
		p=ptr;
	}
	p->next=head;
	return head;
}

NodeD* creatD(int n){
	NodeD *head=NULL,*p;
	int data;
	while(n--){
		NodeD *ptr=(NodeD*)malloc(sizeof(NodeD));
		scanf("%d",&data);
		ptr->data=data;
		if(head==NULL){
			ptr->prev=NULL;
			head=ptr;
		}
		else
		{
			p->next=ptr;
			ptr->prev=p;
		}
		p=ptr;
	}
	p->next=NULL;
	return head;
}

Node* deleteNodeSinglyLinkedList(Node *head,int key){
	if(head==NULL){
		printf("already empty lsit\n"); 
		return NULL;
	}
	Node *ptr=head,*prev=NULL;
	while(ptr!=NULL){
		if(ptr->data==key && prev==NULL){
			ptr=ptr->next;
		}
		else if (ptr->data==key && ptr->next==NULL){
			prev->next=NULL;
		}
		else if(ptr->data==key){
			prev->next=ptr->next;
		}
		prev=ptr;
		ptr=ptr->next;
	}
	return head;
}

NodeD * deleteNodeDoublyLinkedList(NodeD *head,int key){
	if(head==NULL){
		printf("already empty lsit\n"); 
		return NULL;
	}
	NodeD *ptr=head,*prev=NULL;
	while(ptr!=NULL){
		if(ptr->data==key && prev==NULL){
			ptr=ptr->next;
		}
		else if (ptr->data==key && ptr->next==NULL){
			prev->next==NULL;
		}
		else if(ptr->data==key){
			prev->next=ptr->next;
		}
		prev=ptr;
		ptr=ptr->next;
	}
	return head;
}
Node *deleteNodecircularLinkedList(Node *head,int key){
	if(head==NULL){
		printf("already empty lsit\n"); 
		return NULL;
	}
	Node *ptr=head,*prev=NULL;
	while(ptr!=head){
		if(ptr->data==key && prev==NULL){
			ptr=ptr->next;
		}
		else if (ptr->data==key && ptr->next==NULL){
			prev->next==NULL;
		}
		else if(ptr->data==key){
			prev->next=ptr->next;
		}
		prev=ptr;
		ptr=ptr->next;
	}
	return head;
}
void displayS(Node *head){
	while(head!=NULL){
		printf("%d ",head->data);
		head=head->next;
	}
}
void displayC(Node *head){
	Node *p=head;
	while(head!=p){
		printf("%d ",head->data);
		head=head->next;
	}
}
void displayD(NodeD *head){
	while(head!=NULL){
		printf("%d ",head->data);
		head=head->next;
	}
}
int main()
{
	int ch,key,n;
	Node *headS=NULL;
	NodeD *headD=NULL;
	Node *headC=NULL; 
	printf("---creatlinked list---\n 1. singly \n 2.doubly \n 3.circular\n");
	scanf("%d",&ch);
	printf("Enter size of linked list\n");
	scanf("%d",&n);
	printf("Enter element of list\n");
	switch(ch){
		case 1: headS=creat(n);
			break;
		case 2: headD=creatD(n);
			break;
		case 3: headC=creatC(n);
			break;
		default:
			break;
	}
	displayS(headS);
	printf("---Delete key in:---\n1.singly linkned list\n 2. doubly linkned list\n 3.circular linked list\n");
	scanf("%d",&ch);
	printf("enter key to be deleted\n");
	scanf("%d",&key);
	switch(ch){
		case 1: {
			headS=deleteNodeSinglyLinkedList(headS,key);
			displayS(headS);
			break;
		}
		case 2: {
			headD=deleteNodeDoublyLinkedList(headD,key);
			displayD(headD);
			break;
		}
		case 3: {
			headC=deleteNodecircularLinkedList(headC,key);
			displayC(headC);
			break;
		}
		default : break; 
	}
	return 0;
}










// https://www.codechef.com/users/saint_is_no1

// https://cloudonair.withgoogle.com/events/learn21?utm_source=google&utm_medium=blog&utm_campaign=FY21-Q4-global-NA1399-onlineevent-er-seekho&utm_content=blog