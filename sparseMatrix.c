#include<stdio.h>


void readMatrix(int a[10][10],int row ,int col){
    int i,j;
    printf("enter the elements of matrix :");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("element[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}

void createSparse(int a[10][10],int row,int col,int b[10][10]){
    int i,j,k;
    k=1;
    b[0][0]=row;
    b[0][1]=col;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(a[i][j]!=0){
                b[k][0]=i;
                b[k][1]=j;
                b[k][2]=a[i][j];
            }
        }
    }
    b[0][2]=k-1;
}



int main(){
    int a[10][10],b[10][10],row,col;
    printf("enter the size of the array : ");
    scanf("%d%d",&row ,&col);
    readMatrix(a,row,col);
    createSparse(a,row,col,b);
}