#include<stdio.h>
struct poly{
    int coeff;
    int expo;
};
struct poly p1[10],p2[10],p3[10];
int main(){
    int size1,size2,i=0,j=0,k=0;
    //reading 1st polynomial
    printf("enter the no. of terms of the polynomial 1 : ");
    scanf("%d",&size1);
    for(i=0;i<size1;i++){
        printf("enter the exponent : ");
        scanf("%d",&p1[i].expo);
        printf("enter the coefficient of x^%d : ",p1[i].expo);
        scanf("%d",&p1[i].coeff);
    }
    //reading 2nd polynomial
    printf("enter the no. of terms of the polynomial 2 : ");
    scanf("%d",&size2);
    for(i=0;i<size2;i++){
        printf("enter the exponent : ");
        scanf("%d",&p2[i].expo);
        printf("enter the coefficient of x^%d : ",p2[i].expo);
        scanf("%d",&p2[i].coeff);
    }
    //printing 1st polynomial
    printf("the 1st polynimial is : ");
    for(i=0;i<size1;i++){
        printf("%d(x^%d)",p1[i].coeff,p1[i].expo);
        if(i<size1-1){
            printf("+");
        }
    }
    //printing 2nd polynomial
    printf("the polynimial is : ");
    for(i=0;i<size2;i++){
        printf("%d(x^%d)",p2[i].coeff,p2[i].expo);
        if(i<size2-1){
            printf("+");
        }
    }
    //polynomial addition 
    for(i=0;i<size1;i++){
        for(j=0;j<size2;j++){
            if(p1[i].expo==p2[j].expo){
                
            }
        }
    }
    return 0;
}
