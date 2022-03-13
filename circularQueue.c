#include<stdio.h>
#include<stdlib.h>
int front=-1;
int rear=-1;

//insertion in circular queue
void enqueue(int a[],int n){
    int item;
    
    if((front==0&&rear==n-1)||front==rear+1){
        printf("\nOverflow");
    }
    else if(front==-1&&rear==-1){
        front=0;
        rear=0;
        printf("\nEnter the item to be inserted : ");
        scanf("%d",&item);
        a[rear]=item;
    }
   
    else{
        printf("\nEnter the item to be inserted : ");
        scanf("%d",&item);
        rear=(rear+1)%n;
        a[rear]=item;
    }
}

//displaying 
void display(int a[],int n){
    int i;
    printf("\nthe queue is now : ");
    for(i=front;i!=rear;i=(i+1)%n){ 
       printf("%d ",a[i]);
    }
     if(front==-1){
            printf(" ");
        }
     else{
            printf("%d  ",a[i]);
        }
    
}

//deletion
void dequeue(int a[],int n){
    int temp;
    if(front==-1){
        printf("Underflow");
    }
    else if(front==rear){
        temp=a[front];
        printf("the deleted element is : %d",a[front]);
        front=-1;
        rear=-1;
    }
    else{
        temp=a[front];
        printf("the deleted element is : %d",a[front]);
        front=(front+1)%n;
    }
}
int main(){
    int n,choice,queue[20];
    printf("enter the size of the array : ");
    scanf("%d",&n);
    do{
        printf("\n\t\t\tMAIN MENU");
        printf("\n\t\t\t**********");
        printf("\n1.ENQUEUE\n2.DEQUEUE\n3.EXIT");
        printf("\nEnter your choice :");
        scanf("%d",&choice);
        switch(choice){
        case 1:{
            enqueue(queue,n);
            display(queue,n);
            break;
        }
        case 2:{
            dequeue(queue,n);
            display(queue,n);
            break;
        }
        case 3:{
            exit(0);
        }
        }
    }while(choice==1||choice==2);
    return 0;
}