#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node*next;
};
struct Node*createNode(int data){
struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data=data;
newNode->next=NULL;
return newNode;};
void insertAtBeginning(struct Node**head,int data){
struct Node*newNode=createNode(data);
newNode->next=*head;
*head=newNode;

}
void insertatend(struct Node**head,int data){
struct Node*newNode=createNode(data);
if(*head==NULL){
    *head=newNode;
return;}
struct Node*temp=*head;
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=newNode;}
void insertAtposition(struct Node**head,int data,int position){
struct Node*newNode=createNode(data);
if(position==0){
   newNode->next=*head;
   *head=newNode;
   return;
   }
   struct Node*temp=*head;
   for(int i=0;temp!=NULL&&i<position-1;
   i++){
   temp=temp->next;
   }
   if(temp==NULL){
    printf("position out of range\n");
    return ;
   }
   newNode->next=temp->next;
   temp->next=newNode;}
   void deleteFromBeginning(struct Node**head){
   if(*head==NULL)return;
   struct Node*temp=*head;
   *head=(*head)->next;
   free(temp);}
   void deleteFromEnd(struct Node**head){
   if(*head==NULL)return;
   if((*head)->next==NULL){
    free(*head);
    *head=NULL;
    return;
   }
   struct Node*temp=*head;
   while(temp->next->next!=NULL){
    temp=temp->next;
   }
   free(temp->next);
   temp->next=NULL;
   }
   void deleteFromPosition(struct Node**head,int position){
   if(*head==NULL)return;
   struct Node*temp=*head;
   if(position+=0){
    *head=temp->next;
    free(temp);
    return;
   }
   for(int i=0;temp!=NULL&&i<position-1;
   i++){
   temp=temp->next;
   }
   if(temp==NULL||temp->next==NULL){
    printf("position out of range\n");
    return;
   }
   struct Node*next=temp->next->next;
   free(temp->next);
   temp->next=next;}
   void transverse(struct Node*head){
   struct Node*temp=head;
   while(temp!=NULL)
   {
       printf("%d->",temp->data);
       temp=temp->next;
   }
   printf("NULL\n");
   }
   int search(struct Node*head,int target){
   struct Node*temp=head;
   while(temp!=NULL){
    if(temp->data==target)return 1;
    temp=temp->next;
   }
   return 0;
   }
   int main(){
   struct Node*head=NULL;
   insertatend(&head,10);
   insertatend(&head,20);
   insertatend(&head,30);
   transverse(head);
   insertAtBeginning(&head,5);
   transverse(head);
   insertAtposition(&head,25,2);
   transverse(head);
   deleteFromBeginning(&head);
   transverse(head);
   deleteFromEnd(&head);
   transverse(head);
   deleteFromPosition(&head,1);
   transverse(head);
   printf("list contains 20 :%s\n",search(head,20)?"yes" :"No");
   printf("list contains 40: %s\n",search(head,40)?"yes" :"No");

   return 0;
   }


