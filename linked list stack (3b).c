#include<stdio.h>
#include<stdlib.h>
//define node struture
struct Node {
int data;
struct Node*next;
};
struct Node*top=NULL;//top of stack
//push operation
void push(int value){
struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
if(newNode==NULL){
    printf("stack over flow (memory not available!)\n");
    return;
}
newNode->data=value;
newNode->next=top;
top=newNode;
printf("%d pushed to stack\n",value);
}
//pop operation
void pop(){
if(top==NULL){
    printf("stack underflow (empty stack)\n");
    return;
}
struct Node*temp=top;
printf("%d popped from stack\n",top->data);

top=top->next;
free(temp);
}
//peek operations
void peek(){
if (top==NULL){
    printf("stack is empty\n");
}else{
printf("top element is : %d\n",top->data);
}
}
//display stack
void display(){
if(top==NULL){
    printf("stack is empty\n");
    return;
}
struct Node*temp=top;
printf("stack elements :");
while(temp!=NULL){
    printf("%d->",temp->data);
    temp=temp->next;
}
printf("NULL\n");
}
//main function
int main(){
int choice,value;
while(1){
        printf("\n----stack Menu---\n");
        printf("1.push\n2.pop\n3.peek\n4.Display\n5.exit\n");
    printf("enter your choice:");
    scanf("%d",&choice);
    switch(choice){
case 1:
    printf("enter value:");
    scanf("%d",&value);
    push(value);
    break;
case 2:
    pop();
    break;
case 3:
    peek();
    break;
case 4:
    display();
    break;
case 5:
    exit(0);
default:
    printf("invalid choice\n");
    }
}
return 0;
}
