#include<stdio.h>
#include<stdlib.h>
int top=-1;

//pushing
void push(int a[],int size){
    int item;
    if(top==size-1){
        printf("\nOverflow");
    }
    else{
        printf("\nenter the item to be inserted : ");
        scanf("%d",&item);
        top++;
        a[top]=item;
    }
}

//poping
void pop(int a[]){
    int temp;
    if(top==-1){
        printf("\nUnderflow");
    }
    else{
        temp=a[top];
        printf("\nthe poped element is : %d",a[top]);
        top--;
    }
}

//displaying
void display(int a[]){
    int i;
    printf("\nThe stack is now : ");
    for(i=top;i>-1;i--){
        printf("%d ->",a[i]);
    }
}
int main(){
    int top=-1,choice,a[20],size;
    printf("enter the size of the array : ");
    scanf("%d",&size);
    char ch='y';
    do{
        printf("\n\t\t\tMAIN MENU");
        printf("\n\t\t\t*********");
        printf("\n1.PUSH\n2.POP\n3.EXIT");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:{
            printf("\nPUSHING");           //push
            printf("\n**********");
            push(a,size);
            display(a);
            break;
            }
            case 2:{
            printf("\nPOPING");             //pop
            printf("\n*********");
            pop(a);
            display(a);
            break;
            }
            case 3:{
            exit(0);                        //exit
            }
        }
    }while(ch=='y'||ch=='Y');
    return 0;
}

