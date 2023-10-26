// Q.3 WAP to find the factors of a given number.

#include<stdio.h>

int main(){

 int a;
    printf("Enter a positive Integer Value to find their factors : ");
    scanf("%d",&a);
    for (int i = 1; i <= a/2; i++)
    {
        if(a%i==0){
            printf("%d, ",i);
        }
    }
    printf("%d",a);

    printf(" \n Terminated successfully ");
    return 0;
}

