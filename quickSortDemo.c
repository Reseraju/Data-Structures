#include<stdio.h>
int partition(int a[20],int lb,int ub){
    int start,end,temp,pivot;
    if(lb<ub){
        pivot=a[lb];
        start=lb;
        end=ub;
    }
    while(start<end){
        while(a[start]<=pivot){
            start++;
        }
        while(a[end]>pivot){
            end--;
        }
        if(start<end){
            temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
    }
    temp=a[lb];
    a[lb]=a[end];
    a[end]=temp;
    return end;
}

int quickSort(int a[20],int lb,int ub){
    int loc;
    if(lb,ub){
        partition(a,lb,ub);
        loc=partition(a,lb,ub);
        quickSort(a,lb,loc-1);
        quickSort(a,loc+1,ub);
    }    
}


int main(){
    int i,lb,ub,limit,a[20];
    printf("enter the size of the array : ");
    scanf("%d",&limit);
    printf("enter the elements : ");
    for(i=0;i<limit;i++){
        printf("\nElement[%d] : ",i);
        scanf("%d",&a[i]);
    }
    
    lb=0;
    ub=limit-1;
    partition(a,lb,ub);
    quickSort(a,lb,ub);
    printf("\nthe sorted array is : ");
    for(i=0;i<limit;i++){
        printf("%d ",a[i]);
    }
    return 0;
}