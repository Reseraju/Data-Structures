#include<stdio.h>
void merge(int a[20],int lb,int mid,int ub){
    int i,j,k,b[20];
    i=lb;
    j=mid+1;
    k=lb;
    while(i<=mid && j<=ub){
        if(a[i]<=a[j]){
            b[k]=a[i];
            i++;
            k++;
        }
        else{
            b[k]=a[j];
            k++;
            j++;
        }
    }
    if(i>mid){
        while(j<=ub){
            b[k]=a[j];
            j++;
            k++;
        }
    }
    else{
        while(i<=mid){
            b[k]=a[i];
            i++;
            k++;
        }
    }
    for(k=lb;k<=ub;k++){
        a[k]=b[k];
    }
}
void mergeSort(int a[20],int lb,int ub){
    int mid;
    if(lb<ub){
        mid=(lb+ub)/2;
        mergeSort(a,lb,mid);
        mergeSort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
int main(){
    int a[20],i,n;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    printf("enter the elements of the array : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    mergeSort(a,0,n-1);
    printf("the sorted array is :");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}