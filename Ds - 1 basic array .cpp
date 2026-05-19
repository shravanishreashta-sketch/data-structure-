#include<stdio.h>
int main(){
int arr[100],n,i,pos,value,choice,found;
printf("enter number of elements : ");
scanf("%d",&n);
printf("enter elements:\n");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
do{
    printf("\n---MENU---\n");
    printf("1. traversal\n2. Insertion\n3. Deletion\n4. Searching\n5. Exit\n");
    printf("enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
case 1://traversal
    printf("array elements are: ");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    break;
case 2://insertion
    printf("enter position and value: ");
    scanf("%d%d",&pos,&value);
    for(i=n;i>=pos;i--){
    arr[i]=arr[i-1];
    }
    arr[pos-1]=value;
    n++;
    break;
case 3 : //deletion
    printf("enter the position to delete: ");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    break;
case 4: //searching
    printf("enter the element to search: ");
    scanf("%d",&value);
    found=0;
    for(i=0;i<n;i++){
        if(arr[i]==value){
                printf("element found at position %d\
                       n",i+1);
        found=1;
        break;

        }
    }

    if(found==0)
        printf("element not found\n");
    break;
case 5 :
    printf("exiting..\n");
    break;
default:
    printf("invalid choice!\n");
    }
   } while(choice!=5);
    return 0;
    }
