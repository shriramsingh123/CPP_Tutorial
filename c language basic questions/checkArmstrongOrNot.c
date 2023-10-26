// Q.8 WAP to check whether number is Armstrong or not
#include<stdio.h>

// counting the number of digits in the number
int count(int n){
    int digit=0;
    while (n!=0)
    {
        n=n/10;
        digit++;
    }
    return digit;
    
}

int main(){

    int num,temp,rem,res=0,n=1;
    printf("Enter a natural integer number to check it's armstrong or not : ");
    scanf("%d",&num);
    temp = num;
    int digit = count(num);
    while (num !=0)
    {
        n=1;
        rem = num%10;

        for (int i = 0; i < digit; i++)
            n*=rem;         // Temprorly storing the power of the multiplication of the remainder

        res +=n;
        num/=10;
    }

    if (temp==res)
    {
        printf("\nArmstrong");
    }
    else
        printf("\nNot Armstrong");
    
    printf("\nTerminated Successfully");
    return 0;
}
