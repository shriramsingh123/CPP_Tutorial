// Q.7 WAP to generate all the prime numbers within a given range

#include<stdio.h>

int main(){

    int a,b,check=0;
    printf("Enter two natural integer to find all prime number between them ");
    scanf("%d%d",&a,&b);
    for (int i = a; i < b; i++)
    {
        check=0;
        for (int j = 2; j < i/2; j++)
        {
            if (i%j==0)
            {
                check++;
                break;
            }
            
        }
        if (check==0&&i!=1)
             printf("%d ",i);
        
        
    }
    


    printf("Terminated successfully");
    return 0;
}