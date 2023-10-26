    // Q.4 WAP to find the factorial of a given number.

#include<stdio.h>

int main(){
     int a;
    long fact=1;
    printf("Enter a Integer value to get the factorial : ");
    scanf("%d",&a);
  if (a>0)
  {
      for (int i = 1; i <= a; i++)
    {
        fact *=i;
        if(i==a){
            printf("The factorial of [%d] is : %d",a,fact);
        }
    }
  }
  else if(a<0){
    for (int i = -1; i >= a; i--)
    {
        fact *=i;
        if(i==a){
            printf("The factorial of [%d] is : %d",a,fact);
        }
    }
  }
  else{
    printf("The Factorial of 0 is : 1");
  }
  
    printf("Terminated successfully");
    return 0;
}