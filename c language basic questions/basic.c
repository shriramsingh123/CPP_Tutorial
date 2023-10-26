#include<stdio.h>
void swapWithThirdVariable();
void swapWithoutUsingThirdVariable();


int main(){


    printf("\n Terminated successfully");
    return 0;
}


// Q. 1 WAP to swap 2 integer values
            // a. Using third variable
void swapWithThirdVariable(){
    int a,b,c;
    printf("Enter the integer value of a and b : ");
    scanf("%d%d",&a,&b);
    printf("Before Swapping a = %d, b = %d",a,b);
        c=a;
        a=b;
        b=c;
    printf("\n After Swapping a = %d, b = %d",a,b);
    
}

            // b. Swap Without using Third Variable

void swapWithoutUsingThirdVariable(){
    long a,b;
    printf("Enter the integer value of a and b : ");
    scanf("%ld%ld",&a,&b);
    printf("Before Swapping a = %ld, b = %ld",a,b);
        a=a+b;
        b=a-b;
        a=a-b;

    printf(" \n After Swapping a = %ld, b = %ld",a,b);
    
}


