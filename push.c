#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
//push
void push(int value){
if(top==MAX-1)
    printf("stack overflow\n");
else{
    top++;
    stack[top]=value;
    printf("pushed %d\n",value);
}
}
//pop
void pop(){
if(top==-1)
    printf("stack underflow\n");
    else{
        printf("popped %d\n",stack[top]);
        top--;
    }
}
void display(){
if(top==-1)
    printf("stack is empty\n");
    else{
        printf("stack element: \n");
        for(int i=top;i>=0;i--)
            printf("%d\n",stack[i]);

    }
}
    //main
    int main(){
    push(10);
    push(20);
    }



