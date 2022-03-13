#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int coeff;
    int pow;
    struct Node* ptr;
};

void readPolynomial(struct Node** poly)
{
    int coeff, exp, cont;
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    *poly = temp;
    do{
        printf("\n Coeffecient: ");
        scanf("%d", &coeff);
        printf("\n Exponent: ");
        scanf("%d", &exp);
        temp->coeff = coeff;
        temp->pow = exp;
        temp-> ptr = NULL;
        printf("\nHave more terms? 1 for yes and 0 for No: ");
        scanf("%d", &cont);
        if(cont)
        {
            temp->ptr = (struct Node*)malloc(sizeof(struct Node));
            temp = temp->ptr;
            temp->ptr = NULL;
        }
    }while(cont);  
}

void displayPolynomial(struct Node* poly)
{
    printf("\nPolynomial expression is: ");
    while(poly != NULL)
    {
        printf("%d(X^%d)", poly->coeff, poly->pow);
        poly = poly->ptr;
        if(poly != NULL)
            printf("+");
    }
}

void addPolynomials(struct Node** result, struct Node* first, struct Node* second)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->ptr = NULL;
    *result = temp;
    while(first && second)
    {
        if(first->pow > second->pow)
        {
            temp->coeff = first->coeff;
            temp->pow = first->pow;
            first = first->ptr;
        }
        else if(first->pow < second->pow)
        {
            temp->coeff = second->coeff;
            temp->pow = second->pow;
            second = second->ptr;
        }
        else
        {
            temp->coeff = first->coeff + second->coeff;
            temp->pow = first->pow;
            first = first->ptr;
            second = second->ptr;
        }

        if(first && second)
        {
            temp->ptr = (struct Node*)malloc(sizeof(struct Node));
            temp = temp->ptr;
            temp->ptr = NULL;
        }
    }
    while(first || second)
    {
        temp->ptr = (struct Node*)malloc(sizeof(struct Node));
        temp = temp->ptr;
        temp->ptr = NULL;
           
        if(first)
        {
            temp->coeff = first->coeff;
            temp->pow = first->pow;
            first = first->ptr;
        }

        else if(second)
        {
            temp->coeff = second->coeff;
            temp->pow = second->pow;
            second = second->ptr;
        }
    }
}

int main()
{

    struct Node* first = NULL;
    struct Node* second = NULL;
    struct Node* result = NULL;

    printf("\nEnter the corresponding data:-\n");
    printf("\nFirst polynomial:\n");
    readPolynomial(&first);
    displayPolynomial(first);
    printf("\nSecond polynomial:\n");
    readPolynomial(&second);
    displayPolynomial(second);
    addPolynomials(&result, first, second);
    displayPolynomial(result);
    return 0;
}