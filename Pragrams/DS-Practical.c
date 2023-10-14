#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
  int data;
  struct Node*next;
}Node;
void insertAtBegin(Node**head1,int val){
  Node*newNode=(Node*)malloc(sizeof(Node));
  newNode->data=val;
  newNode->next=NULL;
  if((*head1)==NULL){
    (*head1)=newNode;
  }
  Node*temp=(*head1);
  while(temp->next!=NULL)
    temp=temp->next;
  temp->next=newNode;
}
void display(Node*list1){
  printf("LIST\t");
  while(list1){
    printf(" %d ",list1->data);
    list1=list1->next;
  }
  printf("\n");
}
void sort(Node**list){
  Node*temp,*temp1=(*list);
  while(temp1!=NULL){
    temp=temp1->next;
    while(temp!=NULL){
      if(temp1->data>temp->data){
        int val=temp1->data;
        temp1->data=temp->data;
        temp->data=val;
      }
      temp=temp->next;
    }
    temp1=temp1->next;
  }
}
void mergeLists(Node*list1,Node*list2){
  Node*head=NULL;
  while(list1!=NULL && list2!=NULL){
    if(list1->data)
  }
}
int main(){
  Node*list1=NULL,*list2=NULL;
  int n;
  printf("Enter no of nodes: ");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    insertAtBegin(&list1,i+1);
    display(list1);
  }
  for(int i=0;i<n;i++){
    insertAtBegin(&list2,i*i);
    display(list2);
  }
  sort(&list1);display(list1);
  sort(&list2);display(list2);
  // mergeLists(&list1,&list2);display(list1);
  return 0;
}