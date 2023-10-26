    // Q.5 WAP to check whether entered number is palindrome or not?

#include<stdio.h>

int main(){
    long num,temp,reverse=0,remainder;
    printf("Enter a number to check palindrome : ");
    scanf("%d",&num);
    temp = num;
    while(num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    if(temp == reverse)
        printf("The num is paliondrome");
    else
        printf("The number is not paliondrome");

    printf("Terminated successfully ");
    return 0;
}