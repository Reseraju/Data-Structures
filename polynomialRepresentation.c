#include<stdio.h>
struct poly{
    int coeff;
    int expo;
};
struct poly p[10];
int main(){
    int size,i;
    printf("enter the no. of terms of the polynomial : ");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("enter the exponent : ");
        scanf("%d",&p[i].expo);
        printf("enter the coefficient of x^%d : ",p[i].expo);
        scanf("%d",&p[i].coeff);
    }
    printf("the polynimial is : ");
    for(i=0;i<size;i++){
        printf("%d(x^%d)",p[i].coeff,p[i].expo);
        if(i<size-1){
            printf("+");
        }
    }

    return 0;
}