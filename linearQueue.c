#include<stdio.h>
#include<stdlib.h>
int front=-1;
int rear=-1;
//insertion
void enqueue(int a[],int n){
    int i,item;
    if(front==0&&rear==n-1){
        printf("\noverflow");
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
        rear++;
        a[rear]=item;
    }
}

//displaying
void display(int a[],int n){
    int i=0;
    printf("\nThe queue is now : ");
    for(i=front;i<=rear;i++){
        if(front>n||front==-1){
            printf(" ");
        }
        else{
            printf("%d->",a[i]);
        }
        
    }
}

//deletion
void dequeue(int a[],int n){
    int i,temp;
    if((front==-1&&rear==-1)||front>n-1){
        printf("\nunderflow");
    }
    else if(front==rear){
        temp = a[front];
        printf("\nthe deleted element is %d",a[front]);
        front=-1;
        rear=-1;
    }
    else{
        temp=a[front];
        printf("\nthe deleted element is %d",a[front]);
        front++;
    }
}

int main(){
    int n,choice,queue[20];
    printf("\nenter the size of queue : ");
    scanf("%d",&n);
    do{
        printf("\n\t\t\tMAIN MENU");
        printf("\n\t\t\t************");
        printf("\n1.ENQUEUE\n2.DEQUEUE\n3.EXIT");
        printf("\nEnter your choice : ");
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
                break;
            }
        }
    }while(choice==1||choice==2);
    return 0;
}