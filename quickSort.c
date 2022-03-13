#include<stdio.h>
int partition(int a[10],int lb,int ub) {
int pivot,start,end,temp;
if(lb<ub){
pivot=a[lb];
start=lb;
end=ub;
}
while(start<end) {
while(a[start]<=pivot) {
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
void quicksort(int a[10],int lb,int ub){
int loc;
if(lb<ub) {
loc=partition(a,lb,ub);
quicksort(a,lb,loc-1);
quicksort(a,loc+1,ub);
}
}
int main(){
int a[10];
int limit,i,lb,ub;
printf("Enter size of the array:");
scanf("%d",&limit);
printf("\nEnter elements of the array:");
for(i=0;i<limit;i++){
printf("\nElement[%d]:",i);
scanf("%d",&a[i]);
}
lb=0;
ub=limit-1;
partition(a,lb,ub);
quicksort(a,lb,ub);
printf("\nSorted array is:\n");
for(i=0;i<limit;i++) {
printf("%d\t",a[i]);
}
return 0;
}