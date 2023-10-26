// Q.6 WAP to check whether entered number is prime or not ?

#include<stdio.h>

int main(){
    int a,prime=0;
    printf("Enter a natural integer number to check it's prime or not ");
    scanf("%d",&a);
    for (int i = 2; i < a/2; i++)
    {
        if(a%i==0)
            prime=1;      
    }
    if(prime==1)
        printf("Not Prime");
    else
        printf("prime");

    printf("Terminated successfully ");
    return 0;
}