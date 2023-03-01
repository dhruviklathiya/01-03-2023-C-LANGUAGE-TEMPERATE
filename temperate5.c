#include<stdio.h>
int main (){
    int a,b,c=1;
    printf("Enter value you are willing to find factorial of:");
    scanf("%d",&b);
    for (a = b; a >1; a--)
    {   
        c*=a;
    }
        printf("Factorial of value entered is:%d",c);
    return 0;
}